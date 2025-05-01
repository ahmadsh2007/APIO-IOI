#include <vector>
#include <queue>
#include <limits>

// Define a constant for representing infinity, adjust if distances can be larger
const long long INF_DIST = std::numeric_limits<long long>::max();

/**
 * @brief Performs Breadth-First Search (BFS) to find the shortest path from a single source node.
 * Works on unweighted graphs or graphs with uniform edge weights.
 *
 * @param n Number of nodes in the graph (can be 0-indexed or 1-indexed based on implementation).
 * @param start_node The starting node for the BFS.
 * @param adj Adjacency list representation of the graph. adj[u] contains a list of neighbors of u.
 * @return std::vector<long long> A vector containing the shortest distance from start_node to every other node.
 * If a node is unreachable, its distance is INF_DIST.
 * dist[start_node] will be 0.
 * Adjust vector sizes if nodes are 1-indexed (e.g., size n+1).
 */
std::vector<long long> bfs_single_source(int n, int start_node, const std::vector<std::vector<int>>& adj) {
    // Assuming 1-based indexing for nodes, hence size n+1
    std::vector<long long> dist(n + 1, INF_DIST);
    std::queue<int> q;

    dist[start_node] = 0;
    q.push(start_node);

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v : adj[u]) {
            if (dist[v] == INF_DIST) { // If node v hasn't been visited yet
                dist[v] = dist[u] + 1; // Distance increases by 1 for each edge
                q.push(v);
            }
        }
    }
    return dist;
}

// --- Example Usage ---
/*
#include <iostream> // Required for cout/endl

int main() {
    int n = 5; // Number of nodes
    int m = 4; // Number of edges
    std::vector<std::vector<int>> adj(n + 1); // Adjacency list (assuming 1-based indexing)

    // Build the graph (example)
    // adj[u].push_back(v);
    // adj[v].push_back(u); // If undirected
    adj[1].push_back(2); adj[2].push_back(1);
    adj[1].push_back(3); adj[3].push_back(1);
    adj[2].push_back(4); adj[4].push_back(2);
    adj[3].push_back(5); adj[5].push_back(3);

    int start_node = 1;
    std::vector<long long> distances = bfs_single_source(n, start_node, adj);

    // Print distances
    for (int i = 1; i <= n; ++i) {
        if (distances[i] == INF_DIST) {
            std::cout << "Distance from " << start_node << " to " << i << " is infinite." << std::endl;
        } else {
            std::cout << "Distance from " << start_node << " to " << i << " is " << distances[i] << std::endl;
        }
    }
    // Expected Output:
    // Distance from 1 to 1 is 0
    // Distance from 1 to 2 is 1
    // Distance from 1 to 3 is 1
    // Distance from 1 to 4 is 2
    // Distance from 1 to 5 is 2

    return 0;
}
*/