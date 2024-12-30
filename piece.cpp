#include "Piece.h"
Piece::Piece(string couleur, int x, int y) : couleur(couleur), x(x), y(y) {}


void Piece::afficher() const {
    cout << "Couleur : " << couleur << ", Position : (" << x << ", " << y << ")";
}

bool Piece::estValide() const {
    return x >= 0 && x < 8 && y >= 0 && y < 8;
}
