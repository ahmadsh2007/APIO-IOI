#include <vector>
#include <algorithm> // For std::max, etc.

// Assume the graph is represented by an adjacency list `adj`
// N is the number of nodes (0-indexed or 1-indexed)

// The DP state `dp[u]` can be a single value, a vector, struct, or more complex data structure,
// depending on what information needs to be stored for node u.
// Example: std::vector<ReturnType> dp(N);

// Template for DFS-based Tree DP
// u: current node
// parent: parent of the current node (to avoid going back up)
// adj: adjacency list of the tree
// dp: DP state array/vector (passed by reference or globally accessible)
// other_params: any other necessary parameters (e.g., node values, edge weights)
void dfs_tree_dp(int u, int parent, const std::vector<std::vector<int>>& adj /*, std::vector<State>& dp, other_params */ ) {

    // --- Initialization for node u (before visiting children) ---
    // Initialize dp[u] based on node u itself.
    // Example: dp[u].value = initial_value; dp[u].count = 1;

    // --- Recursive Step: Visit children ---
    for (int v : adj[u]) {
        if (v != parent) { // Ensure we don't go back to the parent
            dfs_tree_dp(v, u, adj /*, dp, other_params */);

            // --- Combine results from child v ---
            // Use the computed state dp[v] to update the state dp[u].
            // This is the core logic of the Tree DP.
            // Example: dp[u].value += dp[v].value;
            // Example: dp[u].max_path = std::max(dp[u].max_path, dp[v].max_path + edge_weight(u,v));
        }
    }

    // --- Finalization for node u (after visiting children) ---
    // Perform any final calculations for dp[u] based on combined children results
    // or information specific to node u.
    // Example: If calculating max path starting at u, consider paths through children.
}

// --- Very Generic Example Usage (Subtree Size Calculation) ---
/*
#include <iostream>
#include <vector>

const int MAXN_EXAMPLE = 10;
std::vector<long long> dp_subtree_size(MAXN_EXAMPLE); // Example DP state: size of subtree
std::vector<std::vector<int>> adj_example(MAXN_EXAMPLE); // Example adjacency list

// DFS function implementing the subtree size DP
void dfs_size(int u, int p) {
    dp_subtree_size[u] = 1; // Count the node itself
    for (int v : adj_example[u]) {
        if (v != p) { // If v is a child of u
            dfs_size(v, u); // Recursively calculate size for child v
            dp_subtree_size[u] += dp_subtree_size[v]; // Add child's subtree size to parent's
        }
    }
}

int main() {
    int n_example = 7; // Number of nodes (0-6)
    // Build an example tree
    adj_example[0].push_back(1); adj_example[1].push_back(0);
    adj_example[0].push_back(2); adj_example[2].push_back(0);
    adj_example[1].push_back(3); adj_example[3].push_back(1);
    adj_example[1].push_back(4); adj_example[4].push_back(1);
    adj_example[2].push_back(5); adj_example[5].push_back(2);
    adj_example[2].push_back(6); adj_example[6].push_back(2);

    int root = 0;
    dfs_size(root, -1); // Start DFS from root, -1 indicates no parent

    // Print results
    for (int i = 0; i < n_example; ++i) {
        std::cout << "Size of subtree rooted at " << i << ": " << dp_subtree_size[i] << std::endl;
    }
    // Expected Output:
    // Size of subtree rooted at 0: 7
    // Size of subtree rooted at 1: 3
    // Size of subtree rooted at 2: 3
    // Size of subtree rooted at 3: 1
    // Size of subtree rooted at 4: 1
    // Size of subtree rooted at 5: 1
    // Size of subtree rooted at 6: 1

    return 0;
}
*/