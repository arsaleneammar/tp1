#ifndef ETUDIANT_H
#define ETUDIANT_H

#include "Personne.h"

class Etudiant : public Personne {
private:
    string filiere;

public:
    Etudiant(string nom, int age, char sexe, string filiere);
    string getFiliere() const;
    void setFiliere(string filiere);
    string getPersonne() const override;
};

#endif
