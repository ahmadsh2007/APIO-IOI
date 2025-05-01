#include <vector>
#include <numeric>   // For std::iota
#include <algorithm> // For std::sort
#include <iostream>  // For example output

// Union-Find (DSU) structure (required by Kruskal)
// (You can copy the DSU code from Graphs/Connectivity/union_find.cpp here or include it)
struct DSU {
    std::vector<int> parent;
    DSU(int n) {
        parent.resize(n + 1);
        std::iota(parent.begin(), parent.end(), 0);
    }
    int find(int i) {
        if (parent[i] == i) return i;
        return parent[i] = find(parent[i]);
    }
    void unite(int i, int j) {
        int root_i = find(i);
        int root_j = find(j);
        if (root_i != root_j) {
            parent[root_i] = root_j; // Simple union without rank/size
        }
    }
    bool are_connected(int i, int j) {
         return find(i) == find(j);
    }
};


// Structure to represent an edge in the graph
struct Edge {
    int u, v;
    long long weight;

    // Overload less than operator for sorting edges by weight
    bool operator<(const Edge& other) const {
        return weight < other.weight;
    }
};

/**
 * @brief Finds the Minimum Spanning Tree (MST) cost using Kruskal's algorithm.
 *
 * @param n Number of nodes (assuming 1-based indexing).
 * @param edges Vector of all edges in the graph.
 * @param mst_edges Optional output vector to store edges included in the MST.
 * @return long long The total cost (weight) of the MST, or -1 if graph is not connected (depends on problem).
 */
long long kruskal_mst(int n, std::vector<Edge>& edges, std::vector<Edge>* mst_edges = nullptr) {
    // 1. Sort all edges by weight in ascending order
    std::sort(edges.begin(), edges.end());

    // 2. Initialize DSU structure
    DSU dsu(n);

    long long mst_cost = 0;
    int edges_count = 0; // Count of edges added to MST

    // 3. Iterate through sorted edges
    for (const auto& edge : edges) {
        // If adding this edge does not form a cycle
        if (!dsu.are_connected(edge.u, edge.v)) {
            dsu.unite(edge.u, edge.v); // Add edge to MST (conceptually)
            mst_cost += edge.weight;
            edges_count++;
            if (mst_edges) { // If requested, store the edge
                mst_edges->push_back(edge);
            }
            // Optimization: Stop if we have N-1 edges (for a connected graph)
            if (edges_count == n - 1) {
                break;
            }
        }
    }

    // Optional: Check if the graph is connected (if edges_count < n - 1)
    // Return -1 or handle as per problem statement if MST doesn't span all nodes.
    if (edges_count < n - 1) {
        // Consider returning a special value or checking connectivity beforehand if needed
        // For this template, we return the cost accumulated so far.
    }

    return mst_cost;
}

// --- Example Usage ---
/*
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n = 7; // Number of nodes
    int m = 9; // Number of edges
    std::vector<Edge> edges = {
        {1, 2, 2}, {1, 4, 1}, {1, 5, 4}, {2, 3, 3}, {2, 4, 3},
        {3, 4, 5}, {4, 5, 9}, {5, 6, 7}, {6, 7, 8}
    };

    std::vector<Edge> result_mst;
    long long cost = kruskal_mst(n, edges, &result_mst);

    std::cout << "MST Cost: " << cost << std::endl; // Expected: 24

    if (!result_mst.empty()) {
        std::cout << "Edges in MST:" << std::endl;
        for (const auto& edge : result_mst) {
            std::cout << edge.u << " - " << edge.v << " (" << edge.weight << ")" << std::endl;
        }
        // Expected Edges (order might vary slightly if weights are equal):
        // 1 - 4 (1)
        // 1 - 2 (2)
        // 2 - 3 (3)
        // 1 - 5 (4)
        // 5 - 6 (7)
        // 6 - 7 (8)
    }

    return 0;
}
*/
