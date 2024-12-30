#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

double generateRandomDouble(double min, double max) {
    return min + (rand() / (RAND_MAX / (max - min)));
}

int generateRandomInt(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {
    srand(time(0));
    for (int i = 0; i < 5; i++) {
        cout << generateRandomDouble(1.0, 10.0) << " ";
    }
    cout << endl;

    for (int i = 0; i < 5; i++) {
        cout << generateRandomInt(1, 100) << " ";
    }
    cout << endl;

    return 0;
}
