#pragma once

#include <vector>
#include <cstddef>

namespace SimplerGraph {

    class SimplerGraph {
    public:
        // Erstellt einen Graph mit einer festen Knotenanzahl
        SimplerGraph(size_t knoten_anzahl);

        // Fügt dem Graphen eine Kante hinzu
        void addKante(size_t from_Knoten, size_t to_Knoten);

        // Entfernt eine Kante aus dem Graphen
        void removeKante(size_t from_Knoten, size_t to_Knoten);

        // Gibt den Graphen aus
        void printGraph() const;

    private:
        const size_t knoten_anz;
        std::vector<std::vector<bool>> graph;
    };

}
