// Heavy-Light Decomposition (HLD) + Segment Tree
// Source: CF 343D (Water Tree)

#include <bits/stdc++.h>
using namespace std;

#define MAX 500106
#define ll int
#define pb push_back

vector<int> g[MAX];
ll Size[MAX], p[MAX], chain[MAX], nxt[MAX];
ll base[MAX], top[MAX], depth[MAX];
ll cnt = 1, all = 0;
vector<int> csz;

struct SegmentTree {
    vector<ll> tree, rmqtree, lazy;

    void init(int n) {
        tree.clear(); tree.resize(4 * n, 0);
        rmqtree.resize(4 * n, 0);
        lazy.clear(); lazy.resize(n * 4, 0);
    }

    void rmqUpdate(int node, int tb, int te, int idx, int newval) {
        if (te < idx || idx < tb) return;
        if (tb == te) { rmqtree[node] = newval; return; }
        int left = (node << 1), right = left + 1, mid = (tb + te) >> 1;
        rmqUpdate(left, tb, mid, idx, newval);
        rmqUpdate(right, mid + 1, te, idx, newval);
        rmqtree[node] = max(rmqtree[left], rmqtree[right]);
    }

    int rmqQuery(int node, int tb, int te, int qb, int qe) {
        if (tb > te) return -INT_MAX;
        if (qb > te || qe < tb) return -INT_MAX;
        if (qb <= tb && te <= qe) return rmqtree[node];
        int left = (node << 1), right = left + 1, mid = (tb + te) >> 1;
        return max(rmqQuery(left, tb, mid, qb, qe),
                   rmqQuery(right, mid + 1, te, qb, qe));
    }

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
        int mid = (tb + te) >> 1, left = node * 2, right = node * 2 + 1;
        update(left, tb, mid, qb, qe, value);
        update(right, mid + 1, te, qb, qe, value);
        tree[node] = max(tree[left], tree[right]);
    }

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
        int mid = (tb + te) >> 1, left = node * 2, right = node * 2 + 1;
        return max(query(left, tb, mid, qb, qe),
                   query(right, mid + 1, te, qb, qe));
    }
} st;

struct HLD {
    int n;
    void init(int _n) {
        n = _n;
        for (int i = 0; i <= n; i++) g[i].clear();
        nxt.clear(); nxt.resize(n + 1, -1);
        csz.clear(); csz.resize(n + 1, 0);
        cnt = 1; all = 0;
    }

    void dfs(int source, int pr = 0) {
        p[source] = pr;
        Size[source] = 1;
        for (auto to : g[source]) {
            if (to == pr) continue;
            depth[to] = depth[source] + 1;
            dfs(to, source);
            Size[source] += Size[to];
            if (nxt[source] == -1 || Size[to] > Size[nxt[source]])
                nxt[source] = to;
        }
    }

    void hld(int v, int pr = -1) {
        chain[v] = cnt - 1;
        base[v] = all++;
        if (!csz[cnt - 1]) top[cnt - 1] = v;
        ++csz[cnt - 1];
        if (nxt[v] != -1) hld(nxt[v], v);
        for (auto to : g[v]) {
            if (to == pr || to == nxt[v]) continue;
            ++cnt;
            hld(to, v);
        }
    }

    // Path update: update all edges on path a-b with value
    void pathUpdate(int a, int b, int value) {
        while (chain[a] != chain[b]) {
            if (depth[top[chain[a]]] < depth[top[chain[b]]]) swap(a, b);
            int start = top[chain[a]];
            st.update(1, 0, n - 1, base[start], base[a], value);
            a = p[start];
        }
        if (depth[a] > depth[b]) swap(a, b);
        st.update(1, 0, n - 1, base[a], base[b], value);
    }

    // Path query: max on path a-b
    int pathQuery(int a, int b) {
        int res = 0;
        while (chain[a] != chain[b]) {
            if (depth[top[chain[a]]] < depth[top[chain[b]]]) swap(a, b);
            int start = top[chain[a]];
            res = max(res, st.rmqQuery(1, 0, n - 1, base[start], base[a]));
            a = p[start];
        }
        if (depth[a] > depth[b]) swap(a, b);
        res = max(res, st.rmqQuery(1, 0, n - 1, base[a], base[b]));
        return res;
    }

    // Node query
    int nodeQuery(int a) {
        return st.query(1, 0, n - 1, base[a], base[a]);
    }
};

/*
Usage:
    HLD hl;
    hl.init(n);
    // add edges: g[a].pb(b); g[b].pb(a);
    hl.dfs(0);
    hl.hld(0);
    st.init(n);
    hl.pathUpdate(a, b, value);
    int res = hl.pathQuery(a, b);
*/
