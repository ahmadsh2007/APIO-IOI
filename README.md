# Competitive Programming Code Library (APIO/IOI)

This library contains basic templates for algorithms and data structures commonly used in competitive programming contests like APIO and IOI.

## Directory Structure

APIO_IOI_Library/
├── Graphs/
│   ├── ShortestPath/
│   │   ├── bfs.cpp
│   │   ├── dijkstra.cpp
│   │   └── bellman_ford.cpp   # Added
│   ├── Connectivity/
│   │   └── union_find.cpp
│   └── MST/                   # Added
│       └── kruskal.cpp          # Added
│   └── TreeAlgorithms/        # Added/Renamed
│       └── lca_binary_lifting.cpp # Added
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
├── Combinatorics/           # Added
│   └── nCr_mod.cpp            # Added
├── Techniques/
│   └── binary_search.cpp
├── README.txt
└── Examples/ (Currently empty - for problem-specific examples)


## General Usage

- Copy the required code from the `.cpp` files into your solution file.
- Modify the template to fit the specific problem requirements (data types, input size, custom functions, etc.).
- Read the comments within each file to understand implementation details and parameters.
- Refer to the inline examples (commented out) in each file to understand how to read input, call functions, and print output.

## Code Explanations, Use Cases, and Examples (Including New Additions)

* **(Previous 8 templates: BFS, Dijkstra, Union-Find, SegmentTree, FenwickTree, Modular Arithmetic, TreeDP, Binary Search - descriptions omitted for brevity, see previous response)**

### 9. `Graphs/MST/kruskal.cpp` (New)
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

### 10. `Graphs/TreeAlgorithms/lca_binary_lifting.cpp` (New)
    - **Description:** Calculates Lowest Common Ancestor (LCA) of any two nodes in a tree efficiently using binary lifting. Requires preprocessing ($O(N \log N)$) after which queries take $O(\log N)$.
    - **Use Cases:**
        - Finding the meeting point of paths in a tree.
        - Calculating distances between nodes in a tree ($dist(u,v) = depth[u] + depth[v] - 2*depth[LCA(u,v)]$).
        - Many tree-based problems involving path queries or relationships between nodes.
    - **Input Example (for inline example):** Adjacency list defining the tree, plus pairs of nodes for LCA queries.
    - **Output Example (for inline example):** LCA for each queried pair.

### 11. `Graphs/ShortestPath/bellman_ford.cpp` (New)
    - **Description:** Bellman-Ford algorithm computes shortest paths from a single source vertex to all other vertices in a weighted digraph. Unlike Dijkstra's, it can handle graphs with negative edge weights. It can also detect negative cycles reachable from the source.
    - **Use Cases:**
        - Shortest paths when edges can have negative weights (but no negative cycles).
        - Detecting negative cycles (useful in arbitrage problems or cycle-based optimization like "Travelling Merchant" after transformation).
    - **Input Example (for inline example):** List of edges with weights, number of nodes, start node.
    - **Output Example (for inline example):** Shortest distances or indication of a negative cycle.

### 12. `Combinatorics/nCr_mod.cpp` (New)
    - **Description:** Calculates combinations "N choose R" ($nCr$) modulo a prime M. Uses precomputed factorials and their modular inverses.
    - **Use Cases:**
        - Counting problems involving selections or arrangements where the result needs to be modulo a prime (very common).
        - Binomial theorem applications.
    - **Input Example (for inline example):** Values for N, R, and the modulus M.
    - **Output Example (for inline example):** $nCr \pmod{M}$.