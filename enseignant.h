#ifndef ENSEIGNANT_H
#define ENSEIGNANT_H

#include "Personne.h"

class Enseignant : public Personne {
private:
    string charge;

public:
    Enseignant(string nom, int age, char sexe, string charge);
    string getCharge() const;
    void setCharge(string charge);
    string getPersonne() const override;
};

#endif
