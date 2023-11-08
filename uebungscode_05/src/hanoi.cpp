#include <hanoi/hanoi.hpp>

#include <iostream>

namespace hanoi{

    Hanoi::Hanoi(size_t anz) {
    stapel = std::vector<std::vector<size_t>>(3);
    stapel[0] = std::vector<size_t>(anz);
    size_t i = anz;
    for(auto& x : stapel[0])
        x = i;
        i--;
    }

    bool Hanoi::bewege(size_t von, size_t nach) {
        if(stapel[von].empty()) return false;
        else {
            size_t platte = stapel[von].back();
            stapel[von].pop_back();
            if(stapel[nach].back() > platte) {
                stapel[nach].push_back(platte);
                return true;
            }
            else return false;
        }
    }

    void Hanoi::drucke() const {
        for(int i = 0; i < 3, i++;) {
            std::cout << "Auf Stapel " << i + 1 << " befinden sich derzeit die Platten: " << std::endl;
            for(auto &x : stapel[i]) {
                std::cout << "Platte " << x;
            }
            std::cout << std::endl;
        }
    }
}
