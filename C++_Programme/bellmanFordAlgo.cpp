#include <iostream>
#include <vector>
#include <climits>

struct Edge {
    int source, destination, weight;
};

void BellmanFord(std::vector<Edge>& edges, int numVertices, int source) {
    std::vector<int> distance(numVertices, INT_MAX);

    distance[source] = 0;

    // Relax all edges |V| - 1 times
    for (int i = 0; i < numVertices - 1; ++i) {
        for (const Edge& edge : edges) {
            if (distance[edge.source] != INT_MAX && distance[edge.source] + edge.weight < distance[edge.destination]) {
                distance[edge.destination] = distance[edge.source] + edge.weight;
            }
        }
    }

    // Check for negative-weight cycles
    for (const Edge& edge : edges) {
        if (distance[edge.source] != INT_MAX && distance[edge.source] + edge.weight < distance[edge.destination]) {
            std::cout << "Negative-weight cycle found in the graph." << std::endl;
            return;
        }
    }

    // Print the shortest distances
    std::cout << "Shortest distances from source vertex " << source << ":\n";
    for (int i = 0; i < numVertices; ++i) {
        std::cout << "Vertex " << i << ": ";
        if (distance[i] == INT_MAX) {
            std::cout << "Infinity";
        } else {
            std::cout << distance[i];
        }
        std::cout << std::endl;
    }
}

int main() {
    std::vector<Edge> edges = {
        {0, 1, 4},
        {0, 2, 3},
        {1, 2, -2},
        {1, 3, 2},
        {1, 4, 5},
        {3, 2, 1},
        {3, 1, 1},
        {4, 3, -3}
    };

    int numVertices = 5; // The number of vertices in the graph
    int source = 0; // The source vertex

    BellmanFord(edges, numVertices, source);

    return 0;
}
