#include <iostream>
using namespace std;

int main() {
    double distance;
    int choix;
    cout << "1. Kilom�tres vers Miles\n2. Miles vers Kilom�tres\nChoisissez une option: ";
    cin >> choix;

    if (choix == 1) {
        cout << "Entrez la distance en kilom�tres: ";
        cin >> distance;
        cout << distance << " km = " << distance / 1.609 << " miles" << endl;
    } else if (choix == 2) {
        cout << "Entrez la distance en miles: ";
        cin >> distance;
        cout << distance << " miles = " << distance * 1.609 << " km" << endl;
    } else {
        cout << "Option invalide." << endl;
    }

    return 0;
}
