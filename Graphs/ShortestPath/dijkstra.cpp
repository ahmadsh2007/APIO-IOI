#include <vector>
#include <queue>
#include <limits>
#include <utility> // For std::pair

// Type alias for weighted edges: pair<neighbor_node, edge_weight>
using Edge = std::pair<int, long long>;
// Type alias for priority queue state: pair<distance, node>
// Distance comes first for correct priority queue ordering (min-heap)
using State = std::pair<long long, int>;

// Define a constant for representing infinity
const long long INF_DIJKSTRA = std::numeric_limits<long long>::max();

/**
 * @brief Implements Dijkstra's algorithm to find the shortest paths from a single source
 * node in a weighted graph with non-negative edge weights.
 *
 * @param n Number of nodes in the graph.
 * @param start_node The source node.
 * @param adj Adjacency list representation. adj[u] contains a list of pairs {v, weight}
 * representing edges outgoing from u.
 * @return std::vector<long long> Vector storing the shortest distance from start_node
 * to every other node. Unreachable nodes have distance INF_DIJKSTRA.
 * dist[start_node] is 0.
 * Adjust vector sizes if nodes are 1-indexed (e.g., size n+1).
 */
std::vector<long long> dijkstra(int n, int start_node, const std::vector<std::vector<Edge>>& adj) {
    // Assuming 1-based indexing for nodes, hence size n+1
    std::vector<long long> dist(n + 1, INF_DIJKSTRA);
    // Priority queue storing {distance, node}, ordered by smallest distance
    std::priority_queue<State, std::vector<State>, std::greater<State>> pq;

    dist[start_node] = 0;
    pq.push({0, start_node}); // {distance, node}

    while (!pq.empty()) {
        long long d = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        // If we found a shorter path to u already, skip this state
        if (d > dist[u]) {
            continue;
        }

        // Relax edges outgoing from u
        for (const auto& edge : adj[u]) {
            int v = edge.first;
            long long weight = edge.second;
            // Check for potential overflow before adding weight if dist[u] is large
            if (dist[u] != INF_DIJKSTRA && dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
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
    int m = 6; // Number of edges (Adjusted from M=5 in input description to match edges)
    std::vector<std::vector<Edge>> adj(n + 1); // Adjacency list (assuming 1-based indexing)

    // Build the graph (example, assuming undirected edges are added twice)
    // adj[u].push_back({v, w});
    // adj[v].push_back({u, w}); // If undirected
    adj[1].push_back({2, 10}); adj[2].push_back({1, 10});
    adj[1].push_back({3, 3});  adj[3].push_back({1, 3});
    adj[2].push_back({4, 2});  adj[4].push_back({2, 2});
    adj[3].push_back({2, 1});  adj[2].push_back({3, 1}); // Example edge
    adj[3].push_back({4, 8});  adj[4].push_back({3, 8});
    adj[4].push_back({5, 9});  adj[5].push_back({4, 9});


    int start_node = 1;
    std::vector<long long> distances = dijkstra(n, start_node, adj);

    // Print distances
    for (int i = 1; i <= n; ++i) {
        if (distances[i] == INF_DIJKSTRA) {
            std::cout << "Distance from " << start_node << " to " << i << " is infinite." << std::endl;
        } else {
            std::cout << "Distance from " << start_node << " to " << i << " is " << distances[i] << std::endl;
        }
    }
    // Expected Output:
    // Distance from 1 to 1 is 0
    // Distance from 1 to 2 is 4
    // Distance from 1 to 3 is 3
    // Distance from 1 to 4 is 6
    // Distance from 1 to 5 is 15

    return 0;
}
*/