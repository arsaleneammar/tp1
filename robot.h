#ifndef ROBOT_H
#define ROBOT_H

#include <string>
#include <iostream>
#include <cmath>

using namespace std;

class Robot {
protected:
    string nom;
    double x, y;
    double portee;
    bool estMort;
public:
    Robot(string nom, double x, double y, double portee);

    void deplacer(double dx, double dy);
    void afficher() const;
    double distance(const Robot& autre) const;
    bool getEstMort() const;
    string getNom() const;
};

#endif
