#include <iostream>
#include <vector>
using namespace std;

void remplirTableau(vector<int>& tableau, int taille) {
    for (int i = 0; i < taille; ++i) {
        cin >> tableau[i];
    }
}

int compterPositifs(const vector<int>& tableau) {
    int count = 0;
    for (int val : tableau) {
        if (val > 0) {
            ++count;
        }
    }
    return count;
}

int main() {
    int taille = 10;
    vector<int> tableau(taille);

    cout << "Entrez " << taille << " valeurs :\n";
    remplirTableau(tableau, taille);

    int positives = compterPositifs(tableau);

    cout << "Nombre de valeurs positives : " << positives << endl;

    return 0;
}

