// Disjoint Set Union (DSU) with Union by Rank + Path Compression
// A more optimized version with union by rank

#include <bits/stdc++.h>
using namespace std;

struct DSU {
    int n;
    vector<int> parent, rank;

    DSU(int _n) {
        n = _n;
        parent.resize(n + 1);
        rank.resize(n + 1, 0);
        for (int i = 1; i <= n; i++) parent[i] = i;
    }

    int find_set(int v) {
        if (v == parent[v]) return v;
        return parent[v] = find_set(parent[v]);
    }

    void union_set(int a, int b) {
        a = find_set(a);
        b = find_set(b);
        if (a != b) {
            if (rank[a] < rank[b]) swap(a, b);
            parent[b] = a;
            if (rank[a] == rank[b]) rank[a]++;
        }
    }

    bool same_set(int a, int b) {
        return find_set(a) == find_set(b);
    }

    int size(int v) {
        return Size[find_set(v)];
    }
};

/*
Usage:
    DSU dsu(n);
    dsu.union_set(a, b);
    dsu.find_set(a);
    dsu.same_set(a, b);
*/
