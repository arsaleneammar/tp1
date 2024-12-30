#include "Robot.h"
#include <iostream>
#include <cmath>

Robot::Robot(std::string nom, double x, double y, double portee)
    : nom(nom), x(x), y(y), portee(portee), estMort(false) {}

std::string Robot::getNom() const { return nom; }
double Robot::getX() const { return x; }
double Robot::getY() const { return y; }
double Robot::getPortee() const { return portee; }
bool Robot::getEstMort() const { return estMort; }

void Robot::setPosition(double x, double y) { this->x = x; this->y = y; }
void Robot::setPortee(double portee) { this->portee = portee; }
void Robot::setEstMort(bool etat) { estMort = etat; }

void Robot::deplacer(double pasX, double pasY) {
    x += pasX;
    y += pasY;
}

void Robot::afficher() const {
    std::cout << "Nom: " << nom << "\n";
    std::cout << "Position: (" << x << ", " << y << ")\n";
    std::cout << "Portée: " << portee << "\n";
    std::cout << "Statut: " << (estMort ? "Mort" : "En vie") << "\n";
}

bool Robot::estVisible(const Robot& autreRobot) const {
    double distance = sqrt(pow(x - autreRobot.getX(), 2) + pow(y - autreRobot.getY(), 2));
    return distance <= portee;
}

void Robot::tuer(Robot& autreRobot) {
    if (estVisible(autreRobot) && !autreRobot.getEstMort()) {
        autreRobot.setEstMort(true);
        std::cout << autreRobot.getNom() << " a été tué !" << std::endl;
    }
}
