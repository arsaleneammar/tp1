#include <iostream>
#include <cstring>
using namespace std;

class Etudiant {
private:
    static int compteur;
    int matricule;
    char* nom;
    int nbrNotes;
    float* tabNotes;

public:
    Etudiant() : matricule(++compteur), nom(nullptr), nbrNotes(0), tabNotes(nullptr) {}

    Etudiant(const char* nomEtudiant, int nombreNotes, float* notes)
        : matricule(++compteur), nbrNotes(nombreNotes) {
        nom = new char[strlen(nomEtudiant) + 1];
        strcpy(nom, nomEtudiant);
        tabNotes = new float[nbrNotes];
        for (int i = 0; i < nbrNotes; ++i) {
            tabNotes[i] = notes[i];
        }
    }

    ~Etudiant() {
        delete[] nom;
        delete[] tabNotes;
    }

    Etudiant(const Etudiant& autre)
        : matricule(++compteur), nbrNotes(autre.nbrNotes) {
        nom = new char[strlen(autre.nom) + 1];
        strcpy(nom, autre.nom);
        tabNotes = new float[nbrNotes];
        for (int i = 0; i < nbrNotes; ++i) {
            tabNotes[i] = autre.tabNotes[i];
        }
    }

    int getMatricule() const { return matricule; }
    const char* getNom() const { return nom; }
    void setNom(const char* nouveauNom) {
        delete[] nom;
        nom = new char[strlen(nouveauNom) + 1];
        strcpy(nom, nouveauNom);
    }
    int getNbrNotes() const { return nbrNotes; }
    float* getTabNotes() const { return tabNotes; }

    void saisie() {
        cout << "Entrez le nom de l'étudiant : ";
        char buffer[100];
        cin >> buffer;
        setNom(buffer);

        cout << "Entrez le nombre de notes : ";
        cin >> nbrNotes;

        delete[] tabNotes;
        tabNotes = new float[nbrNotes];
        for (int i = 0; i < nbrNotes; ++i) {
            cout << "Entrez la note " << i + 1 << " : ";
            cin >> tabNotes[i];
        }
    }

    void affichage() const {
        cout << "Matricule : " << matricule << endl;
        cout << "Nom : " << nom << endl;
        cout << "Notes : ";
        for (int i = 0; i < nbrNotes; ++i) {
            cout << tabNotes[i] << " ";
        }
        cout << endl;
    }

    float moyenne() const {
        if (nbrNotes == 0) return 0.0f;
        float somme = 0.0f;
        for (int i = 0; i < nbrNotes; ++i) {
            somme += tabNotes[i];
        }
        return somme / nbrNotes;
    }

    bool admis() const {
        return moyenne() >= 10.0f;
    }

    static bool comparer(const Etudiant& e1, const Etudiant& e2) {
        return e1.moyenne() == e2.moyenne();
    }
};

int Etudiant::compteur = 0;

int main() {
    Etudiant e1;
    e1.saisie();
    e1.affichage();
    cout << "Moyenne : " << e1.moyenne() << endl;
    cout << "Admis : " << (e1.admis() ? "Oui" : "Non") << endl;

    float notes[] = {12.5, 15.0, 10.0};
    Etudiant e2("Dupont", 3, notes);
    e2.affichage();
    cout << "Moyenne : " << e2.moyenne() << endl;
    cout << "Admis : " << (e2.admis() ? "Oui" : "Non") << endl;

    cout << "Les deux étudiants ont-ils la même moyenne ? "
         << (Etudiant::comparer(e1, e2) ? "Oui" : "Non") << endl;

    return 0;
}
