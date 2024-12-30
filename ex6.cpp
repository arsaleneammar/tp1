#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void dessinerCone(int hauteur) {
    for (int i = 1; i <= hauteur; i++) {
        for (int j = 1; j <= hauteur - i; j++) cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++) cout << "*";
        cout << endl;
    }
}

void dessinerTronc(int hauteur, int largeur) {
    for (int i = 0; i < hauteur; i++) {
        for (int j = 0; j < (largeur - 1) / 2; j++) cout << " ";
        for (int j = 0; j < largeur; j++) cout << "#";
        cout << endl;
    }
}

void dessinerBoules(int hauteur) {
    srand(time(0));
    for (int i = 1; i <= hauteur; i++) {
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (rand() % 2 == 0 && j != 1 && j != 2 * i - 1) cout << "O";
            else cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int hauteurCone = 6, hauteurTronc = 2, largeurTronc = 3;

    dessinerCone(hauteurCone);
    dessinerTronc(hauteurTronc, largeurTronc);
    dessinerBoules(hauteurCone);

    return 0;
}
