#include <minsort_in_place.hpp>

// Hier wird minsort in place implementiert

std::vector<int> minsort_in_place(std::vector<int>& input) {

    const int laenge = input.size(); // ermittelt länge

    std::vector<bool> verwendet(laenge, false); // legt ein array an; Zeigt den Status an

    for (int i = 0; i < laenge; i++) { // Iteriert durch das Array

        int min_idx; // Legt eine Variable für die derzeit bekannte kleinste Zahl an

        for (min_idx = 0; verwendet[min_idx] == true; min_idx++) {} // findet die kleinste / nächste unverwendete Zahl

        for (int j = min_idx + 1; j < laenge; j++) { // Iteriert ab dem Index für min_idx

            if (verwendet[j] == false and input[min_idx] > input[j]) { // schaut ob die nächste Zahl kleiner ist

                min_idx = j; // falls ja wird diese stattdessen als kleinste Zahl gespeichert
            }
        }
        int tmp = input[i]; // speichert die derzeitige Zahl temporär

        input[i] = input[min_idx]; // Die derzeitige Stelle wird überschrieben

        input[min_idx] = tmp; // Die ehemalige Stelle der kleinsten Zahl wird mit der derzeitigen Zahl ersetzt
        
        verwendet[i] = true; // Die Stelle wird noch als true markiert
    
    }

    return input;
}
