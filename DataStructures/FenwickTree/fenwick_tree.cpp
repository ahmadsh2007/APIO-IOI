#include <vector>

// Fenwick Tree (Binary Indexed Tree - BIT) template
// Example for Prefix Sums and Point Updates. Can be adapted for range updates/point queries.
struct FenwickTree {
    std::vector<long long> bit; // The BIT array. Type can be changed.
    int n; // Size of the original (conceptual) array + 1

    // Constructor initializes BIT for an array of size _n (0-indexed)
    // The BIT itself will have size _n + 1 for 1-based indexing internally.
    FenwickTree(int _n) : n(_n + 1) {
        bit.assign(n, 0); // Initialize BIT with zeros
    }

    // Adds 'delta' to the element at index `idx` (0-based index for user).
    void add(int idx, long long delta) {
        idx++; // Convert to 1-based index for internal BIT operations
        for (; idx < n; idx += idx & -idx) { // idx & -idx gets the last set bit
            bit[idx] += delta;
        }
    }

    // Queries the prefix sum up to index `idx` (0-based index for user).
    // Calculates sum(arr[0]...arr[idx]).
    long long query(int idx) {
        idx++; // Convert to 1-based index for internal BIT operations
        long long sum = 0;
        for (; idx > 0; idx -= idx & -idx) {
            sum += bit[idx];
        }
        return sum;
    }

    // Queries the sum of the range [l, r] (inclusive, 0-based index for user).
    long long query_range(int l, int r) {
        if (l > r) return 0;
        return query(r) - query(l - 1);
    }

    // Builds the BIT from an initial 0-indexed array `arr`.
    // This is done by calling add for each element. O(N log N) build.
    // Note: A faster O(N) build exists but is more complex to implement.
    void build_from_array(const std::vector<long long>& arr) {
         bit.assign(n, 0); // Reset BIT
         for(int i = 0; i < arr.size(); ++i) {
              add(i, arr[i]);
         }
    }
};

// --- Example Usage ---
/*
#include <iostream>
#include <vector>

int main() {
    int size = 5; // Conceptual array size (0 to 4)
    FenwickTree ft(size);

    // Add elements (using 0-based index)
    ft.add(0, 1); // arr[0] = 1
    ft.add(1, 3); // arr[1] = 3
    ft.add(2, 2); // arr[2] = 2
    ft.add(3, 5); // arr[3] = 5
    ft.add(4, 4); // arr[4] = 4
    // Array is conceptually {1, 3, 2, 5, 4}

    // Sum of first 3 elements (indices 0, 1, 2): 1+3+2 = 6
    std::cout << "Prefix sum up to index 2: " << ft.query(2) << std::endl; // 6

    // Sum of elements in range [1, 3] (indices 1, 2, 3): 3+2+5 = 10
    std::cout << "Sum in range [1, 3]: " << ft.query_range(1, 3) << std::endl; // 10

    // Add 2 to element at index 2
    ft.add(2, 2); // arr[2] becomes 2+2=4
    // Array is conceptually {1, 3, 4, 5, 4}

    // New sum of first 3 elements (indices 0, 1, 2): 1+3+4 = 8
    std::cout << "Prefix sum up to index 2 after update: " << ft.query(2) << std::endl; // 8
     // New sum in range [1, 3] (indices 1, 2, 3): 3+4+5 = 12
    std::cout << "Sum in range [1, 3] after update: " << ft.query_range(1, 3) << std::endl; // 12


    // --- Build from existing array ---
    std::vector<long long> arr0 = {10, 20, 30, 40, 50};
    FenwickTree ft2(arr0.size());
    ft2.build_from_array(arr0);

    // Sum of first 3 elements (indices 0, 1, 2): 10+20+30 = 60
    std::cout << "Prefix sum up to index 2 (built): " << ft2.query(2) << std::endl; // 60
    // Sum in range [1, 3] (indices 1, 2, 3): 20+30+40 = 90
    std::cout << "Sum in range [1, 3] (built): " << ft2.query_range(1, 3) << std::endl; // 90

    return 0;
}
*/