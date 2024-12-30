#ifndef ROI_H
#define ROI_H

#include "Piece.h"

class Roi : public Piece {
public:
    Roi(string couleur, int x, int y);
    void deplacer(int dx, int dy) override;
    void afficher() const override;
};

#endif
