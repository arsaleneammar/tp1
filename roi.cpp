#include "Roi.h"
Roi::Roi(string couleur, int x, int y) : Piece(couleur, x, y) {}
void Roi::deplacer(int dx, int dy) {
    x += dx;
    y += dy;
    if (!estValide()) {
        cout << "Le roi a dépassé la limite de l'échiquier." << endl;
        x -= dx;
        y -= dy;
    }
}
void Roi::afficher() const {
    Piece::afficher();
    cout << " - Type : Roi" << endl;
}
