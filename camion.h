#ifndef CAMION_H
#define CAMION_H

#include "Vehicule.h"

class Camion : public Vehicule {
private:
    double chargeMax;

public:
    Camion(int annee, double prix, double chargeMax);
    void accelerer() const override;
    void afficher() const override;
};

#endif
