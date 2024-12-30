#include <iostream>
#include <cmath>
using namespace std;

double f(double x, bool &OK) {
    if (x <= 1 || x >= 2) {
        OK = false;
        return 0;
    } else {
        OK = true;
        return sqrt((x - 1) * (2 - x));
    }
}

int main() {
    double x;
    bool OK;
    cout << "Entrez x: ";
    cin >> x;

    double result = f(x, OK);
    if (OK) {
        cout << "La racine carrée est: " << result << endl;
    } else {
        cout << "La fonction n'est pas définie pour x = " << x << endl;
    }

    return 0;
}
