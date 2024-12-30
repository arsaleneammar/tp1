int main() {
    Cercle c1(1.0, 10.0, 10.0);
    Point p1(1.0, 1.0), p2(3.0, 3.0);
    Cercle c2(2.0, 0.0, 0.0);

    cout << "Cr�ation d'un cercle de rayon 1 et centre (10, 10) :" << endl;
    c1.afficher();

    cout << "P�rim�tre : " << c1.perimetre() << endl;
    cout << "Surface : " << c1.surface() << endl;

    c1.setRayon(c1.getRayon() * 2);
    cout << "\nApr�s doublement du rayon :" << endl;
    c1.afficher();
    cout << "P�rim�tre : " << c1.perimetre() << endl;
    cout << "Surface : " << c1.surface() << endl;

    c1.translateCentre(-10.0, -10.0);
    cout << "\nApr�s translation du centre � l'origine :" << endl;
    c1.afficher();

    cout << "\nLe point (1, 1) est ";
    if (!c1.contientPoint(p1)) cout << "pas ";
    cout << "dans le cercle." << endl;

    cout << "Le point (3, 3) est ";
    if (!c1.contientPoint(p2)) cout << "pas ";
    cout << "dans le cercle." << endl;

    cout << "\nTest de l'�galit� avec un cercle de rayon 2 et centre (0, 0) : ";
    if (c1.estEgal(c2))
        cout << "Les cercles sont �gaux." << endl;
    else
        cout << "Les cercles ne sont pas �gaux." << endl;

    return 0;
}
