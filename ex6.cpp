#ifndef TABLEAUX_H
#define TABLEAUX_H

#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
void remplir(std::vector<T>& tableau, int N) {
    tableau.resize(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> tableau[i];
    }
}

template <typename T>
void afficher(const std::vector<T>& tableau) {
    for (const auto& elem : tableau) {
        std::cout << elem << "\t";
    }
    std::cout << std::endl;
}

template <typename T>
void recherche(const std::vector<T>& tableau, const T& valeur) {
    for (size_t i = 0; i < tableau.size(); ++i) {
        if (tableau[i] == valeur) {
            std::cout << valeur << " se trouve à la position " << i << std::endl;
            return;
        }
    }
    std::cout << valeur << " ne se trouve pas dans le tableau." << std::endl;
}

template <typename T>
void trier(std::vector<T>& tableau) {
    std::sort(tableau.begin(), tableau.end());
}

template <typename T>
T somme(const std::vector<T>& tableau) {
    T total = 0;
    for (const auto& elem : tableau) {
        total += elem;
    }
    return total;
}

template <typename T>
std::pair<T, T> mini_maxi(const std::vector<T>& tableau) {
    if (tableau.empty()) {
        throw std::invalid_argument("Le tableau est vide.");
    }
    T minVal = tableau[0];
    T maxVal = tableau[0];
    for (const auto& elem : tableau) {
        if (elem < minVal) minVal = elem;
        if (elem > maxVal) maxVal = elem;
    }
    return {minVal, maxVal};
}

#endif
