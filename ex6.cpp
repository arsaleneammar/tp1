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
    cout << "Apr�s swap par valeur: a = " << a << ", b = " << b << endl;

    swapReference(a, b);
    cout << "Apr�s swap par r�f�rence: a = " << a << ", b = " << b << endl;

    swapPointer(&a, &b);
    cout << "Apr�s swap par pointeur: a = " << a << ", b = " << b << endl;

    return 0;
}
