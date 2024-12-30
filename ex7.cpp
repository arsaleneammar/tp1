#include <iostream>
using namespace std;

int factoriel(int N) {
    if (N == 0) return 1;
    return N * factoriel(N - 1);
}

int main() {
    int N;
    cout << "Entrez un entier N: ";
    cin >> N;

    cout << "Le factoriel de " << N << " est: " << factoriel(N) << endl;

    return 0;
}
