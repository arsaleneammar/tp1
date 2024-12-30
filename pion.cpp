#include "Pion.h"
Pion::Pion(string couleur, int x, int y) : Piece(couleur, x, y) {}
void Pion::deplacer(int dx, int dy) {
    y += 1;
    if (!estValide()) {
        cout << "Le pion a d�pass� la limite de l'�chiquier." << endl;
        y -= 1;
    }
}
void Pion::afficher() const {
    Piece::afficher();
    cout << " - Type : Pion" << endl;
}
