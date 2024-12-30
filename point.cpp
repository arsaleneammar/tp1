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
        cout << "(" << x << ", " << y << ")";
    }

    void setCoord(float newX, float newY) {
        x = newX;
        y = newY;
    }

    void translate(float dx, float dy) {
        x += dx;
        y += dy;
    }

    float distance(const Point& p) const {
        return sqrt((x - p.x) * (x - p.x) + (y - p.y) * (y - p.y));
    }

    bool comparer(const Point& p) const {
        return (x == p.x && y == p.y);
    }
};
