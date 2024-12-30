#ifndef VECTEUR_H
#define VECTEUR_H

#include <iostream>
using namespace std;

class Vecteur {
protected:
    double x, y;

public:
    Vecteur(double x = 0, double y = 0);
    void afficher() const;
    void deplacer(double dx, double dy);
};

#endif
