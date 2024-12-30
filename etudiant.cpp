#include "Etudiant.h"
Etudiant::Etudiant(string nom, int age, char sexe, string filiere)
    : Personne(nom, age, sexe), filiere(filiere) {}
string Etudiant::getFiliere() const { return filiere; }
void Etudiant::setFiliere(string filiere) { this->filiere = filiere; }
string Etudiant::getPersonne() const {
    return Personne::getPersonne() + ", Filière: " + filiere;
}
