#include "simpler_graph.hpp"

#include <iostream>


int main() {
    SimplerGraph::SimplerGraph graph(5);

    // Kanten hinzufügen
    graph.addKante(0, 1);
    graph.addKante(1, 2);
    graph.addKante(2, 3);

    // Graph ausgeben
    std::cout << "Graph nach dem Hinzufügen von Kanten:" << std::endl;
    graph.printGraph();

    // Kante entfernen
    graph.removeKante(1, 2);

    // Graph erneut ausgeben
    std::cout << "Graph nach Entfernen von Kanten: " << std::endl;
    graph.printGraph();

    return 0;
}
