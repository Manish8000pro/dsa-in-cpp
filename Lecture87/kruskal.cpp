// 
// Edge	W	Status
// B–G	2	…
// C–D	2	…
// A–F	3	…
// E–D	3	…
// A–B	4	…
// E–F	4	…
// A–G	5	…
// C–E	5	…
// B–F	6	…
// B–C	7	…
// F–G	8	…
// MST cost: —
// Union-Find sets

// {A}
// {B}
// {C}
// {D}
// {E}
// {F}
// {G}

// 1. What Problem Does It Solve?
// Same goal as Prim's — find the Minimum Spanning Tree (MST) of a weighted, connected, undirected graph. But Kruskal's solves it with a completely different strategy: sort all edges globally and greedily add the cheapest ones that don't form a cycle.

// 2. The Core Idea
// Kruskal's is a global greedy algorithm. Unlike Prim's which grows from one node, Kruskal's works like this:

// Sort every edge in the graph by weight (ascending).
// Go through edges one by one — cheapest first.
// If adding the edge connects two different components → accept it.
// If both endpoints are already connected → reject it (it would create a cycle).
// Stop when you have V−1 edges (all nodes are connected).

// The big question is: how do you efficiently check if two nodes are already connected? That's where Union-Find comes in.

// 3. Union-Find (Disjoint Set Union) — The Heart of Kruskal's
// Union-Find is the data structure that makes Kruskal's fast. It tracks which nodes belong to the same connected component.
// It supports two operations:

// find(x) — which component does x belong to?
// union(x, y) — merge the components of x and y.