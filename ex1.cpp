#include <iostream>
using namespace std;

int main() {
    int entier = 5;
    cout << entier << " � l'adresse: " << &entier << endl;

    int* pEntier = new int(10);
    cout << *pEntier << " � l'adresse: " << pEntier << endl;
    delete pEntier;

    double reel = 3.14;
    cout << reel << " � l'adresse: " << &reel << endl;

    double* pReel = new double(6.28);
    cout << *pReel << " � l'adresse: " << pReel << endl;
    delete pReel;

    return 0;
}
