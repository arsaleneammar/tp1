#include "Robot.h"


Robot::Robot(string nom, double x, double y, double portee)
    : nom(nom), x(x), y(y), portee(portee), estMort(false) {}
void Robot::deplacer(double dx, double dy) {
    x += dx;
    y += dy;
}
void Robot::afficher() const {
    cout << "Nom : " << nom
         << ", Position : (" << x << ", " << y << ")"
         << ", Portée : " << portee
         << ", Statut : " << (estMort ? "Mort" : "Vivant") << endl;
}
double Robot::distance(const Robot& autre) const {
    return sqrt(pow(autre.x - x, 2) + pow(autre.y - y, 2));
}
bool Robot::getEstMort() const {
    return estMort;
}
string Robot::getNom() const {
    return nom;
}
