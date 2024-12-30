#include "Pion.h"
#include "Roi.h"
#include <vector>

int main() {

    Pion p1("Blanc", 0, 1);
    Pion p2("Noir", 1, 1);
    Roi roi1("Blanc", 4, 4);
    vector<Piece*> pieces = { &p1, &p2, &roi1 };
    cout << "Avant déplacement :" << endl;
    for (auto piece : pieces) {
        piece->afficher();
    }
    cout << "\nDéplacement des pièces :" << endl;
    p1.deplacer(0, 1);
    p2.deplacer(0, 1);
    roi1.deplacer(1, 1);
    cout << "\nAprès déplacement :" << endl;
    for (auto piece : pieces) {
        piece->afficher();
    }

    return 0;
}
