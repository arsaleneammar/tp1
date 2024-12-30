#include <iostream>
using namespace std;

struct Produit {
    string type;
    double prixHT;
    bool solde;
};

double calculerPrix(const Produit& p) {
    double tauxTaxe = (p.type == "luxe") ? 0.25 : 0.19;
    double prixTTC = p.prixHT * (1 + tauxTaxe);
    if (p.solde) {
        prixTTC *= 0.80;
    }
    return prixTTC;
}

int main() {
    Produit produit1 = {"luxe", 100.0, false};
    Produit produit2 = {"standard", 50.0, true};
    Produit produit3 = {"luxe", 200.0, true};
    Produit produit4 = {"standard", 75.0, false};
    cout << "Prix du produit 1 (luxe sans solde): " << calculerPrix(produit1) << " €" << endl;
    cout << "Prix du produit 2 (standard soldé): " << calculerPrix(produit2) << " €" << endl;
    cout << "Prix du produit 3 (luxe soldé): " << calculerPrix(produit3) << " €" << endl;
    cout << "Prix du produit 4 (standard sans solde): " << calculerPrix(produit4) << " €" << endl;

    return 0;
}
