#include <iostream>
#include <vector>
using namespace std;

void remplir(vector<int>& tableau, int N) {
    tableau.resize(N);
    for (int i = 0; i < N; ++i) {
        cin >> tableau[i];
    }
}

void recherche(const vector<int>& tableau, int V) {
    bool trouve = false;
    for (size_t i = 0; i < tableau.size(); ++i) {
        if (tableau[i] == V) {
            cout << "V se trouve dans le tableau à la position " << i << endl;
            trouve = true;
            break;
        }
    }
    if (!trouve) {
        cout << "V ne se trouve pas dans le tableau" << endl;
    }
}

int main() {
    int N;
    cout << "Entrez la taille du tableau: ";
    cin >> N;

    vector<int> tableau;
    cout << "Entrez " << N << " valeurs entières :\n";
    remplir(tableau, N);

    int V;
    cout << "Entrez la valeur à rechercher: ";
    cin >> V;

    recherche(tableau, V);

    return 0;
}
