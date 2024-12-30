#include <iostream>
#include <vector>
using namespace std;

int produitScalaire(const vector<int>& U, const vector<int>& V) {
    int resultat = 0;
    for (size_t i = 0; i < U.size(); ++i) {
        resultat += U[i] * V[i];
    }
    return resultat;
}

int main() {
    int taille;
    cout << "Entrez la dimension des vecteurs : ";
    cin >> taille;

    vector<int> U(taille), V(taille);

    cout << "Entrez les elements du vecteur U :\n";
    for (int i = 0; i < taille; ++i) {
        cin >> U[i];
    }

    cout << "Entrez les elements du vecteur V :\n";
    for (int i = 0; i < taille; ++i) {
        cin >> V[i];
    }

    int resultat = produitScalaire(U, V);

    cout << "Le produit scalaire de U et V est : " << resultat << endl;

    return 0;
}
