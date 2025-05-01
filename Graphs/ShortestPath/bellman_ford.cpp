#include <vector>
#include <limits>
#include <iostream> // For example output

// Structure to represent a weighted edge
struct EdgeBF {
    int u, v;
    long long weight;
};

const long long INF_BF = std::numeric_limits<long long>::max();

/**
 * @brief Implements the Bellman-Ford algorithm to find shortest paths from a single source.
 * Handles negative edge weights and detects negative cycles reachable from the source.
 *
 * @param n Number of nodes (assuming 0-based or 1-based indexing).
 * @param edges A vector containing all edges of the graph.
 * @param start_node The source node.
 * @param dist Output vector to store the shortest distances. Initialized by the caller.
 * Size should be appropriate for indexing (e.g., n or n+1).
 * @return bool Returns true if no negative cycle reachable from start_node is detected,
 * false otherwise. dist[i] will contain the shortest distance if reachable and
 * no negative cycle affects it, or a very small negative number if affected by
 * a negative cycle, or INF_BF if unreachable.
 */
bool bellman_ford(int n, const std::vector<EdgeBF>& edges, int start_node, std::vector<long long>& dist) {
    int num_nodes = n; // Adjust if using 1-based indexing (n+1 size for dist)
    dist.assign(num_nodes + 1, INF_BF); // Initialize distances (assuming 1-based indexing)
    dist[start_node] = 0;

    // Relax edges repeatedly (N-1 times)
    for (int i = 1; i < num_nodes; ++i) {
        for (const auto& edge : edges) {
            if (dist[edge.u] != INF_BF && dist[edge.u] + edge.weight < dist[edge.v]) {
                dist[edge.v] = dist[edge.u] + edge.weight;
                // Optimization: Store predecessor if path reconstruction is needed
            }
             // If undirected, relax the other direction too
             // if (dist[edge.v] != INF_BF && dist[edge.v] + edge.weight < dist[edge.u]) {
             //     dist[edge.u] = dist[edge.v] + edge.weight;
             // }
        }
    }

    // Check for negative cycles (N-th iteration)
    for (const auto& edge : edges) {
        if (dist[edge.u] != INF_BF && dist[edge.u] + edge.weight < dist[edge.v]) {
            // If a distance can still be shortened, a negative cycle is reachable
            // Optionally, mark nodes affected by the cycle (e.g., set dist to -INF_BF)
            // dist[edge.v] = -INF_BF; // Mark as affected
            return false; // Negative cycle detected
        }
         // Check other direction for undirected graphs if needed
         // if (dist[edge.v] != INF_BF && dist[edge.v] + edge.weight < dist[edge.u]) {
         //     return false;
         // }
    }

    return true; // No negative cycles detected reachable from start_node
}


// --- Example Usage ---
/*
#include <iostream>
#include <vector>

int main() {
    int n = 5; // Nodes 1 to 5
    std::vector<EdgeBF> edges = {
        {1, 2, 6}, {1, 3, 7}, {2, 4, 5}, {2, 5, -4},
        {3, 2, -2}, {4, 3, -3}, {5, 1, 2}, {4, 5, 3} // Added edge 4->5
        // Example with negative cycle: {1,2,1}, {2,3,1}, {3,1,-3}
    };
    int start_node = 1;
    std::vector<long long> distances;

    bool no_negative_cycle = bellman_ford(n, edges, start_node, distances);

    if (no_negative_cycle) {
        std::cout << "Shortest distances from node " << start_node << ":" << std::endl;
        for (int i = 1; i <= n; ++i) {
            if (distances[i] == INF_BF) {
                std::cout << "Node " << i << ": Unreachable" << std::endl;
            } else {
                std::cout << "Node " << i << ": " << distances[i] << std::endl;
            }
        }
        // Expected Output for this example (no neg cycle reachable from 1):
        // Node 1: 0
        // Node 2: 5 (1->3->2)
        // Node 3: 7
        // Node 4: 4 (1->3->2->4 is longer, 1->3->4 doesn't exist, path via neg weight: 1->3->2->5->... doesn't seem shorter)
        // --> Let's trace: 1->3(7). 1->3->2(5). 1->3->2->4(10). 1->3->2->5(1). 1->3->2->5->1(3).
        // --> Rerun relaxation:
        // --> Iter 1: d[1]=0, d[2]=6, d[3]=7
        // --> Iter 2: d[4]=11(2->4), d[5]=2(2->5), d[2]=5(3->2)
        // --> Iter 3: d[3]=1(4->3), d[5]=8(4->5), d[1]=4(5->1), d[4]=10(2->4 using d[2]=5), d[5]=1(2->5 using d[2]=5)
        // --> Iter 4: d[2]= -1(3->2 using d[3]=1), d[1]=3(5->1 using d[5]=1)
        // --> Iter 5: d[4]=4(2->4 using d[2]=-1), d[5]=-5(2->5 using d[2]=-1), d[3]=1(4->3), d[1]= -3(5->1 using d[5]=-5)
        // Correct distances seem to be: 1:-3, 2:-1, 3:1, 4:4, 5:-5
        // Expected Output:
        // Node 1: 0 // Should start at 0
        // Node 2: 5
        // Node 3: 7
        // Node 4: 10 // 1->3->2->4 = 7-2+5=10
        // Node 5: 1  // 1->3->2->5 = 7-2-4=1
    } else {
        std::cout << "Negative cycle detected reachable from node " << start_node << std::endl;
        // Optionally print distances which might be -INF_BF for affected nodes
    }


     // Example with a negative cycle
     n=3;
     edges = {{1,2,1}, {2,3,1}, {3,1,-3}};
     start_node=1;
     no_negative_cycle = bellman_ford(n, edges, start_node, distances);
      if (!no_negative_cycle) {
          std::cout << "\nNegative cycle detected reachable from node " << start_node << std::endl;
      }


    return 0;
}
*/