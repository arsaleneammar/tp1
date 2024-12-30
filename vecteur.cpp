#ifndef VECTEUR3D_H
#define VECTEUR3D_H

#include "Vecteur.h"

class Vecteur3D : public Vecteur {
private:
    double z;

public:
    Vecteur3D(double x = 0, double y = 0, double z = 0);
    void afficher() const override;
    void deplacer(double dx, double dy, double dz);
};

#endif
