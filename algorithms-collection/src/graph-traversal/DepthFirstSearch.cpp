#include <iostream>
#include <vector>
#include <unordered_set>

class Graph {
private:
    int V;
    std::vector<std::vector<int>> adj;

public:
    Graph(int vertices) {
        V = vertices;
        adj.resize(V);
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
    }

    void DFSUtil(int v, std::vector<bool>& visited) {
        visited[v] = true;
        std::cout << v << " ";

        for (int i : adj[v]) {
            if (!visited[i]) {
                DFSUtil(i, visited);
            }
        }
    }

    void DepthFirstSearch(int startVertex) {
        std::vector<bool> visited(V, false);
        DFSUtil(startVertex, visited);
    }
};

int main() {
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    std::cout << "Depth First Traversal starting from vertex 2: ";
    g.DepthFirstSearch(2);

    return 0;
}