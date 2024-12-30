#ifndef VEHICULE_H
#define VEHICULE_H

#include <iostream>
#include <string>

using namespace std;

class Vehicule {
protected:
    static int numSerie; // Numéro de série global partagé par tous les véhicules
    static int numVehicule; // Numéro de véhicule global partagé
    int serie; // Série actuelle du véhicule
    int numeroVehicule; // Numéro de véhicule dans la série
    int annee; // Année du modèle
    double prix; // Prix du véhicule

public:
    // Constructeur
    Vehicule(int annee, double prix);

    // Méthodes
    virtual void accelerer() const = 0; // Méthode abstraite
    virtual void afficher() const; // Affiche les informations du véhicule
};

#endif // VEHICULE_H
