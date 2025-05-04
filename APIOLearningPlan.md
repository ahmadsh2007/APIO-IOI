# APIO/IOI Preparation Plan (Approx. 30-40 Hours)

**Goal:** Gain a working understanding and basic implementation ability for fundamental algorithms and data structures commonly needed in contests like APIO/IOI, sufficient to attempt simpler problems involving them within the timeframe (approx. May 6th - May 17th, ~3 hours/day). Mastery requires more time, but this provides a foundation.

**Assumptions:** You are concurrently learning/refreshing C++ basics (variables, IO, loops, conditions, functions, basic `std::vector`).

---

## Focused Learning Plan & Topic Order (Flexible)

**(Week 1 Focus: Core Graph Algorithms, Binary Search, Basic Tools) ~21 Hours**

1.  **Graph Representation & BFS (4-5 hours)**
    * **Concept (1 hr):** How to represent graphs (Adjacency List primarily), core idea of BFS (level-order traversal).
    * **Template (`bfs.cpp`) (1 hr):** Understand the code, data structures used (`std::queue`).
    * **Practice (2-3 hrs):** Implement reading graph input. Solve 2-3 basic BFS problems (reachability, shortest path unweighted) on an online judge (e.g., CSES, LeetCode, Codeforces easy graph problems). Test your template.
    * *Relevant Problems:* "Robots", "Jakarta Skyscrapers".

2.  **Dijkstra (`dijkstra.cpp`) (4 hours)**
    * **Concept (1 hr):** Greedy approach, use of Priority Queue, handling weighted edges (non-negative).
    * **Template (1 hr):** Understand the code, `std::pair`, `std::priority_queue`.
    * **Practice (2 hrs):** Solve 1-2 basic Dijkstra problems. Test your template.
    * *Relevant Problems:* "Cyberland", "Train" (Note: these require more advanced state modeling than the basic template).

3.  **Union-Find (DSU) (`union_find.cpp`) (3 hours)**
    * **Concept (0.5 hr):** Disjoint sets, `find` (with path compression), `unite` (by size/rank).
    * **Template (0.5 hr):** Understand the implementation.
    * **Practice (2 hrs):** Solve 2-3 problems involving checking connectivity or grouping elements. Test your template.
    * *Relevant Problems:* "Mars", "Rainbow Gold", "Toll" (as part of Kruskal).

4.  **Binary Search (`binary_search.cpp`) (4-5 hours)**
    * **Concept (1-1.5 hrs):** Searching sorted data, concept of monotonicity, Binary Search on the Answer.
    * **Template (0.5 hr):** Understand `binary_search_value` and `binary_search_on_answer_min/max`. Focus on how the `check` function works.
    * **Practice (2-3 hrs):** Solve 1-2 value search problems and 1-2 "Binary Search on Answer" problems (often involve checking feasibility with greedy or other simple algorithms). Test your template.
    * *Relevant Problems:* "Travelling Merchant", "Bali Sculptures", "September", "Gap".

5.  **Modular Arithmetic (`modular_arithmetic.cpp`) (3-4 hours)**
    * **Concept (1 hr):** Basic operations (add, sub, mul) modulo M, Modular Exponentiation (binary exponentiation). Concept of Modular Multiplicative Inverse.
    * **Template (1 hr):** Understand `power`. Understand `modInverseExtended` (preferred) or `modInverseFermat` (if modulus is prime).
    * **Practice (1-2 hrs):** Solve problems requiring calculations with large numbers modulo $10^9+7$. Practice calculating powers and inverses. Test your template.
    * *Relevant Problems:* "Boat", "Bali Sculptures".

**(Week 2 Focus: Introduction to DP & Data Structures, Practice)** ~15-19 Hours

6.  **Fenwick Tree (BIT) (`fenwick_tree.cpp`) (3-4 hours)**
    * **Concept (1 hr):** Prefix sums, point updates using bit manipulation (`idx & -idx`).
    * **Template (1 hr):** Understand `add` and `query` logic (1-based vs 0-based interface).
    * **Practice (1-2 hrs):** Solve 1-2 problems requiring range sum queries with point updates. Test your template.
    * *Relevant Problems:* "Boat" (potentially for optimizing DP).

7.  **Dynamic Programming (Basics) (6-8 hours)**
    * **Concept (2-3 hrs):** Focus on *identifying subproblems*, defining *states*, finding *recurrence relations* (transitions), and identifying *base cases*. Understand Memoization vs Tabulation conceptually. Start with simple 1D DP (e.g., Fibonacci, Max Subarray Sum) and classic 2D DP (e.g., Knapsack 0/1, Longest Common Subsequence - LCS).
    * **Template:** General DP doesn't have a single template like graphs. Practice writing recursive functions with memoization or iterative loops for tabulation based on the recurrence.
    * **Practice (4-5 hrs):** Solve several classic DP problems (Knapsack, LIS, LCS, Coin Change variants). Focus on getting the recurrence correct.
    * *Relevant Problems:* "Boat", "Bali Sculptures", "Sequence", "Permutation".

8.  **Integrated Practice & Review (Remaining Time: ~2-7 hours)**
    * Revisit templates, ensure you understand them.
    * Try solving easier problems from the APIO/IOI PDFs you provided, attempting to identify which learned technique(s) might apply.
    * Use online judges (Codeforces Div 3/Div 2 A/B/C, AtCoder Beginner Contests, CSES Problem Set) to practice applying these core concepts. Filter problems by tags (BFS, DP, Binary Search, DSU, Data Structures, etc.).

---

## Topics Omitted/De-prioritized in this 30-40h Plan:

* Segment Tree (More complex than BIT, focus on BIT first)
* Kruskal / MST (Relatively quick if DSU is known, but less frequent than core pathfinding/DP/DS)
* LCA (Very useful for trees, but perhaps less frequent than core graph/DP/DS in general)
* Bellman-Ford (More niche than Dijkstra unless negative weights appear)
* Tree DP (Requires solid basic DP understanding first)
* Combinatorics (nCr - Quick to learn if Mod Arith is known, but maybe lower priority than core DP/Graphs/DS)
* More Advanced DP, Geometry, String Algorithms, Flow, etc.

---

## How to Use Your 3 Hours/Day:

* **Concept Learning (30-60 mins):** Read tutorials, watch videos, understand the idea.
* **Template Study (30 mins):** Analyze the provided C++ template code, understand the implementation details.
* **Practice Problems (90+ mins):** **This is crucial.** Find problems on online judges tagged with the topic and try to solve them. Start easy, then increase difficulty. Focus on implementing the algorithm correctly. Test and debug.

---

## Learning Resources (Where to Find Them)

Search for these types of resources:

* **CP-Algorithms (website):** Excellent, detailed articles. (Search: `[Algorithm Name] cp-algorithms`)
* **GeeksforGeeks (website):** Many tutorials and C++ implementations. (Search: `[Algorithm Name] geeksforgeeks`)
* **TopCoder Tutorials (website):** In-depth articles. (Search: `[Algorithm Name] topcoder tutorial`)
* **USACO Training Pages (website):** Structured learning. (Search: `USACO training`)
* **Competitive Programmer's Handbook (PDF/Book):** Highly recommended free book.
* **YouTube Channels:** Visual explanations. (Search: `[Algorithm Name] algorithm tutorial`, e.g., channels by William Fiset, Abdul Bari).
* **Algorithm Visualizers:** Step-by-step execution. (Search: `algorithm visualizer [Algorithm Name]`)
* **Online Judges (Practice):** Codeforces, AtCoder, LeetCode, CSES Problem Set, SPOJ.

---

## How to Identify Required Algorithm in a Contest

Practice recognizing patterns:

1.  **Goal:** Minimize/maximize? Count? Find path? Check feasibility?
2.  **Constraints:**
    * $N \le 20 \implies$ Exponential (Bitmask DP?).
    * $N \approx 1000 \implies O(N^2)$ ok?
    * $N \approx 10^5 \implies O(N \log N)$ or $O(N)$ needed.
    * Time Limit (~1-2s $\approx 10^8$ ops). Memory Limit.
3.  **Input/Output:** Graph structure? Tree? Array? Grid? Queries?
4.  **Keywords:** "Shortest path", "minimum cost", "connect", "reachable" $\implies$ Graphs. "Range query/update" $\implies$ Data Structures. "Minimum X such that..." $\implies$ Binary Search on Answer. "Number of ways" $\implies$ DP/Combinatorics. "Modulo" $\implies$ Modular Arithmetic. "Tree" $\implies$ Tree Algos.
5.  **Model Transformation:** Can it be viewed as a graph problem? Can you binary search on the answer?
6.  **Subtasks:** Simpler versions give hints.
7.  **Small Examples:** Manual walkthrough reveals patterns (DP substructure? BFS layers? Greedy choices?).

---

## How to Save Your Code During Study

1.  **Use Git (Recommended):** Learn basics (`git init`, `add`, `commit`). Use GitHub/GitLab for backup/access. Keep templates clean on main branch, solve problems in separate files/branches.
2.  **Local Folders:** Use the proposed library structure.
3.  **Template vs. Solution:** Copy templates into specific solution files (`problem_name.cpp`) and modify there. Comment changes.
4.  **Naming:** Use clear file/folder names.

---

## Focused Note-Taking (Paper or Digital)

Focus on quick recall for contests:

1.  **Algorithm Summary:** Name, Purpose, Complexity, Core Idea, Data Structures Used.
2.  **Implementation Notes:** Key parameters, initialization, indexing (0 vs 1), tricky lines, common bugs.
3.  **Use Cases:** Keywords, example problem types, common transformations.
4.  **Pitfalls:** When it fails (Dijkstra/negative weights), common errors (overflow, off-by-one, forgetting mod, non-monotonicity for BS).
5.  **Diagrams:** For graphs, trees, data structures.
6.  **Debugging:** Useful print statements or checks for the algorithm.

Choose a system (notebook, digital) that works for *you*. Emphasize understanding over copying.

---

## Final Advice for the Timeframe:

* **Master the Fundamentals:** Prioritize understanding and implementing BFS, Dijkstra, DSU, Binary Search, and basic DP recurrences reliably.
* **Practice C++ STL:** Get fluent with `vector`, `pair`, `queue`, `priority_queue`, `sort`, `cin`, `cout`.
* **Focus on Problem Solving:** Spend the majority of your time applying algorithms to actual problems.
* **Use the Resources:** Understand *why* algorithms work using tutorials and visualizers.
* **Organize:** Keep your code and notes structured.

Good luck with your focused preparation!