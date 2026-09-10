// Segment Tree with Lazy Propagation (Range Update, Range Query - Max)
// Source: CF 343D (Water Tree)

#include <bits/stdc++.h>
using namespace std;

#define MAX 500106
#define ll long long
#define pb push_back

struct SegmentTree {
    vector<ll> tree, rmqtree, lazy;
    int n;

    void init(int _n) {
        n = _n;
        tree.clear(); tree.resize(4 * n, 0);
        rmqtree.clear(); rmqtree.resize(4 * n, 0);
        lazy.clear(); lazy.resize(4 * n, 0);
    }

    // RMQ: Point Update
    void rmqUpdate(int node, int tb, int te, int idx, int newval) {
        if (te < idx || idx < tb) return;
        if (tb == te) {
            rmqtree[node] = newval;
            return;
        }
        int left = (node << 1), right = left + 1, mid = (tb + te) >> 1;
        rmqUpdate(left, tb, mid, idx, newval);
        rmqUpdate(right, mid + 1, te, idx, newval);
        rmqtree[node] = max(rmqtree[left], rmqtree[right]);
    }

    // RMQ: Range Query (Max)
    int rmqQuery(int node, int tb, int te, int qb, int qe) {
        if (tb > te) return -INT_MAX;
        if (qb > te || qe < tb) return -INT_MAX;
        if (qb <= tb && te <= qe) return rmqtree[node];
        int left = (node << 1), right = left + 1, mid = (tb + te) >> 1;
        int L = rmqQuery(left, tb, mid, qb, qe);
        int R = rmqQuery(right, mid + 1, te, qb, qe);
        return max(L, R);
    }

    // Lazy: Range Update (assign max)
    void update(int node, int tb, int te, int qb, int qe, int value) {
        if (tb > te) return;
        if (lazy[node]) {
            tree[node] = max(lazy[node], tree[node]);
            if (tb != te) {
                lazy[node * 2] = max(lazy[node], lazy[node * 2 + 1]);
                lazy[node * 2 + 1] = max(lazy[node], lazy[node * 2 + 1]);
            }
            lazy[node] = 0;
        }
        if (qb > te || tb > qe) return;
        if (qb <= tb && qe >= te) {
            tree[node] = max(tree[node], value);
            if (tb != te) {
                lazy[node * 2] = max(value, lazy[node * 2 + 1]);
                lazy[node * 2 + 1] = max(value, lazy[node * 2 + 1]);
            }
            return;
        }
        int mid = (tb + te) >> 1;
        int left = node * 2, right = node * 2 + 1;
        update(left, tb, mid, qb, qe, value);
        update(right, mid + 1, te, qb, qe, value);
        tree[node] = max(tree[left], tree[right]);
    }

    // Lazy: Range Query (Max)
    int query(int node, int tb, int te, int qb, int qe) {
        if (tb > te) return 0;
        if (lazy[node]) {
            tree[node] = max(lazy[node], tree[node]);
            if (tb != te) {
                lazy[node * 2] = max(lazy[node], lazy[node * 2 + 1]);
                lazy[node * 2 + 1] = max(lazy[node], lazy[node * 2 + 1]);
            }
            lazy[node] = 0;
        }
        if (qb > te || qe < tb) return 0;
        if (qb <= tb && qe >= te) return tree[node];
        int mid = (tb + te) >> 1;
        int left = node * 2, right = node * 2 + 1;
        int L = query(left, tb, mid, qb, qe);
        int R = query(right, mid + 1, te, qb, qe);
        return max(L, R);
    }
};

/*
Usage:
    SegmentTree st;
    st.init(n);
    st.update(1, 0, n-1, l, r, value);   // range update
    st.query(1, 0, n-1, l, r);           // range query
    st.rmqUpdate(1, 0, n-1, idx, val);   // point update
    st.rmqQuery(1, 0, n-1, l, r);        // range max query
*/
