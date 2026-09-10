// Fenwick Tree / Binary Indexed Tree (BIT)
// Source: CF 1579E2 (Array Optimization by Deque)

#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct FT {
    int n;
    vector<int> BIT;

    FT(int _n) {
        n = _n;
        BIT.resize(n + 5, 0);
    }

    void update(int x, ll delta) {
        for (; x <= n; x += x & -x) BIT[x] += delta;
    }

    ll query(int x, ll sum = 0LL) {
        for (; x > 0; x -= x & -x) sum += BIT[x];
        return sum;
    }

    // Range sum [l, r]
    ll query(int l, int r) {
        return query(r) - query(l - 1);
    }
};

/*
Usage:
    FT bit(n);
    bit.update(idx, delta);     // add delta at position idx (1-indexed)
    ll sum = bit.query(x);      // prefix sum [1..x]
    ll rangeSum = bit.query(l, r); // sum [l..r]
*/
