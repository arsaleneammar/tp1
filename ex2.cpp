#include <iostream>
using namespace std;

int main() {
    int min, n;
    cout << "Entrez 10 entiers: ";
    cin >> min;

    for (int i = 1; i < 10; i++) {
        cin >> n;
        if (n < min) min = n;
    }

    cout << "Le plus petit entier est: " << min << endl;

    return 0;
}
