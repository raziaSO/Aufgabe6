#include <vector>

namespace misc {
    // Funktion zum Mergen von zwei sortierten Teilarrays
    void merge(std::vector<int>& arr, int left, int middle, int right) {
        // Größe der beiden Teilarrays berechnen
        int n1 = middle - left + 1;
        int n2 = right - middle;

        // Temporäre Arrays für die beiden Teilarrays erstellen
        std::vector<int> left_arr(n1), right_arr(n2);

        // Daten in die temporären Arrays kopieren
        for (int i = 0; i < n1; ++i)
            left_arr[i] = arr[left + i];
        for (int j = 0; j < n2; ++j)
            right_arr[j] = arr[middle + 1 + j];

        // Indizes für die beiden Teilarrays und das Merged-Array
        int i = 0, j = 0, k = left;

        // Vergleiche Elemente aus den beiden Teilarrays und sortieren
        while (i < n1 && j < n2) {
            if (left_arr[i] <= right_arr[j]) {
                arr[k] = left_arr[i];
                ++i;
            } else {
                arr[k] = right_arr[j];
                ++j;
            }
            ++k;
        }

        // Restliche Elemente von left_arr[], falls vorhanden
        while (i < n1) {
            arr[k] = left_arr[i];
            ++i;
            ++k;
        }

        // Restliche Elemente von right_arr[], falls vorhanden
        while (j < n2) {
            arr[k] = right_arr[j];
            ++j;
            ++k;
        }
    }

    // Mergesort-Algorithmus
    void mergesort(std::vector<int>& arr, int left, int right) {
        if (left < right) {
            // Berechne den Mittelwert, um das Array in zwei Hälften zu teilen
            int middle = left + (right - left) / 2;

            // Aufruf für die linke Hälfte
            mergesort(arr, left, middle);

            // Aufruf für die rechte Hälfte
            mergesort(arr, middle + 1, right);

            // Zusammenführen der sortierten Teile
            merge(arr, left, middle, right);
        }
    }
}
