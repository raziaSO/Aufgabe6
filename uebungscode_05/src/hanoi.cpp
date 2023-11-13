#include <hanoi/hanoi.hpp>

#include <iostream>

namespace hanoi{

    Hanoi::Hanoi(size_t anz) {
        stapel = std::vector<std::vector<size_t>>(3);
        stapel[0] = std::vector<size_t>(anz);
        size_t i = anz;
        for(auto& x : stapel[0]) {
            x = i;
            i--; 
        }
    }

    bool Hanoi::bewege(size_t von, size_t nach) {
        if(stapel[von].empty()) return false;
        else {
            size_t platte = stapel[von].back();
            if(stapel[nach].empty() || stapel[nach].back() > platte) {
                stapel[nach].push_back(platte);
                stapel[von].pop_back();
                return true;
            }
            else return false;
        }
    }

    //void Hanoi::drucke() {
    //    for(int i = 0; i < 3, i++;) {
    //        std::cout << "Auf Stapel " << i + 1 << " befinden sich derzeit die Platten: " << std::endl;
    //        for(auto &x : stapel[i]) {
    //            std::cout << "Platte " << x;
    //        }
    //        std::cout << std::endl;
    //    }
    //}

    // folgender code oben geht beim besten Willen nicht und ich habe keine Ahnung warum! :( 
    // Daher die untenstehende, nicht so schöne Lösung

    void Hanoi::drucke() const{
        int counter = 1;
        std::cout << std::endl;
        std::cout << "--------------------------------------" << std::endl;
        std::cout << "D R U C K E N    E I N G E L E I T E T" << std::endl;
        std::cout << "--------------------------------------" << std::endl;
        for(auto& k : stapel) {
            std::cout << "  Auf dem Stapel " << counter << " befinden sich die Platten: " << std::endl;
            for(auto &x : k) {
                std::cout << "      Platte " << x << std::endl;
            }
            std::cout << std::endl;
            counter ++;
        }
    std::cout << std::endl;
    }
}
