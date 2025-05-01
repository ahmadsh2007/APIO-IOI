#include <vector>
#include <numeric> // For std::iota

// Disjoint Set Union (DSU) or Union-Find data structure
struct DSU {
    std::vector<int> parent;
    std::vector<int> sz; // Stores the size of each set (optional optimization)

    // Constructor: initializes DSU for n elements (0 to n-1 or 1 to n)
    DSU(int n) {
        // Assuming 1-based indexing, resize to n+1
        parent.resize(n + 1);
        // Initially, each element is its own parent (represents its own set)
        std::iota(parent.begin(), parent.end(), 0);
        // Initially, each set has size 1
        sz.assign(n + 1, 1);
    }

    // Finds the representative (root) of the set containing element i
    // Uses path compression for optimization.
    int find(int i) {
        if (parent[i] == i)
            return i;
        // Path compression: make node point directly to the root
        return parent[i] = find(parent[i]);
    }

    // Merges the sets containing elements i and j.
    // Returns true if a merge happened, false if they were already in the same set.
    // Uses union by size (or rank) for optimization.
    bool unite(int i, int j) {
        int root_i = find(i);
        int root_j = find(j);
        if (root_i != root_j) {
            // Union by size: attach the smaller tree to the larger tree
            if (sz[root_i] < sz[root_j])
                std::swap(root_i, root_j);
            parent[root_j] = root_i; // Make root_i the parent of root_j
            sz[root_i] += sz[root_j];  // Update the size of the merged set
            return true;
        }
        return false; // No merge needed, already connected
    }

    // Checks if elements i and j belong to the same set.
    bool are_connected(int i, int j) {
        return find(i) == find(j);
    }

    // Returns the size of the component (set) containing element i.
    int component_size(int i) {
        return sz[find(i)];
    }
};

// --- Example Usage ---
/*
#include <iostream>

int main() {
    int n = 5; // Number of elements (assuming 1-based indexing)
    DSU dsu(n);

    dsu.unite(1, 2);
    dsu.unite(3, 4);

    std::cout << "Are 1 and 2 connected? " << (dsu.are_connected(1, 2) ? "Yes" : "No") << std::endl; // Yes
    std::cout << "Are 1 and 3 connected? " << (dsu.are_connected(1, 3) ? "Yes" : "No") << std::endl; // No
    std::cout << "Size of component containing 1: " << dsu.component_size(1) << std::endl; // 2
    std::cout << "Size of component containing 3: " << dsu.component_size(3) << std::endl; // 2
    std::cout << "Size of component containing 5: " << dsu.component_size(5) << std::endl; // 1

    dsu.unite(1, 3);
    std::cout << "Are 1 and 3 connected now? " << (dsu.are_connected(1, 3) ? "Yes" : "No") << std::endl; // Yes
    std::cout << "Size of component containing 1: " << dsu.component_size(1) << std::endl; // 4

    return 0;
}
*/