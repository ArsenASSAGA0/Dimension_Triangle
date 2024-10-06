#include <iostream>
#include <cmath>

int main() {
    float xA, xB, yA, yB, xC, yC, AB, AC, BC;

    std::cout << "Entrez les coordonnées du point A (xA yA) : ";
    std::cin >> xA >> yA;

    std::cout << "Entrez les coordonnées du point B (xB yB) : ";
    std::cin >> xB >> yB;

    std::cout << "Entrez les coordonnées du point C (xC yC) : ";
    std::cin >> xC >> yC;

    AB = std::sqrt(std::pow(xB - xA, 2) + std::pow(yB - yA, 2));
    AC = std::sqrt(std::pow(xC - xA, 2) + std::pow(yC - yA, 2));
    BC = std::sqrt(std::pow(xC - xB, 2) + std::pow(yC - yB, 2));

    std::cout << "Votre triangle a pour côtés AB = " << AB << ", AC = " << AC << ", BC = " << BC << std::endl;

    return 0;
}
