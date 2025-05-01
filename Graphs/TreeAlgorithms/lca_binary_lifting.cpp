#include <vector>
#include <cmath>    // For log2
#include <algorithm> // For max

const int MAXN_LCA = 200005; // Adjust as needed
const int LOGN_LCA = 18;     // Adjust based on MAXN (ceil(log2(MAXN)))

std::vector<int> adj_lca[MAXN_LCA];
int up[MAXN_LCA][LOGN_LCA]; // up[v][i] is the 2^i-th ancestor of v
int depth[MAXN_LCA];
// Add tin/tout arrays if needed for subtree checks

void dfs_lca(int v, int p, int d) {
    depth[v] = d;
    up[v][0] = p; // Parent is the 2^0 ancestor
    for (int i = 1; i < LOGN_LCA; ++i) {
        if (up[v][i-1] != -1) { // Check if the 2^(i-1) ancestor exists
             up[v][i] = up[up[v][i-1]][i-1]; // 2^i ancestor is ancestor of 2^(i-1) ancestor
        } else {
            up[v][i] = -1; // No ancestor at this level
        }
    }

    for (int u : adj_lca[v]) {
        if (u != p) {
            dfs_lca(u, v, d + 1);
        }
    }
}

// Function to find the Lowest Common Ancestor (LCA) of nodes u and v
int lca(int u, int v) {
    // Ensure u is deeper than v
    if (depth[u] < depth[v]) {
        std::swap(u, v);
    }

    // Lift u up to the same depth as v
    int diff = depth[u] - depth[v];
    for (int i = LOGN_LCA - 1; i >= 0; --i) {
        if ((diff >> i) & 1) { // Check if the i-th bit is set in diff
            u = up[u][i];
        }
    }

    // If v was the ancestor, return v
    if (u == v) {
        return u;
    }

    // Lift both u and v up simultaneously until their parents are the LCA
    for (int i = LOGN_LCA - 1; i >= 0; --i) {
        if (up[u][i] != up[v][i]) {
            u = up[u][i];
            v = up[v][i];
        }
    }

    // The parent of u (or v) is the LCA
    return up[u][0];
}

// Preprocessing function to build the LCA structures
// Assumes nodes are 1-indexed, root is 1
void preprocess_lca(int n, int root = 1) {
    // Initialize depth and ancestor table
    for(int i = 0; i <= n; ++i) {
        depth[i] = 0;
        for(int j = 0; j < LOGN_LCA; ++j) {
            up[i][j] = -1; // -1 indicates no ancestor (or root's parent)
        }
    }
    dfs_lca(root, -1, 0); // Start DFS from the root
}

// Optional: Function to calculate distance between two nodes
int distance(int u, int v) {
    int ancestor = lca(u, v);
    return depth[u] + depth[v] - 2 * depth[ancestor];
}


// --- Example Usage ---
/*
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

int main() {
    int n = 7; // Number of nodes

    // Build adjacency list for the tree (1-based index)
    adj_lca[1].push_back(2); adj_lca[2].push_back(1);
    adj_lca[1].push_back(3); adj_lca[3].push_back(1);
    adj_lca[2].push_back(4); adj_lca[4].push_back(2);
    adj_lca[2].push_back(5); adj_lca[5].push_back(2);
    adj_lca[3].push_back(6); adj_lca[6].push_back(3);
    adj_lca[3].push_back(7); adj_lca[7].push_back(3);
    // Tree structure:
    //       1
    //      / \
    //     2   3
    //    /|\ / \
    //   4 5 6   7

    preprocess_lca(n, 1); // Preprocess starting from root 1

    // Query LCA
    int u1 = 4, v1 = 5;
    std::cout << "LCA(" << u1 << ", " << v1 << ") = " << lca(u1, v1) << std::endl; // Expected: 2

    int u2 = 4, v2 = 6;
    std::cout << "LCA(" << u2 << ", " << v2 << ") = " << lca(u2, v2) << std::endl; // Expected: 1

    int u3 = 5, v3 = 7;
    std::cout << "LCA(" << u3 << ", " << v3 << ") = " << lca(u3, v3) << std::endl; // Expected: 1

    int u4 = 6, v4 = 7;
     std::cout << "LCA(" << u4 << ", " << v4 << ") = " << lca(u4, v4) << std::endl; // Expected: 3

    // Query Distance
    std::cout << "Distance(" << u1 << ", " << v1 << ") = " << distance(u1, v1) << std::endl; // Expected: 2
    std::cout << "Distance(" << u2 << ", " << v2 << ") = " << distance(u2, v2) << std::endl; // Expected: 4


    return 0;
}
*/