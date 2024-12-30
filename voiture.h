#ifndef VOITURE_H
#define VOITURE_H

#include "Vehicule.h"

class Voiture : public Vehicule {
private:
    int nbPlaces;

public:
    Voiture(int annee, double prix, int nbPlaces);
    void accelerer() const override;
    void afficher() const override;
};

#endif
