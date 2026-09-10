// Disjoint Set Union (DSU) with Path Compression
// Source: CF 1559D1 (Mocha and Diana)

#include <bits/stdc++.h>
using namespace std;

struct DSU {
    int n;
    vector<int> parent, Size;

    DSU(int _n) {
        n = _n;
        parent.resize(n + 1, 0);
        Size.resize(n + 1, 0);
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
            parent[b] = a;
        }
    }

    bool same_set(int a, int b) {
        return find_set(a) == find_set(b);
    }
};

/*
Usage:
    DSU dsu(n);
    dsu.union_set(a, b);      // merge sets containing a and b
    dsu.find_set(a);          // find representative of a
    dsu.same_set(a, b);       // check if a and b are in same set
*/
