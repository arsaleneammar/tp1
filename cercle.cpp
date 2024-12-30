class Cercle {
private:
    float rayon;
    Point centre;

public:
    Cercle(float rayon, const Point& centre) : rayon(rayon), centre(centre) {}

    Cercle(float rayon, float x, float y) : rayon(rayon), centre(x, y) {}

    void afficher() const {
        cout << "Cercle : Rayon = " << rayon << ", Centre = ";
        centre.affiche();
        cout << endl;
    }

    float getRayon() const {
        return rayon;
    }

    void setRayon(float newRayon) {
        rayon = newRayon;
    }

    Point getCentre() const {
        return centre;
    }

    void translateCentre(float dx, float dy) {
        centre.translate(dx, dy);
    }

    float surface() const {
        return M_PI * rayon * rayon;
    }

    float perimetre() const {
        return 2 * M_PI * rayon;
    }

    bool estEgal(const Cercle& c) const {
        return (rayon == c.rayon && centre.comparer(c.centre));
    }

    bool contientPoint(const Point& p) const {
        return centre.distance(p) <= rayon;
    }
};
