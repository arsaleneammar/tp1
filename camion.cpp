#include "Camion.h"
Camion::Camion(int annee, double prix, double chargeMax)
    : Vehicule(annee, prix), chargeMax(chargeMax) {}

void Camion::accelerer() const {
    cout << "Je peux atteindre 120 km/h." << endl;
}

void Camion::afficher() const {
    Vehicule::afficher();
    cout << "Charge maximale : " << chargeMax << " tonnes" << endl;
}
