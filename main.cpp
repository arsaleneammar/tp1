#include <iostream>
#include "Robot.h"

int main() {
    Robot robot1("Optimus", 2, 3, 25);
    robot1.deplacer(33, 19);
    robot1.afficher();

    Robot robot2("Megatron", 10, 10);
    robot2.deplacer(0, 0);
    robot2.afficher();

    if (robot1.estVisible(robot2)) {
        robot1.tuer(robot2);
    } else {
        std::cout << "Megatron n'est pas à la portée d'Optimus.\n";
    }

    return 0;
}
