#include "Enseignant.h"
#include "Etudiant.h"
#include "Contractuel.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    Enseignant enseignant("Dr. Smith", 45, 'M', "Algorithmes avanc�s");
    Etudiant etudiant("Alice", 20, 'F', "Informatique");
    Contractuel contractuel("Bob", 25, 'M', "Programmation", "Math�matiques");
    vector<Personne*> personnes = { &enseignant, &etudiant, &contractuel };
    cout << "Informations des personnes :" << endl;
    for (auto personne : personnes) {
        cout << personne->getPersonne() << endl;
    }

    return 0;
}
