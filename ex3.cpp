#include <iostream>
using namespace std;

void incrementer(int& a) {
    a++;
}

void permuter(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void permuterRef(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;

    incrementer(x);
    cout << "Après incrémentation : x = " << x << endl;

    permuter(&x, &y);
    cout << "Après permutation par pointeur : x = " << x << ", y = " << y << endl;

    permuterRef(x, y);
    cout << "Après permutation par référence : x = " << x << ", y = " << y << endl;

    return 0;
}
