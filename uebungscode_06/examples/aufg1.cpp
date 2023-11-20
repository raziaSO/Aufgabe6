#include "mergesort.hpp"
#include "hilfsfunktionen.hpp"
#include <vector>
#include <iostream>

int main() {
    std::vector<int> bsp_zahlen(4000);
    misc::fuelle_zufaellig(bsp_zahlen);

    // Ausgabe der ursprünglichen Zahlen
    std::cout << "Unsortiertes Array:";
    misc::drucke_array(bsp_zahlen);

    // Mergesort anwenden
    misc::mergesort(bsp_zahlen, 0, bsp_zahlen.size() - 1);

    // Ausgabe der sortierten Zahlen
    std::cout << "Sortiertes Array:";
    misc::drucke_array(bsp_zahlen);

    return 0;
}
