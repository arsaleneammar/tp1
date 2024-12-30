#include "Vecteur.h"
#include "Vecteur3D.h"

int main() {
    Vecteur v;
    cout << "Vecteur nul : ";
    v.afficher();
    v.deplacer(3.5, 2.5);
    cout << "Vecteur apr�s d�placement : ";
    v.afficher();
    Vecteur3D* v3d = new Vecteur3D(1.0, 2.0, 3.0);
    cout << "Vecteur3D initial : ";
    v3d->afficher();
    v3d->deplacer(0.5, 0.5, 1.5);
    cout << "Vecteur3D apr�s d�placement : ";
    v3d->afficher();
    delete v3d;

    return 0;
}
