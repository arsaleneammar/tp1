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
            cout << "V se trouve dans le tableau � la position " << i << endl;
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
    cout << "Entrez " << N << " valeurs enti�res :\n";
    remplir(tableau, N);

    int V;
    cout << "Entrez la valeur � rechercher: ";
    cin >> V;

    recherche(tableau, V);

    return 0;
}
