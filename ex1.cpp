#include <iostream>
using namespace std;

template <typename T>
void echanger(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void trier(T tableau[], int taille) {
    for (int i = 0; i < taille - 1; ++i) {
        int indexMin = i;
        for (int j = i + 1; j < taille; ++j) {
            if (tableau[j] < tableau[indexMin]) {
                indexMin = j;
            }
        }
        echanger(tableau[i], tableau[indexMin]);
    }
}

template <typename T>
void afficherTableau(T tableau[], int taille) {
    for (int i = 0; i < taille; ++i) {
        cout << tableau[i] << " ";
    }
    cout << endl;
}

int main() {
    int tableauInt[10] = {34, 7, 23, 32, 5, 62, 19, 18, 47, 3};
    afficherTableau(tableauInt, 10);
    trier(tableauInt, 10);
    afficherTableau(tableauInt, 10);

    float tableauFloat[10] = {3.4, 7.2, 2.3, 3.2, 5.1, 6.2, 1.9, 1.8, 4.7, 0.3};
    afficherTableau(tableauFloat, 10);
    trier(tableauFloat, 10);
    afficherTableau(tableauFloat, 10);

    char tableauChar[10] = {'z', 'h', 'a', 'm', 'c', 'x', 'b', 'y', 'k', 'p'};
    afficherTableau(tableauChar, 10);
    trier(tableauChar, 10);
    afficherTableau(tableauChar, 10);

    return 0;
}

