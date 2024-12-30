#ifndef VEHICULE_H
#define VEHICULE_H

#include <iostream>
#include <string>

using namespace std;

class Vehicule {
protected:
    static int numSerie; // Num�ro de s�rie global partag� par tous les v�hicules
    static int numVehicule; // Num�ro de v�hicule global partag�
    int serie; // S�rie actuelle du v�hicule
    int numeroVehicule; // Num�ro de v�hicule dans la s�rie
    int annee; // Ann�e du mod�le
    double prix; // Prix du v�hicule

public:
    // Constructeur
    Vehicule(int annee, double prix);

    // M�thodes
    virtual void accelerer() const = 0; // M�thode abstraite
    virtual void afficher() const; // Affiche les informations du v�hicule
};

#endif // VEHICULE_H
