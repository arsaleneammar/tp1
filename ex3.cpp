
#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
    float x, y;

public:
    Point(float x = 0.0f, float y = 0.0f) : x(x), y(y) {}

    Point(const Point& p) : x(p.x), y(p.y) {}

    void affiche() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }

    friend bool comparer(const Point& p1, const Point& p2);
    friend float distance(const Point& p1, const Point& p2);
    friend Point milieu(const Point& p1, const Point& p2);
};

bool comparer(const Point& p1, const Point& p2) {
    return (p1.x == p2.x && p1.y == p2.y);
}

float distance(const Point& p1, const Point& p2) {
    return sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
}

Point milieu(const Point& p1, const Point& p2) {
    return Point((p1.x + p2.x) / 2.0f, (p1.y + p2.y) / 2.0f);
}

int main() {
    Point p1(3.0f, 4.0f), p2(6.0f, 8.0f);

    cout << "Point 1 : ";
    p1.affiche();

    cout << "Point 2 : ";
    p2.affiche();

    cout << "Les deux points sont identiques : " << (comparer(p1, p2) ? "Oui" : "Non") << endl;

    cout << "Distance entre les deux points : " << distance(p1, p2) << endl;

    Point pMilieu = milieu(p1, p2);
    cout << "Point milieu : ";
    pMilieu.affiche();

    return 0;
}
