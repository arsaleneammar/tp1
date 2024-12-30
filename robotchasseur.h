#ifndef ROBOTCHASSEUR_H
#define ROBOTCHASSEUR_H

#include "Robot.h"

class RobotChasseur : public Robot {
public:
    RobotChasseur(string nom, double x, double y, double portee);

    bool estALaPortee(const Robot& autre) const;
    void tuer(Robot& autre);
};

#endif
