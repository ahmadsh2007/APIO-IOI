# Competitive Programming Learning Plan & Guides

## Learning Plan & Resource Guide (Spreadsheet Format)

Here's a breakdown you can copy into a spreadsheet (like Google Sheets or Excel) or use as a reference:

| Topic/Algorithm                     | Core Concept                                                                   | Learning Resource Types                                                                                              | Problem Pattern Keywords                                                                                              | Example Problems (from your PDFs)                     | Practice Suggestions                                                                                                  | Est. Learning Time (Concept + Basic Practice) |
| :---------------------------------- | :----------------------------------------------------------------------------- | :------------------------------------------------------------------------------------------------------------------- | :-------------------------------------------------------------------------------------------------------------------- | :---------------------------------------------------- | :-------------------------------------------------------------------------------------------------------------------- | :-------------------------------------------- |
| **C++ Basics** | Variables, types, I/O, loops, conditions, functions, basic STL (`vector`)      | Interactive C++ tutorials (websites), introductory programming course materials, C++ reference websites              | (Prerequisite)                                                                                                        | (All)                                                 | Solve simple I/O problems, array manipulations                                                                        | 3-6 hours (initial grasp)                     |
| **Graph: Representation** | Adjacency List, Adjacency Matrix                                               | Graph theory tutorials, competitive programming resources                                                            | "graph", "nodes", "edges", "connections"                                                                              | (Most Graph Problems)                                 | Implement reading graph input and storing it                                                                          | 1-2 hours                                     |
| **Graph: BFS** (`bfs.cpp`)          | Level-by-level traversal, shortest path (unweighted)                           | Algorithm visualizations, tutorials (GeeksforGeeks, CP-Algorithms), book chapters                                    | "shortest path (unweighted)", "minimum edges", "reachability", "grid traversal", "level"                              | "Robots", "Jakarta Skyscrapers"                       | OJ tags: BFS, Shortest Path, Graph Traversal                                                                          | 2-3 hours                                     |
| **Graph: Dijkstra** (`dijkstra.cpp`)  | Greedy shortest path (non-negative weights), uses Priority Queue               | Algorithm visualizations, tutorials, book chapters                                                                   | "shortest path (weighted)", "minimum cost path", "non-negative weights"                                               | "Cyberland", "Train"                                  | OJ tags: Dijkstra, Shortest Path                                                                                      | 3-4 hours                                     |
| **Data Structure: Union-Find (DSU)** (`union_find.cpp`) | Track disjoint sets, merge sets, check connectivity                            | Tutorials (GeeksforGeeks, CP-Algorithms), visualizations                                                             | "connectivity", "grouping", "connected components", "minimum spanning tree" (helper)                                | "Mars", "Rainbow Gold", "Toll"                        | OJ tags: DSU, Union Find, Connectivity                                                                                | 2-3 hours                                     |
| **Graph: Kruskal (MST)** (`kruskal.cpp`) | Build MST greedily using sorted edges and DSU                                  | MST tutorials, graph algorithm book chapters                                                                         | "minimum spanning tree", "minimum cost to connect all", "network design"                                            | "Toll"                                                | OJ tags: MST, Kruskal                                                                                                 | 2-3 hours (assumes DSU known)                 |
| **Technique: Binary Search** (`binary_search.cpp`) | Search sorted data; find min/max value satisfying monotonic condition        | Algorithm tutorials, "Binary Search on Answer" articles/tutorials                                                    | "search sorted array", "find first/last occurrence", "minimum X such that P(X)", "maximum Y such that Q(Y)"            | "Travelling Merchant", "Bali Sculptures", "September" | OJ tags: Binary Search                                                                                                | 3-4 hours (incl. Answer Search)               |
| **Data Structure: Fenwick Tree (BIT)** (`fenwick_tree.cpp`) | Efficient prefix sums & point updates                                          | Tutorials (TopCoder, CP-Algorithms, GeeksforGeeks), visualizations                                                   | "prefix sum", "range sum query", "point update", "counting inversions"                                              | "Boat" (potential use)                                | OJ tags: Fenwick Tree, BIT                                                                                            | 3-4 hours                                     |
| **Data Structure: Segment Tree** (`segment_tree.cpp`) | Efficient range queries (min/max/sum/etc.) & point/range updates             | Tutorials (CP-Algorithms, GeeksforGeeks), visualizations                                                             | "range query", "range minimum", "range sum", "point update", "range update" (with lazy prop.)                         | "Street Lamps", "New Home", "Sequence"                | OJ tags: Segment Tree, Range Queries                                                                                  | 4-6 hours (basic), +hours for lazy prop.      |
| **Number Theory: Modular Arithmetic** (`modular_arithmetic.cpp`) | Arithmetic with modulo, modular inverse, exponentiation                        | Number theory tutorials for CP, modular arithmetic articles (CP-Algorithms)                                          | "modulo", "large numbers", "result modulo 10^9+7"                                                                     | "Boat", "Bali Sculptures", "nCr"                      | OJ tags: Math, Number Theory, Modular Arithmetic                                                                      | 3-5 hours                                     |
| **Combinatorics: nCr mod M** (`nCr_mod.cpp`) | Calculate combinations modulo prime                                            | Combinatorics tutorials, nCr mod M articles                                                                          | "number of ways to choose", "combinations", "select R from N", "modulo"                                               | (Used within other problems)                          | OJ tags: Combinatorics, Math, nCr                                                                                     | 2-3 hours (assumes Mod Arith known)           |
| **Dynamic Programming: Basics** | Optimal substructure, overlapping subproblems (Memoization/Tabulation)       | DP tutorials (GeeksforGeeks, TopCoder), online courses (free/paid), book chapters (e.g., CLRS)                       | "minimum cost", "maximum value", "number of ways", "longest subsequence", "subproblems", "states", "transitions"        | "Boat", "Bali Sculptures", "Sequence", "Permutation"  | OJ tags: DP. Start with classics: Knapsack, LIS, LCS, Edit Distance, Coin Change.                                      | 6-10+ hours (fundamental, takes practice)     |
| **DP: Tree DP** (`tree_dp_template.cpp`) | DP on tree structures, state depends on children                               | Tree DP specific tutorials                                                                                           | Problems involving paths/subtrees/properties on trees where calculation depends recursively on children             | "Fireworks", "Road Closures"                          | OJ tags: DP, Tree DP, Trees                                                                                           | 4-6 hours (assumes DP basics known)           |
| **Graph: Bellman-Ford** (`bellman_ford.cpp`) | Shortest path with negative edges, negative cycle detection                  | Algorithm tutorials, book chapters                                                                                   | "shortest path", "negative weights", "negative cycle detection", "arbitrage"                                        | "Travelling Merchant" (transformed)                   | OJ tags: Bellman-Ford, Shortest Path                                                                                  | 3-4 hours                                     |
| **Graph: LCA** (`lca_binary_lifting.cpp`) | Lowest Common Ancestor in a tree                                             | LCA tutorials, Binary Lifting articles (CP-Algorithms)                                                               | "lowest common ancestor", "distance between nodes in tree", "path queries on tree"                                    | (General tree utility)                                | OJ tags: LCA, Trees                                                                                                   | 3-4 hours                                     |

**Estimated Learning Time:** These are rough estimates for understanding the concept and solving a few basic problems. Mastery requires much more practice. With 3 hours/day, you might aim to cover 1-3 topics per week, depending on complexity.

## Learning Resources (Where to Find Them)

Since I cannot provide direct links, here are the types of resources to search for:

* **CP-Algorithms (website):** Excellent, detailed articles on many algorithms and data structures. Search for the algorithm name + "cp-algorithms".
* **GeeksforGeeks (website):** Many tutorials and C++ implementations, good for basics. Search for algorithm name + "geeksforgeeks".
* **TopCoder Tutorials (website):** Older but still very valuable in-depth articles on many topics. Search for algorithm name + "topcoder tutorial".
* **USACO Training Pages (website):** Structured learning with problems. Search "USACO training".
* **Competitive Programmer's Handbook (PDF/Book):** A highly recommended free book covering many topics concisely.
* **Introduction to Algorithms (CLRS Book):** Comprehensive algorithms textbook (more theoretical).
* **YouTube Channels:** Search for algorithm names, many channels explain concepts visually (e.g., channels by William Fiset, Abdul Bari, MIT OpenCourseware).
* **Algorithm Visualizers:** Websites that show algorithms running step-by-step on sample inputs. Search "algorithm visualizer" + algorithm name.
* **Online Judges (for Practice):** Codeforces, AtCoder, LeetCode, CSES Problem Set, SPOJ.

## How to Identify Required Algorithm in a Contest

This takes practice, but here are clues:

1.  **Read Carefully:** Understand the goal (minimize/maximize something, count something, find a path, check feasibility?).
2.  **Analyze Constraints:**
    * **N size:** $N \le 20$? $\implies$ Exponential complexity likely okay (Bitmask DP, recursion with pruning). $N \approx 1000$? $\implies O(N^2)$ might pass. $N \approx 10^5$? $\implies O(N \log N)$ or $O(N)$ needed. $N \approx 10^6$? $\implies O(N)$ or $O(N \log N)$ definitely.
    * **Time Limit:** Usually 1-2 seconds. Allows roughly $10^8$ operations per second as a very rough estimate.
    * **Memory Limit:** Check if large arrays or data structures are feasible.
3.  **Input/Output Format:**
    * Graph defined by nodes/edges? $\implies$ Graph algorithms.
    * Tree structure given? $\implies$ Tree algorithms (LCA, Tree DP).
    * Array/Sequence given? $\implies$ DP, Data Structures (SegTree/BIT), Binary Search.
    * Grid? $\implies$ BFS, DFS, DP on grid.
    * Geometric points/shapes? $\implies$ Geometry algorithms.
    * Queries involved? $\implies$ Data structures, offline processing. Range queries? $\implies$ SegTree/BIT.
4.  **Keywords (as listed in the table):** "Shortest path", "range query", "number of ways", "minimum cost to connect", "modulo", etc., are strong indicators.
5.  **Problem Type Transformation:** Can you model the problem as something else? E.g., Can the states be nodes in a graph? Can the optimization be solved by binary searching on the answer?
6.  **Subtasks:** Look at simpler versions (smaller N, special graph types like trees/lines). Solving these might give hints for the general solution.
7.  **Try Small Examples:** Work through a small case manually. Does it look like you're building up a solution from smaller parts (DP)? Are you exploring possibilities level-by-level (BFS)? Are you making greedy choices (Dijkstra, Kruskal)?

## How to Save Your Code During Study

1.  **Use Version Control (Highly Recommended):**
    * Learn basic **Git**. It's the standard.
    * Create a local Git repository for your `APIO_IOI_Library`.
    * Use platforms like **GitHub**, GitLab, or Bitbucket to host your repository privately or publicly.
    * **Benefits:** Tracks history, allows experimenting on branches without breaking main code, easy backup, accessible from anywhere.
    * **Workflow:** Keep the templates clean on the main branch. When solving a problem, maybe create a branch or just copy the template into your solution file and modify it there. Commit changes regularly with descriptive messages.
2.  **Local Folder Structure:** Maintain an organized folder structure (like the one proposed for the library).
3.  **Template vs. Solution:**
    * Keep the library files (e.g., `dijkstra.cpp`) as clean, general templates.
    * When you solve a specific problem (e.g., "Cyberland"), create a new file (`cyberland_solution.cpp`) and *copy* the relevant template(s) (e.g., Dijkstra) into it. Modify the copied code as needed for the problem. Add comments explaining the modifications.
    * This keeps your library reusable and your specific solutions separate.
4.  **Descriptive Naming:** Use clear names for files and folders.

## Focused Note-Taking (Paper or Digital)

Focus on notes that help you **recall and apply** concepts quickly during a contest.

1.  **Algorithm Summary:**
    * **Name:** e.g., Dijkstra
    * **Purpose:** Shortest path (non-negative weights), single source.
    * **Complexity:** $O(E \log V)$ or $O(E + V \log V)$ with Priority Queue.
    * **Core Idea:** Greedy selection using Priority Queue, relax edges.
    * **Data Structures Used:** Priority Queue, Adjacency List.
2.  **Template Implementation Notes:**
    * Key variables/parameters and their meaning.
    * Initialization requirements (e.g., `dist` array to infinity, `pq` with start node).
    * 0-based vs 1-based indexing conventions used in *your* template.
    * Tricky lines or common bugs (e.g., checking `d > dist[u]` in Dijkstra, integer overflow with `long long`, `idx & -idx` in BIT).
3.  **Use Cases & Problem Patterns:**
    * List keywords/phrases associated with the algorithm.
    * Briefly note 1-2 example problems where it was used effectively.
    * Mention common transformations (e.g., modeling states as graph nodes for BFS/Dijkstra).
4.  **Pitfalls/Gotchas:**
    * Dijkstra fails with negative weights.
    * Bellman-Ford needed for negative weights/cycles.
    * Integer overflow (`long long` needed?).
    * Off-by-one errors in loops/ranges.
    * Complexity mismatch with problem constraints.
    * Forgetting `mod` in modular arithmetic.
    * Binary search requires monotonicity.
    * Union-Find needs path compression/rank for efficiency.
5.  **Diagrams:** Especially for graphs, trees, data structures (SegTree). Draw small examples.
6.  **Debugging Tips:** Common print statements to check state (e.g., `dist` values in Dijkstra, `parent` array in DSU).

Use a system that works for you (notebook, digital notes like Notion/Obsidian/Evernote, comments in code). The goal is quick reference and reinforcing understanding, not just copying code.

## How to Compile and Run Tests (General Guide)

1.  **Setup:** Ensure you have a C++ compiler (like g++) installed.
2.  **Save & Modify:** Save the desired `.cpp` template code (from the library sections) into a file (e.g., `test_bfs.cpp`). Uncomment or add a `main` function block. Modify `main` to read input from `std::cin` according to the expected format for that algorithm.
3.  **Compile:** Open a terminal/command prompt, navigate to the file's directory, and compile:
    ```bash
    g++ test_bfs.cpp -o test_bfs -std=c++11
    ```
    (Replace filenames appropriately).
4.  **Prepare Input:** Create a text file (e.g., `input.txt`) containing the test case input data.
5.  **Run:** Execute the compiled program, redirecting input from your file:
    ```bash
    ./test_bfs < input.txt
    ```
6.  **Check Output:** Observe the output printed to the console. Redirect to a file for easier comparison:
    ```bash
    ./test_bfs < input.txt > output.txt
    ```
    Then, compare `output.txt` with your expected output.

## Testing Guide for Each Template

*(Refer to the specific testing steps outlined in the previous response for each of the 12 algorithms: BFS, Dijkstra, Union-Find, Segment Tree, Fenwick Tree, Modular Arithmetic, Tree DP, Binary Search, Kruskal, LCA, Bellman-Ford, nCr)*

## Basic C++ Syntax Guide for Templates

*(Refer to the specific C++ syntax explanations outlined in the previous response covering includes, namespaces, types, STL containers, control flow, functions, structs, IO, comments, references, and main)*