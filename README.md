# Topological-Sort-Implementation-CSE2212-
Topological Sort using DFS in C++ with Adjacency Matrix and List (Weighted &amp; Unweighted)
# Topological Sort using DFS in C++ (CSE 2221)

This project implements **Topological Sorting** using **Depth-First Search (DFS)** in C++. It demonstrates:
- DFS-based topological sorting using both **adjacency matrix** and **adjacency list**.
- A **weighted graph** representation using `pair<int, int>` in adjacency list.
- Efficient use of a **stack** to record the topological order of nodes.
- Handles **directed acyclic graphs (DAGs)**.

---

## 📁 Variants Implemented

1. **Adjacency Matrix (Unweighted)**
2. **Adjacency List (Unweighted)**
3. **Adjacency List with Weights** (using `pair<int, int>`)

Each version uses recursion and a visited array to track traversal state.

---

## 🧠 What is Topological Sort?

Topological sorting is an ordering of vertices in a **directed acyclic graph (DAG)** such that for every directed edge `u → v`, node `u` comes before `v` in the ordering. It’s commonly used in task scheduling, course prerequisite resolution, and build systems.

---

## ⏱️ Time and Space Complexity

### ✅ Time Complexity:
- **Adjacency List**: O(V + E)  
- **Adjacency Matrix**: O(V²)

> In adjacency list representation, each node is visited once and each edge is processed once.
> In adjacency matrix representation, we check all possible connections (even non-existent ones), so it’s O(V²).

### 💾 Space Complexity:
- Visited array: O(V)
- Recursion stack: O(V) in worst case
- Adjacency matrix: O(V²)
- Adjacency list: O(V + E)
- Output stack: O(V)

---

## 🧪 Sample Input (Weighted Graph)

