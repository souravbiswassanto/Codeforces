// Segment Tree for Range Sum Query (Point Update)
// Source: CF 920F

#include <bits/stdc++.h>
using namespace std;

#define MAX 1000006
#define ll long long

int A[MAX];
int tree[MAX * 3];

void stree(int node, int b, int e) {
    if (b == e) {
        tree[node] = A[b];
        return;
    }
    int left = node * 2, right = node * 2 + 1, mid = (b + e) / 2;
    stree(left, b, mid);
    stree(right, mid + 1, e);
    tree[node] = tree[left] + tree[right];
}

void update_single(int node, int b, int e, int updatenode, int newvalue) {
    if (updatenode < b || updatenode > e) return;
    if (b == updatenode) {
        tree[node] = newvalue;
        return;
    }
    int left = node * 2, right = node * 2 + 1, mid = (b + e) / 2;
    update_single(left, b, mid, updatenode, newvalue);
    update_single(right, mid + 1, e, updatenode, newvalue);
    tree[node] = tree[left] + tree[right];
}

int query(int node, int b, int e, int i, int j) {
    if (i <= b && e <= j) return tree[node];
    else if (i > e || b > j) return 0;
    int left = node * 2, right = node * 2 + 1, mid = (b + e) / 2;
    int c = query(left, b, mid, i, j);
    int d = query(right, mid + 1, e, i, j);
    return c + d;
}

/*
Usage:
    stree(1, 1, n);                          // build (1-indexed)
    update_single(1, 1, n, idx, newvalue);   // point update
    int sum = query(1, 1, n, l, r);          // range sum query
*/
