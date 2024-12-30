#ifndef PIECE_H
#define PIECE_H

#include <string>
#include <iostream>

using namespace std;

class Piece {
protected:
    string couleur;
    int x, y;
public:

    Piece(string couleur, int x, int y);
    virtual void deplacer(int dx, int dy) = 0;
    virtual void afficher() const;
    bool estValide() const;
};

#endif
