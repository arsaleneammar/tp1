#include "Personne.h"
Personne::Personne(string nom, int age, char sexe) : nom(nom), age(age), sexe(sexe) {}

string Personne::getNom() const { return nom; }
int Personne::getAge() const { return age; }
char Personne::getSexe() const { return sexe; }

void Personne::setNom(string nom) { this->nom = nom; }
void Personne::setAge(int age) { this->age = age; }
void Personne::setSexe(char sexe) { this->sexe = sexe; }
string Personne::getPersonne() const {
    return "Nom: " + nom + ", Age: " + to_string(age) + ", Sexe: " + string(1, sexe);
}
