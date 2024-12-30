#include <iostream>
#include <vector>
using namespace std;

void appliquerFiltre(vector<int>& vec, function<void(int&, int)> filtre) {
    int seuil = 0;
    if (filtre.target<void(*)(int&, int)>() == greaterThan) {
        cout << "Donner seuil: ";
        cin >> seuil;
    }
    for (int& e : vec) {
        filtre(e, seuil);
    }
}

int main() {
    vector<int> tab{ -2, 3, -33, 7, 99, 6, 2, -39 };

    auto afficherPositif = [](int& x, int seuil = 0) {
        if (x >= 0)
            cout << x << "\t";
    };

    auto afficherNegatif = [](int& x, int seuil = 0) {
        if (x < 0)
            cout << x << "\t";
    };

    auto superieurA = [](int& x, int seuil) {
        if (x >= seuil)
            cout << x << "\t";
    };

    cout << "************************\n";
    cout << "* 1. Afficher positif *\n";
    cout << "* 2. Afficher Negatif *\n";
    cout << "* 3. Superieur A      *\n";
    cout << "************************\n";
    cout << "Entrez votre choix? ";

    int choix;
    cin >> choix;

    switch (choix) {
        case 1: appliquerFiltre(tab, afficherPositif); break;
        case 2: appliquerFiltre(tab, afficherNegatif); break;
        case 3: appliquerFiltre(tab, superieurA); break;
        default: break;
    }

    return 0;
}
