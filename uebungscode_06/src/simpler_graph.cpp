#include "simpler_graph.hpp"
#include <iostream>
namespace SimplerGraph {

    SimplerGraph::SimplerGraph(size_t knoten_anzahl) :
        knoten_anz(knoten_anzahl),
        graph(knoten_anzahl, std::vector<bool>(knoten_anzahl, false))
    {
        
    }

    void SimplerGraph::addKante(size_t from_Knoten, size_t to_Knoten) {
        // Überprüfen, ob die Knotenindizes gültig sind
        if (from_Knoten <= knoten_anz && to_Knoten <= knoten_anz) {
            // Kante hinzufügen
            graph[from_Knoten][to_Knoten] = true;
        }
    }

    void SimplerGraph::removeKante(size_t from_Knoten, size_t to_Knoten) {
        // Überprüfen, ob die Knotenindizes gültig sind
        if (from_Knoten <= knoten_anz && to_Knoten <= knoten_anz) {
            // Kante entfernen
            graph[from_Knoten][to_Knoten] = false;
        }
    }

    void SimplerGraph::printGraph() const {
        for (size_t i = 0; i < knoten_anz; ++i) {
            for (size_t j = 0; j < knoten_anz; ++j) {
                if (graph[i][j]) {
                    // Ausgabe der Kante
                    std::cout << i << " -> " << j << std::endl;
                }
            }
        }
    }

}
