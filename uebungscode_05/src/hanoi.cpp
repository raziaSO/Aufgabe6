#include <hanoi/hanoi.hpp>

#include <iostream>

namespace hanoi{

Hanoi::Hanoi(size_t anz) {
    // Die Variable stapel ist ein Array von drei Stapeln (welche wiederum Zahlenarrays sind)
    stapel = std::vector<std::vector<size_t>>(3);
    // Der erste Stapel soll den vollen Turm enthalten
    stapel[0] = std::vector<size_t>(anz);

    size_t i = anz;
    for(auto& x : stapel[0]) {
        x = i;
        i--;
    }
}



bool Hanoi::bewege(size_t von, size_t nach) {
    if (stapel[nach].empty()) { // Ich habe wirklich probiert das in einem if-Statement zusammenzufassen... es hat nicht geklappt

        stapel[nach].push_back(stapel[von].back());
        stapel[von].pop_back();

        return true;
    } else 
    if (stapel[von].back() < stapel[nach].back()) {

        stapel[nach].push_back(stapel[von].back());
        stapel[von].pop_back();

        return true;

    }
    return false;
}

void Hanoi::drucke() const { // Ich habe das gefühl das geht schlauer aber i cant be bothered
    
    std::cout << "Stapel 1: { ";
    for (const int& i : stapel[0]) { // Druckt den ersten Stapel
        std::cout << i << " ";
    }
    std::cout << "}" << std::endl;

    std::cout << "Stapel 2: { ";
    for (const int& i : stapel[1]) { // Druckt den dritten Stapel
        std::cout << i << " ";
    }
    std::cout << "}" << std::endl;

    std::cout << "Stapel 3: { ";
    for (const int& i : stapel[2]) { // Druckt den zweiten Stapel
        std::cout << i << " ";
    }
    std::cout << "}" << std::endl << std::endl;

}




/* bool Hanoi::bewege(size_t von, size_t nach) {
    
    stapel[nach].push_back(stapel[von].back());
    stapel[von].pop_back();

    return true;

} */

/* bool Hanoi::bewege(size_t von, size_t nach) {

    if (stapel[von].back() < stapel[nach].back()) { // Prüft ob das zu bewegende Elemtn kleiner ist als das letzte Element aus dem Zielstapel

        stapel[nach].push_back(stapel[von].back());
        stapel[von].pop_back();

        return true;

    }

    return false;
} */


}
