#include <iostream>
#include <cmath>
using namespace std;

class Complexe {
private:
    double Re, Img;

public:
    Complexe(double re = 0.0, double img = 0.0) : Re(re), Img(img) {}

    void afficher() const {
        cout << Re << " + " << Img << "i" << endl;
    }

    double module() const {
        return sqrt(Re * Re + Img * Img);
    }

    Complexe conjugue() const {
        return Complexe(Re, -Img);
    }

    Complexe operator+(const Complexe& c) const {
        return Complexe(Re + c.Re, Img + c.Img);
    }

    Complexe operator+(double d) const {
        return Complexe(Re + d, Img);
    }

    friend Complexe operator+(double d, const Complexe& c) {
        return Complexe(c.Re + d, c.Img);
    }

    Complexe operator-(const Complexe& c) const {
        return Complexe(Re - c.Re, Img - c.Img);
    }

    Complexe operator-(double d) const {
        return Complexe(Re - d, Img);
    }

    friend Complexe operator-(double d, const Complexe& c) {
        return Complexe(d - c.Re, -c.Img);
    }

    Complexe operator*(const Complexe& c) const {
        return Complexe(Re * c.Re - Img * c.Img, Re * c.Img + Img * c.Re);
    }

    Complexe operator*(double d) const {
        return Complexe(Re * d, Img * d);
    }

    friend Complexe operator*(double d, const Complexe& c) {
        return Complexe(c.Re * d, c.Img * d);
    }
};

int main() {
    Complexe c1(3.0, 4.0), c2(1.0, 2.0);
    double val = 2.0;

    cout << "Complexe c1 : ";
    c1.afficher();

    cout << "Complexe c2 : ";
    c2.afficher();

    cout << "Somme c1 + c2 : ";
    (c1 + c2).afficher();

    cout << "Somme c1 + " << val << " : ";
    (c1 + val).afficher();

    cout << "Somme " << val << " + c2 : ";
    (val + c2).afficher();

    cout << "Différence c1 - c2 : ";
    (c1 - c2).afficher();

    cout << "Différence c1 - " << val << " : ";
    (c1 - val).afficher();

    cout << "Différence " << val << " - c2 : ";
    (val - c2).afficher();

    cout << "Produit c1 * c2 : ";
    (c1 * c2).afficher();

    cout << "Produit c1 * " << val << " : ";
    (c1 * val).afficher();

    cout << "Produit " << val << " * c2 : ";
    (val * c2).afficher();

    cout << "Module de c1 : " << c1.module() << endl;
    cout << "Conjugué de c1 : ";
    c1.conjugue().afficher();

    return 0;
}
