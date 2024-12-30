#include "Robot.h"
#include "RobotChasseur.h"
#include <vector>

int main() {
    RobotChasseur optimus("Optimus", 2, 3, 25);
    cout << "Initialisation de Optimus :" << endl;
    optimus.afficher();
    optimus.deplacer(33, 19);
    cout << "Optimus après déplacement :" << endl;
    optimus.afficher();
    vector<Robot> robots = {
        Robot("Megatron", 40, 25, 10),
        Robot("Starscream", 37, 21, 10),
        Robot("Soundwave", 10, 5, 10),
        Robot("Shockwave", 20, 18, 10),
        Robot("Thundercracker", 50, 45, 10)
    };
    cout << "\nEnnemis initiaux :" << endl;
    for (auto& robot : robots) {
        robot.afficher();
    }
    cout << "\nOptimus commence la chasse :" << endl;
    for (auto& robot : robots) {
        if (optimus.estALaPortee(robot)) {
            optimus.tuer(robot);
        }
    }
    cout << "\nStatut des ennemis après la chasse :" << endl;
    for (auto& robot : robots) {
        robot.afficher();
    }

    return 0;
}
