#include "Enseignant.h"
Enseignant::Enseignant(string nom, int age, char sexe, string charge)
    : Personne(nom, age, sexe), charge(charge) {}
string Enseignant::getCharge() const { return charge; }
void Enseignant::setCharge(string charge) { this->charge = charge; }
string Enseignant::getPersonne() const {
    return Personne::getPersonne() + ", Charge: " + charge;
}
