#include <iostream>
using namespace std;

void swapValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << ", b = " << b << endl;
}

void swapReference(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapPointer(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 5, b = 10;

    swapValue(a, b);
    cout << "Après swap par valeur: a = " << a << ", b = " << b << endl;

    swapReference(a, b);
    cout << "Après swap par référence: a = " << a << ", b = " << b << endl;

    swapPointer(&a, &b);
    cout << "Après swap par pointeur: a = " << a << ", b = " << b << endl;

    return 0;
}
