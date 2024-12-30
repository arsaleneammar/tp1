#include "Vecteur.h"

Vecteur::Vecteur(double x, double y) : x(x), y(y) {}

void Vecteur::afficher() const {
    cout << "(" << x << ", " << y << ")" << endl;
}

void Vecteur::deplacer(double dx, double dy) {
    x += dx;
    y += dy;
}
