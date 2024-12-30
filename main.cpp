#include "Voiture.h"
#include "Camion.h"

int main() {
    Voiture voiture1(2023, 50000, 5);
    cout << "Informations de la voiture :" << endl;
    voiture1.afficher();
    voiture1.accelerer();
    Camion camion1(2022, 120000, 18);
    cout << "\nInformations du camion :" << endl;
    camion1.afficher();
    camion1.accelerer();
    Voiture voiture2(2021, 40000, 4);
    Camion camion2(2020, 150000, 25);

    cout << "\nAutres véhicules :" << endl;
    voiture2.afficher();
    camion2.afficher();

    return 0;
}
