#include <iostream>
#include <cmath>
using namespace std;

class Vecteur3D {
private:
    float x, y, z;

public:
    Vecteur3D(float x = 0.0f, float y = 0.0f, float z = 0.0f) : x(x), y(y), z(z) {}

    void affichage() const {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }

    Vecteur3D somme(const Vecteur3D& v) const {
        return Vecteur3D(x + v.x, y + v.y, z + v.z);
    }

    float produitScalaire(const Vecteur3D& v) const {
        return x * v.x + y * v.y + z * v.z;
    }

    bool coincide(const Vecteur3D& v) const {
        return (x == v.x && y == v.y && z == v.z);
    }

    float norme() const {
        return sqrt(x * x + y * y + z * z);
    }

    Vecteur3D normax(const Vecteur3D& v) const {
        return (norme() >= v.norme()) ? *this : v;
    }

    Vecteur3D* normaxAdresse(const Vecteur3D* v) const {
        return (norme() >= v->norme()) ? const_cast<Vecteur3D*>(this) : const_cast<Vecteur3D*>(v);
    }

    Vecteur3D& normaxReference(Vecteur3D& v) const {
        return (norme() >= v.norme()) ? const_cast<Vecteur3D&>(*this) : v;
    }
};

int main() {
    Vecteur3D v1(1.0f, 2.0f, 3.0f), v2(4.0f, 5.0f, 6.0f);

    cout << "Vecteur v1 : ";
    v1.affichage();

    cout << "Vecteur v2 : ";
    v2.affichage();

    cout << "Somme de v1 et v2 : ";
    Vecteur3D v3 = v1.somme(v2);
    v3.affichage();

    cout << "Produit scalaire de v1 et v2 : " << v1.produitScalaire(v2) << endl;

    cout << "Les vecteurs v1 et v2 coïncident : " << (v1.coincide(v2) ? "Oui" : "Non") << endl;

    cout << "Norme de v1 : " << v1.norme() << endl;
    cout << "Norme de v2 : " << v2.norme() << endl;

    Vecteur3D maxParValeur = v1.normax(v2);
    cout << "Vecteur avec la plus grande norme (par valeur) : ";
    maxParValeur.affichage();

    Vecteur3D* maxParAdresse = v1.normaxAdresse(&v2);
    cout << "Vecteur avec la plus grande norme (par adresse) : ";
    maxParAdresse->affichage();

    Vecteur3D& maxParReference = v1.normaxReference(v2);
    cout << "Vecteur avec la plus grande norme (par référence) : ";
    maxParReference.affichage();

    return 0;
}
