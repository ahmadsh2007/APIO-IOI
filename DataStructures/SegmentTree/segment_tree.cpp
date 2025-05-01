#include <vector>
#include <algorithm> // For std::min, std::max
#include <limits>    // For numeric_limits

// Basic Segment Tree template - Example for Range Minimum Query (RMQ)
// Can be adapted for Range Sum, Range Maximum, etc. by changing merge function and NEUTRAL_ELEMENT.
struct SegmentTree {
    int n; // Size of the original array
    std::vector<long long> tree; // Stores segment tree nodes. Type can be changed.
    long long NEUTRAL_ELEMENT = std::numeric_limits<long long>::max(); // Identity element for the merge operation (for min)
                                                                     // Use 0 for sum, -INF for max.

    // Merge function: combines results from left and right children.
    // Example: min operation.
    long long merge(long long left_val, long long right_val) {
        return std::min(left_val, right_val);
        // For sum: return left_val + right_val;
        // For max: return std::max(left_val, right_val);
    }

    // Recursive function to build the segment tree from an initial array `arr`.
    // node: current node index (usually starting from 1)
    // start, end: range boundaries managed by the current node
    void build(const std::vector<int>& arr, int node, int start, int end) {
        if (start == end) {
            // Leaf node: store the array element
            tree[node] = arr[start];
        } else {
            int mid = start + (end - start) / 2;
            // Recursively build left and right subtrees
            build(arr, 2 * node, start, mid);
            build(arr, 2 * node + 1, mid + 1, end);
            // Combine results from children
            tree[node] = merge(tree[2 * node], tree[2 * node + 1]);
        }
    }

    // Recursive function to update the value at a specific index `idx` to `val`.
    void update(int node, int start, int end, int idx, int val) {
        if (start == end) {
            // Leaf node found
            tree[node] = val;
        } else {
            int mid = start + (end - start) / 2;
            if (start <= idx && idx <= mid) {
                // Index is in the left child
                update(2 * node, start, mid, idx, val);
            } else {
                // Index is in the right child
                update(2 * node + 1, mid + 1, end, idx, val);
            }
            // Update the current node after child update
            tree[node] = merge(tree[2 * node], tree[2 * node + 1]);
        }
    }

    // Recursive function to query the combined value (e.g., minimum) in the range [l, r].
    long long query(int node, int start, int end, int l, int r) {
        // Case 1: Current node's range is completely outside the query range
        if (r < start || end < l) {
            return NEUTRAL_ELEMENT;
        }
        // Case 2: Current node's range is completely inside the query range
        if (l <= start && end <= r) {
            return tree[node];
        }
        // Case 3: Current node's range partially overlaps with the query range
        int mid = start + (end - start) / 2;
        long long p1 = query(2 * node, start, mid, l, r);
        long long p2 = query(2 * node + 1, mid + 1, end, l, r);
        return merge(p1, p2);
    }

public:
    // Constructor for an uninitialized tree of size _n (0-indexed array)
    SegmentTree(int _n) : n(_n) {
        // Typically need 4*n space for the tree array
        tree.resize(4 * n, NEUTRAL_ELEMENT);
    }

    // Constructor to build the tree from an initial vector `arr` (0-indexed)
    SegmentTree(const std::vector<int>& arr) : n(arr.size()) {
        tree.resize(4 * n);
        if (n > 0) {
           build(arr, 1, 0, n - 1); // Start build from node 1, range [0, n-1]
        }
    }

    // Public interface for point update
    void update_element(int idx, int val) {
        if (idx < 0 || idx >= n) return; // Boundary check
        update(1, 0, n - 1, idx, val);
    }

    // Public interface for range query
    long long query_range(int l, int r) {
         if (l < 0 || r >= n || l > r) return NEUTRAL_ELEMENT; // Boundary check
        return query(1, 0, n - 1, l, r);
    }
};

// --- Example Usage ---
/*
#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {1, 3, 2, 5, 4};
    int n = arr.size();
    SegmentTree st(arr); // Build the segment tree

    // Query range [1, 3] (inclusive, 0-based index) -> elements {3, 2, 5}
    std::cout << "Min in range [1, 3]: " << st.query_range(1, 3) << std::endl; // Expected: 2

    // Query range [0, 4] (entire array) -> elements {1, 3, 2, 5, 4}
    std::cout << "Min in range [0, 4]: " << st.query_range(0, 4) << std::endl; // Expected: 1

    // Update element at index 2 to 0
    st.update_element(2, 0); // arr becomes {1, 3, 0, 5, 4}

    // Query range [1, 3] again -> elements {3, 0, 5}
    std::cout << "Min in range [1, 3] after update: " << st.query_range(1, 3) << std::endl; // Expected: 0

    return 0;
}
*/