#include <iostream>
using namespace std;

void testEgaliteValeur(int a, int b) {
    if (a == b) cout << "Les entiers sont �gaux (passage par valeur)." << endl;
    else cout << "Les entiers ne sont pas �gaux (passage par valeur)." << endl;
}

void testEgaliteAdresse(int* a, int* b) {
    if (*a == *b) cout << "Les entiers sont �gaux (passage par adresse)." << endl;
    else cout << "Les entiers ne sont pas �gaux (passage par adresse)." << endl;
}

void testEgaliteReference(int& a, int& b) {
    if (a == b) cout << "Les entiers sont �gaux (passage par r�f�rence)." << endl;
    else cout << "Les entiers ne sont pas �gaux (passage par r�f�rence)." << endl;
}

int main() {
    int a = 10, b = 10;
    testEgaliteValeur(a, b);
    testEgaliteAdresse(&a, &b);
    testEgaliteReference(a, b);

    return 0;
}
