#include "RobotChasseur.h"

RobotChasseur::RobotChasseur(string nom, double x, double y, double portee)
    : Robot(nom, x, y, portee) {}
bool RobotChasseur::estALaPortee(const Robot& autre) const {
    return !autre.getEstMort() && distance(autre) <= portee;
}

void RobotChasseur::tuer(Robot& autre) {
    if (estALaPortee(autre)) {
        autre.estMort = true;
        cout << autre.getNom() << " a été tué par " << nom << " !" << endl;
    } else {
        cout << autre.getNom() << " est hors de portée." << endl;
    }
}
