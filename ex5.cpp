#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Ville {
    string nom;
    double latitude;
    double longitude;
};

void rechercherVilleParNom(const vector<Ville>& villes, const string& nom) {
    for (const auto& ville : villes) {
        if (ville.nom == nom) {
            cout << "La ville " << nom << " se situe à : "
                 << "Latitude: " << ville.latitude << ", "
                 << "Longitude: " << ville.longitude << endl;
            return;
        }
    }
    cout << "Ville non trouvée !" << endl;
}

int main() {
    vector<Ville> villes = {
        {"Tunis", 36.8065, 10.1815},
        {"Sfax", 34.7406, 10.7602},
        {"Sousse", 35.8256, 10.6369},
        {"Kairouan", 35.6786, 9.8761},
    };

    string villeRecherchee;
    cout << "Entrez le nom de la ville à rechercher : ";
    cin >> villeRecherchee;

    rechercherVilleParNom(villes, villeRecherchee);

    return 0;
}
