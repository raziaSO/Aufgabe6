#pragma once
#include <vector>

namespace misc {
    // Funktion zum Mergen von zwei Teilarrays
    void merge(std::vector<int>& arr, int l, int m, int r);

    // Mergesort-Algorithmus
    void mergesort(std::vector<int>& arr, int l, int r);
}
