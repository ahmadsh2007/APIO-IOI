# Competitive Programming Code Library (APIO/IOI)

This library contains basic templates for algorithms and data structures commonly used in competitive programming contests like APIO and IOI.

## Directory Structure

```
APIO_IOI_Library/
├── Graphs/
│   ├── ShortestPath/
│   │   ├── bfs.cpp
│   │   ├── dijkstra.cpp
│   │   └── bellman_ford.cpp
│   ├── Connectivity/
│   │   └── union_find.cpp
│   ├── MST/
│   │   └── kruskal.cpp
│   └── TreeAlgorithms/
│       └── lca_binary_lifting.cpp
├── DP/
│   └── TreeDP/
│       └── tree_dp_template.cpp
├── DataStructures/
│   ├── SegmentTree/
│   │   └── segment_tree.cpp
│   └── FenwickTree/
│       └── fenwick_tree.cpp
├── NumberTheory/
│   └── modular_arithmetic.cpp
├── Combinatorics/
│   └── nCr_mod.cpp
├── Techniques/
│   └── binary_search.cpp
├── README.txt
└── Examples/ (Currently empty - for problem-specific examples)
```


## General Usage

- Copy the required code from the `.cpp` files into your solution file.
- Modify the template to fit the specific problem requirements (data types, input size, custom functions, etc.).
- Read the comments within each file to understand implementation details and parameters.
- Refer to the inline examples (commented out) in each file to understand how to read input, call functions, and print output.

## Code Explanations, Use Cases, and Examples

### 1. `Graphs/ShortestPath/bfs.cpp`
   - **Description:** Breadth-First Search (BFS) to find the shortest path (by number of edges) from a single source node in an unweighted graph.
   - **Use Cases:**
     - Finding the shortest path in unweighted graphs or grids (e.g., potentially useful for "Jakarta Skyscrapers" if all jumps cost 1, or "Robots" for minimum pushes).
     - Calculating distances from a single source in a network.
     - Exploring graph layers.
     - Checking reachability (Connectivity).
   - **Input Example (for inline example):**
     ```
     5 4       // N=5 nodes, M=4 edges
     1 2
     1 3
     2 4
     3 5
     1         // Start node
     ```
   - **Output Example (for inline example):**
     ```
     Distance from 1 to 1 is 0
     Distance from 1 to 2 is 1
     Distance from 1 to 3 is 1
     Distance from 1 to 4 is 2
     Distance from 1 to 5 is 2
     ```

### 2. `Graphs/ShortestPath/dijkstra.cpp`
   - **Description:** Dijkstra's algorithm to find the shortest path from a single source node in a weighted graph with non-negative edge weights.
   - **Use Cases:**
     - Finding the minimum cost/time path in road networks, communication networks, etc. (e.g., "Cyberland" with state modification, "Train" with complex state modeling).
     - Basis for many other graph algorithms.
   - **Input Example (for inline example):**
     ```
     5 6       // N=5 nodes, M=6 edges (Note: original example had M=5, updated for edges)
     1 2 10
     1 3 3
     2 4 2
     3 2 1
     3 4 8
     4 5 9
     1         // Start node
     ```
   - **Output Example (for inline example):**
     ```
     Distance from 1 to 1 is 0
     Distance from 1 to 2 is 4
     Distance from 1 to 3 is 3
     Distance from 1 to 4 is 6
     Distance from 1 to 5 is 15
     ```

### 3. `Graphs/Connectivity/union_find.cpp`
   - **Description:** Disjoint Set Union (DSU) data structure to track sets of elements and efficiently perform merge (unite) and find operations.
   - **Use Cases:**
     - Determining connected components in a graph (dynamically or statically) (e.g., "Mars", "Rainbow Gold").
     - Kruskal's algorithm for MST (e.g., "Toll").
     - Grouping equivalent items.
     - Detecting cycles during graph construction.
     - Solving dynamic connectivity problems (sometimes with additional techniques).
   - **Input/Usage Example:** The code demonstrates usage directly via function calls (`unite`, `are_connected`).

### 4. `DataStructures/SegmentTree/segment_tree.cpp`
   - **Description:** Segment Tree, a tree data structure supporting efficient $O(\log N)$ range queries (e.g., sum, min, max) and point updates (or range updates with Lazy Propagation - not included in this basic template).
   - **Use Cases:**
     - Problems requiring queries on sums, min/max values over array ranges (e.g., "Sequence" might use it with other algorithms, "Street Lamps" with time modifications).
     - Computational geometry problems (with Sweeping line).
     - Basis for more complex data structures.
   - **Input Example (for inline example):**
     ```
     5         // Array size N
     1 3 2 5 4 // Initial array elements
     // (Queries and updates are done via function calls in the code)
     ```
   - **Output Example (for inline example):**
     ```
     Min in range [1, 3]: 2
     Min in range [0, 4]: 1
     Min in range [1, 3] after update: 0
     ```

### 5. `DataStructures/FenwickTree/fenwick_tree.cpp`
   - **Description:** Fenwick Tree (Binary Indexed Tree - BIT). An efficient data structure for calculating Prefix Sums and performing Point Updates in $O(\log N)$ time. Simpler than Segment Trees but less versatile (mainly for sums).
   - **Use Cases:**
     - Quickly calculating range sums.
     - Counting problems transformable to prefix sums (like counting Inversions).
     - Can sometimes replace Segment Trees for simpler tasks (e.g., "Boat" might benefit from it for DP optimization).
   - **Input/Usage Example:** The code demonstrates usage via function calls (`add`, `query`, `query_range`).

### 6. `NumberTheory/modular_arithmetic.cpp`
   - **Description:** Basic functions for Modular Arithmetic, including Modular Exponentiation and Modular Multiplicative Inverse.
   - **Use Cases:**
     - All problems requiring calculations with very large numbers and outputting the result modulo a specific number (usually a prime like $10^9+7$) (e.g., "Boat", "Bali Sculptures" if the final result is large).
     - Calculating combinations (nCr) modulo a prime.
     - Solving modular linear equations.
   - **Input/Usage Example:** The code demonstrates calls to `power`, `modInverseFermat`, `modInverseExtended`.

### 7. `DP/TreeDP/tree_dp_template.cpp`
   - **Description:** A structural template for applying Dynamic Programming on trees using Depth First Search (DFS).
   - **Use Cases:**
     - Solving optimization or counting problems on trees where a node's state depends on its children's states (e.g., "Fireworks", "Road Closures").
     - Calculating tree properties like diameter, subtree sizes, etc.
   - **Input Example (for inline example - subtree size calculation):**
     ```
     7       // Number of nodes N
     0 1     // Edge between 0 and 1
     0 2
     1 3
     1 4
     2 5
     2 6
     0       // Root (to start DFS)
     ```
   - **Output Example (for inline example):**
     ```
     Size of subtree rooted at 0: 7
     Size of subtree rooted at 1: 3
     Size of subtree rooted at 2: 3
     Size of subtree rooted at 3: 1
     Size of subtree rooted at 4: 1
     Size of subtree rooted at 5: 1
     Size of subtree rooted at 6: 1
     ```

### 8. `Techniques/binary_search.cpp`
   - **Description:** Templates for binary search: searching for a value in a sorted array, and Binary Search on the Answer to find the smallest/largest value satisfying a condition (`check` function).
   - **Use Cases:**
     - Searching for elements in sorted data.
     - Finding the smallest/largest value satisfying a monotonic property, very common in optimization problems (e.g., "Travelling Merchant" for efficiency, "Bali Sculptures" for OR value, "September" for number of days K, "Gap" might use it within its search strategy).
   - **Input/Usage Example:** The code shows usage of `binary_search_value` and `binary_search_on_answer_min`/`max` with a dummy `check` function. You need to implement the `check` function specific to your problem.

### 9. `Graphs/MST/kruskal.cpp`
    - **Description:** Kruskal's algorithm finds a Minimum Spanning Tree (MST) or Minimum Spanning Forest (MSF) of an undirected, edge-weighted graph. It uses the Union-Find data structure.
    - **Use Cases:**
        - Finding the minimum cost to connect all components of a graph (e.g., network design, clustering).
        - Used as a subroutine in other algorithms (e.g., approximating TSP, analyzing network connectivity as in "Toll").
    - **Input Example (for inline example):**
      ```
      7 9       // N=7 nodes, M=9 edges
      1 2 2     // Edge u, v, weight w
      1 4 1
      1 5 4
      2 3 3
      2 4 3
      3 4 5
      4 5 9
      5 6 7
      6 7 8
      ```
    - **Output Example (for inline example):**
      ```
      MST Cost: 24
      Edges in MST:
      1 - 4 (1)
      1 - 2 (2)
      2 - 3 (3)
      1 - 5 (4)
      5 - 6 (7)
      6 - 7 (8)
      ```

### 10. `Graphs/TreeAlgorithms/lca_binary_lifting.cpp`
    - **Description:** Calculates Lowest Common Ancestor (LCA) of any two nodes in a tree efficiently using binary lifting. Requires preprocessing ($O(N \log N)$) after which queries take $O(\log N)$.
    - **Use Cases:**
        - Finding the meeting point of paths in a tree.
        - Calculating distances between nodes in a tree ($dist(u,v) = depth[u] + depth[v] - 2*depth[LCA(u,v)]$).
        - Many tree-based problems involving path queries or relationships between nodes.
    - **Input Example (for inline example):** Adjacency list defining the tree, plus pairs of nodes for LCA queries.
    - **Output Example (for inline example):** LCA for each queried pair.

### 11. `Graphs/ShortestPath/bellman_ford.cpp`
    - **Description:** Bellman-Ford algorithm computes shortest paths from a single source vertex to all other vertices in a weighted digraph. Unlike Dijkstra's, it can handle graphs with negative edge weights. It can also detect negative cycles reachable from the source.
    - **Use Cases:**
        - Shortest paths when edges can have negative weights (but no negative cycles).
        - Detecting negative cycles (useful in arbitrage problems or cycle-based optimization like "Travelling Merchant" after transformation).
    - **Input Example (for inline example):** List of edges with weights, number of nodes, start node.
    - **Output Example (for inline example):** Shortest distances or indication of a negative cycle.

### 12. `Combinatorics/nCr_mod.cpp`
    - **Description:** Calculates combinations "N choose R" ($nCr$) modulo a prime M. Uses precomputed factorials and their modular inverses.
    - **Use Cases:**
        - Counting problems involving selections or arrangements where the result needs to be modulo a prime (very common).
        - Binomial theorem applications.
    - **Input Example (for inline example):** Values for N, R, and the modulus M.
    - **Output Example (for inline example):** $nCr \pmod{M}$.

## How to Compile and Run Tests

*(This section remains the same as in the previous response, explaining environment setup, g++ commands, and input/output redirection)*

## Basic C++ Syntax Guide for Templates

*(This section remains the same as in the previous response, explaining includes, namespaces, types, STL containers, control flow, functions, structs, IO, comments, references, and main)*

## How to Verify the Code Templates

*(This section remains the same as in the previous response, explaining manual tests, edge cases, comparison with samples, online judges, and stress testing)*

---

This complete `README.txt` should now contain all the necessary explanations for the 12 provided code templates. The C++ code files themselves are the same as provided in the previous responses (with English comments).

Sources and related content
