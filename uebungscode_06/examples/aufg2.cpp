#include "zeitmesser.hpp"
#include "schnellsort.hpp"
#include "hilfsfunktionen.hpp"
#include <iostream>
#include <algorithm>


int main() {
    std::vector<int> bsp_zahlen(4000);
    misc::fuelle_zufaellig(bsp_zahlen);

    // Ausgabe der ursprünglichen Zahlen
    std::cout << "Unsortierte Zahlen: ";
    misc::drucke_array(bsp_zahlen);

    misc::Zeitmesser zeitmesser;

    // Zeitmessung starten
    zeitmesser.start();
    misc::schnellsort(bsp_zahlen);
    // Zeitmessung stoppen
    zeitmesser.stop();

    // Ausgabe der sortierten Zahlen
    std::cout << "Sortierte Zahlen: ";
    misc::drucke_array(bsp_zahlen);

    // Ausgabe der gemessenen Zeit
    std::cout << "Dauer: " << zeitmesser.get_minutes() << " Minuten, "
              << zeitmesser.get_seconds() << " Sekunden, "
              << zeitmesser.get_milliseconds() << " Millisekunden,und "
              << zeitmesser.get_microseconds() << " Mikrosekunden.";
              

    return 0;
}
