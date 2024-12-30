#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cout << "Combien de mots voulez-vous saisir? ";
    cin >> N;

    string mot, mot_long;
    cout << "Entrez les mots: ";
    for (int i = 0; i < N; i++) {
        cin >> mot;
        if (mot.length() > mot_long.length()) mot_long = mot;
    }

    cout << "Le mot le plus long est: " << mot_long << endl;

    return 0;
}
