#include "Voiture.h"

Voiture::Voiture(int annee, double prix, int nbPlaces)
    : Vehicule(annee, prix), nbPlaces(nbPlaces) {}
void Voiture::accelerer() const {
    cout << "Je peux atteindre 200 km/h." << endl;
}
void Voiture::afficher() const {
    Vehicule::afficher();
    cout << "Nombre de places : " << nbPlaces << endl;
}
