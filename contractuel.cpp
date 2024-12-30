#include "Contractuel.h"
Contractuel::Contractuel(string nom, int age, char sexe, string charge, string filiere)
    : Personne(nom, age, sexe), Enseignant(nom, age, sexe, charge), Etudiant(nom, age, sexe, filiere) {}
string Contractuel::getPersonne() const {
    return Enseignant::getPersonne() + ", Filière: " + Etudiant::getFiliere();
}
