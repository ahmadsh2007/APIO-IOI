# 🧠 Competitive Programming Cheat Sheet — APIO 2025 Prep

## 📚 Graph Algorithms

| Problem Type                            | Algorithm / Technique     | Notes |
|----------------------------------------|----------------------------|-------|
| Shortest path (no weights / unweighted) | BFS                        | O(V + E) |
| Shortest path (positive weights)       | Dijkstra                   | Use priority_queue |
| Shortest path (with negative weights)  | Bellman-Ford               | O(VE) |
| All-pairs shortest path                | Floyd-Warshall             | O(V³) |
| Detect cycle in directed graph         | DFS / Topological Sort     | Use visited[] and recursion stack |
| Detect cycle in undirected graph       | Union-Find (DSU) / DFS     | Careful with visited[] |
| Connected components                   | BFS / DFS                  | Standard |
| Tree LCA (offline)                     | Binary Lifting / Euler Tour| Preprocessing needed |
| MST (Minimum Spanning Tree)            | Kruskal / Prim             | Kruskal uses DSU |

## 🧮 Math and Number Theory

| Problem Type                      | Algorithm / Technique        | Notes |
|----------------------------------|------------------------------|-------|
| Large exponentiation (a^b mod m) | Binary Exponentiation        | O(log b) |
| GCD / LCM                        | Euclidean Algorithm          | Use __gcd in C++ |
| Primality test                   | Trial Division / Miller-Rabin| Use sieve for many numbers |
| Combinatorics (nCr mod p)        | Pascal’s Triangle / Fermat   | Precompute factorials mod p |
| Modular inverse                  | Fermat’s Little Theorem      | a^(p−2) mod p if p is prime |

## 🔢 Data Structures

| Requirement                       | Use                          | Notes |
|----------------------------------|------------------------------|-------|
| Range sum / point update         | Fenwick Tree (BIT)           | O(log n) |
| Range sum / range update         | Segment Tree / Lazy Segment Tree | Slower but more flexible |
| Dynamic connectivity             | Union-Find (DSU)             | Use path compression |
| Sliding window min/max           | Monotonic Queue              | O(n) |
| Priority queue access            | std::priority_queue          | C++ STL |

## 🧵 Strings

| Problem Type                      | Algorithm / Technique        | Notes |
|----------------------------------|------------------------------|-------|
| String matching                   | KMP / Z-Algorithm             | Faster than naive |
| Lexicographical comparison        | STL: `s1 < s2`                | C++ built-in |
| Hashing strings                   | Rolling Hash / Polynomial Hash| Avoid collisions |
| Prefix queries                    | Trie Tree                     | Space-heavy |

## 🔄 Dynamic Programming

| Problem Type                      | Algorithm / Technique        | Notes |
|----------------------------------|------------------------------|-------|
| DP over subsets                  | Bitmask DP                    | O(2ⁿ * n) |
| DP over sequences                | Classic DP                    | Fibonacci, LIS, Knapsack |
| DP on trees                      | DFS + DP                      | Combine results from subtrees |

## 📦 Miscellaneous

| Type                              | Technique                    | Notes |
|----------------------------------|------------------------------|-------|
| Meet in the middle                | Split + brute force          | Used in hard constraints |
| Binary search on answer           | Search space must be monotonic| Apply predicate logic |
| Two pointers                      | For sorted arrays / windows  | O(n) |
