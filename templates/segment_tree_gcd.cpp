// Segment Tree for Range GCD Query
// Source: CF 1549D (Integers Have Friends)

#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct SegmentTree {
    vector<ll> tree;
    int n;

    SegmentTree(int _n) {
        n = _n;
        tree.clear();
        tree.resize(n * 4);
    }

    void build(int node, int tb, int te, ll* arr) {
        if (tb > te) return;
        if (tb == te) {
            tree[node] = arr[tb];
            return;
        }
        int mid = (tb + te) >> 1;
        int left = (node * 2), right = node * 2 + 1;
        build(left, tb, mid, arr);
        build(right, mid + 1, te, arr);
        tree[node] = __gcd(tree[left], tree[right]);
    }

    ll query(int node, int tb, int te, int qb, int qe) {
        if (tb > te) return 0;
        if (qb > te || qe < tb) return 0;
        if (qb <= tb && te <= qe) return tree[node];
        int left = (node << 1), right = left + 1, mid = (tb + te) >> 1;
        ll L = query(left, tb, mid, qb, qe);
        ll R = query(right, mid + 1, te, qb, qe);
        return __gcd(L, R);
    }
};

/*
Usage:
    ll arr[n];
    SegmentTree st(n);
    st.build(1, 0, n-1, arr);
    ll g = st.query(1, 0, n-1, l, r);  // gcd of arr[l..r]
*/
