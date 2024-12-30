#include "Vehicule.h"
int Vehicule::numSerie = 1;
int Vehicule::numVehicule = 1;
Vehicule::Vehicule(int annee, double prix) : annee(annee), prix(prix) {
    serie = numSerie;
    numeroVehicule = numVehicule++;

    if (numVehicule > 10000) {
        numVehicule = 1;
        numSerie++;
    }
}

void Vehicule::afficher() const {
    cout << serie << " TUN " << numeroVehicule
         << " | Année : " << annee
         << " | Prix : " << prix << " TND" << endl;
}
