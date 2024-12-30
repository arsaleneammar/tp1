#include "Vecteur3D.h"

Vecteur3D::Vecteur3D(double x, double y, double z) : Vecteur(x, y), z(z) {}

void Vecteur3D::afficher() const {
    cout << "(" << x << ", " << y << ", " << z << ")" << endl;
}

void Vecteur3D::deplacer(double dx, double dy, double dz) {
    Vecteur::deplacer(dx, dy);
    z += dz;
}
