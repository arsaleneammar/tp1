#include <iostream>
#include <vector>
using namespace std;

void remplir(vector<int>& tableau, int N) {
    tableau.resize(N);
    for (int i = 0; i < N; ++i) {
        cin >> tableau[i];
    }
}

pair<int, int> mini_maxi(const vector<int>& tableau) {
    int minVal = tableau[0];
    int maxVal = tableau[0];

    for (size_t i = 1; i < tableau.size(); ++i) {
        if (tableau[i] < minVal) {
            minVal = tableau[i];
        }
        if (tableau[i] > maxVal) {
            maxVal = tableau[i];
        }
    }

    return make_pair(minVal, maxVal);
}

int main() {
    int N;
    cout << "Entrez la taille du tableau : ";
    cin >> N;

    vector<int> tableau;
    cout << "Entrez " << N << " valeurs entières :\n";
    remplir(tableau, N);

    pair<int, int> result = mini_maxi(tableau);

    cout << "La plus petite valeur est : " << result.first << endl;
    cout << "La plus grande valeur est : " << result.second << endl;

    return 0;
}
