// BFS (Breadth-First Search) - Spanning Tree / Graph Traversal
// Source: CF 1133F1

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define MAX 300005

vector<ll> Graph[MAX];
vector<pair<ll, ll>> edge;
bool Visited[MAX];

void bfs(ll S) {
    queue<ll> Q;
    Q.push(S);
    Visited[S] = true;

    while (!Q.empty()) {
        ll U = Q.front();
        Q.pop();

        for (int i = 0; i < (int)Graph[U].size(); i++) {
            ll V = Graph[U][i];
            if (!Visited[V]) {
                Visited[V] = true;
                Q.push(V);
                edge.pb(mp(U, V));  // edge in BFS tree
            }
        }
    }
}

/*
Usage:
    // Build adjacency list
    Graph[u].pb(v);
    Graph[v].pb(u);

    // Run BFS from source
    bfs(source);

    // edge[] contains BFS tree edges
*/
