#include <iostream>
using namespace std;

int main() {
    int entier = 5;
    cout << entier << " à l'adresse: " << &entier << endl;

    int* pEntier = new int(10);
    cout << *pEntier << " à l'adresse: " << pEntier << endl;
    delete pEntier;

    double reel = 3.14;
    cout << reel << " à l'adresse: " << &reel << endl;

    double* pReel = new double(6.28);
    cout << *pReel << " à l'adresse: " << pReel << endl;
    delete pReel;

    return 0;
}
