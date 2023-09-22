#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

struct Edge {
    int destination;
    int weight;
};

struct Vertex {
    int index;
    int distance;
    bool operator>(const Vertex& other) const {
        return distance > other.distance;
    }
};

void Dijkstra(const vector<vector<Edge>>& graph, int source) {
    int numVertices = graph.size();
    vector<int> distance(numVertices, INT_MAX);
    priority_queue<Vertex, vector<Vertex>, greater<Vertex>> pq;

    distance[source] = 0;
    pq.push({source, 0});

    while (!pq.empty()) {
        Vertex current = pq.top();
        pq.pop();
        int u = current.index;

        for (const Edge& edge : graph[u]) {
            int v = edge.destination;
            int w = edge.weight;

            if (distance[u] != INT_MAX && distance[u] + w < distance[v]) {
                distance[v] = distance[u] + w;
                pq.push({v, distance[v]});
            }
        }
    }

    // Print the shortest distances
    cout << "Shortest distances from source vertex " << source << ":\n";
    for (int i = 0; i < numVertices; ++i) {
        cout << "Vertex " << i << ": ";
        if (distance[i] == INT_MAX) {
            cout << "Infinity";
        } else {
            cout << distance[i];
        }
        cout << endl;
    }
}

int main() {
    int numVertices = 5; // The number of vertices in the graph
    int source = 0; // The source vertex

    // Define the graph as an adjacency list
    vector<vector<Edge>> graph(numVertices);

    // Add edges to the graph
    graph[0].push_back({1, 4});
    graph[0].push_back({2, 3});
    graph[1].push_back({2, 1});
    graph[1].push_back({3, 2});
    graph[2].push_back({3, 5});
    graph[3].push_back({4, 2});

    Dijkstra(graph, source);

    return 0;
}
