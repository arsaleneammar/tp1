#include <iostream>
#include <cstdlib>
using namespace std;

void addition(int a, int b, int& resultat) {
    resultat = a + b;
}

void soustraction(int a, int b, int& resultat) {
    resultat = a - b;
}

void multiplication(int a, int b, int& resultat) {
    resultat = a * b;
}

void division(int a, int b, double& resultat) {
    if (b != 0) resultat = (double)a / b;
    else cout << "Division par zéro impossible." << endl;
}

int main() {
    int a, b, resultat;
    double resultatDiv;
    int choix;
    do {
        system("cls");
        cout << "1. Addition\n2. Soustraction\n3. Multiplication\n4. Division\n5. Quitter\n";
        cout << "Choisissez une opération: ";
        cin >> choix;

        if (choix == 5) break;

        cout << "Entrez a et b: ";
        cin >> a >> b;

        switch (choix) {
            case 1: addition(a, b, resultat); cout << "Résultat: " << resultat << endl; break;
            case 2: soustraction(a, b, resultat); cout << "Résultat: " << resultat << endl; break;
            case 3: multiplication(a, b, resultat); cout << "Résultat: " << resultat << endl; break;
            case 4: division(a, b, resultatDiv); cout << "Résultat: " << resultatDiv << endl; break;
            default: cout << "Choix invalide." << endl;
        }
    } while (true);

    return 0;
}
