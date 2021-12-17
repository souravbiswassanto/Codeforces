// Problem: D. Water Tree
// Contest: Codeforces - Codeforces Round #200 (Div. 1)
// URL: https://codeforces.com/problemset/problem/343/D
// Memory Limit: 256 MB
// Time Limit: 4000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
using namespace std;
#define MAX 500106
#define ll int
#define pb push_back
#define mem(a,v) memset(a,v,sizeof(a))

ll n, m, all, cnt = 1;
vector<int> g[MAX], nxt, csz;
vector<ll> tree, mx;
ll val[MAX], A[MAX]; 
ll Size[MAX], p[MAX], chain[MAX];
ll base[MAX], top[MAX], depth[MAX];
int waterat[MAX];
// chain array stores the chain number of a node v 

struct SegmentTree{
    vector<ll> tree,rmqtree;
	vector<ll> lazy;
    void init(int n){
        tree.clear(); tree.resize(4 * n,0);
        rmqtree.resize(4 * n, 0);
        mx.clear(); mx.resize(4 * n, 0);
        lazy.clear(); lazy.resize(n * 4, 0);
    }
     //** Segment TREE PART STARTED**//
     void rmqupdate(int node, int tb, int te,int idx, int newval){
        if(te < idx || idx < tb)return; 
        if(tb == te){
            rmqtree[node] = newval;
            return;
        }
        int left, right, mid;
        left = (node << 1);
        right = left + 1;
        mid = (tb + te) >> 1;
        rmqupdate(left, tb, mid, idx, newval);
        rmqupdate(right, mid + 1, te, idx, newval);
        rmqtree[node] = max(rmqtree[left],rmqtree[right]);
    }
    
    int rmqquery(int node, int tb, int te, int qb, int qe){
        if(tb > te) return -INT_MAX;
        if(qb > te || qe < tb)return -INT_MAX;
        if(qb <= tb && te <= qe){
            return rmqtree[node];
        }
        int left, right, mid;
        left = (node << 1);
        right = left + 1;
        mid = (tb + te) >> 1;
        int L = rmqquery(left, tb, mid, qb, qe);
        int R = rmqquery(right, mid + 1, te, qb, qe);
        return max(L,R);
    }
     
    void update (int node, int tb, int te, int qb, int qe, int value){
        if (tb > te)return;
        if(lazy[node]){
            tree[node] = max(lazy[node], tree[node]);
            if(tb != te){
                lazy[node * 2] = max(lazy[node], lazy[node * 2 + 1]);
                lazy[node * 2 + 1] =  max(lazy[node], lazy[node * 2 + 1]);
            }
            lazy[node] = 0;
        }
        if(qb > te || tb > qe)return;
        if(qb <= tb && qe >= te){
            tree[node] = max(tree[node], value);
            if(tb != te){
                lazy[node * 2] = max(value, lazy[node * 2 + 1]);
                lazy[node * 2 + 1] =  max(value, lazy[node * 2 + 1]);
            }
            return;
        }
        int mid=(tb + te) >> 1;
        int left = node * 2;
        int right = node * 2 + 1;
        update(left, tb, mid, qb, qe, value);
        update(right, mid + 1, te, qb, qe, value);
        tree[node] = max(tree[left], tree[right]);
    }
    
    int query(int node, int tb, int te, int qb, int qe){
        if(tb > te)return 0;
        if(lazy[node]){
            tree[node] = max(lazy[node], tree[node]);
            if(tb != te){
                lazy[node * 2] = max(lazy[node], lazy[node * 2 + 1]);
                lazy[node * 2 + 1] =  max(lazy[node], lazy[node * 2 + 1]);
            }
            lazy[node] = 0;
        }
        if(qb > te || qe < tb)return 0;
        if(qb <= tb && qe >= te){
            return tree[node];
        }
        int mid = (tb + te) >> 1;
        int left = node * 2;
        int right = node * 2 + 1;
        int L = query(left, tb, mid, qb, qe);
        int R = query(right, mid + 1, te, qb, qe);
        return max(L, R);
    }
    //** Segment TREE PART ENDED**//
} st;
struct HLD{
    int n;
    void init(int _n){
        n = _n;
        for(int i = 0; i <= n; i++)g[i].clear();
        nxt.clear(); nxt.resize(n + 1,  -1);
        csz.clear(); csz.resize(n + 1, 0); cnt = 1; all = 0;
    }
    
    //** HLD PART STARTED**///
    void dfs(int source, int pr = 0){
        p[source] = pr;
        Size[source] = 1;
        for(auto to: g[source]){
            if(to == pr)continue;
            depth[to] = depth[source] + 1;
            dfs(to, source);
            Size[source] += Size[to];
            if(nxt[source] == -1 || Size[to] > Size[nxt[source]]){
              nxt[source] = to;
            }
        }
    }
    //**STILL HLD PART**///
    void hld(int v, int pr = -1){
        chain[v] = cnt - 1;
        base[v] = all++;
        if(!csz[cnt - 1]){
            top[cnt - 1] = v;
        }
        ++csz[cnt - 1];
        if(nxt[v] != -1){
            hld(nxt[v], v);
        }
        for(auto to: g[v]){
            if(to == pr || to == nxt[v])continue;
            ++cnt;
            hld(to, v);
         }
    }    
    //**STILL HLD PART**///
    void go(int a, int b, int value){
        ll res = 0;
        while(chain[a] != chain[b]){
            if(depth[top[chain[a]]] < depth[top[chain[b]]]) swap(a, b);
            int start = top[chain[a]];
            st.update(1, 0, n - 1, base[start], base[a], value);
            a = p[start];
        }
        if(depth[a] > depth[b]) swap(a, b);
        st.update(1, 0, n - 1, base[a], base[b], value);
    }
    int go1(int a, int b){
        ll res = 0;
        while(chain[a] != chain[b]){
            if(depth[top[chain[a]]] < depth[top[chain[b]]]) swap(a, b);
            int start = top[chain[a]];
            res = max(res, st.rmqquery(1, 0, n - 1, base[start], base[a]));
            a = p[start];
        }
        if(depth[a] > depth[b]) swap(a, b);
        res = max(res,st.rmqquery(1, 0, n - 1, base[a], base[b]));
        return res;
    }
    
    int queryans(int a){
        return st.query(1, 0, n - 1, base[a], base[a]);
        
    } 
    // ****//** HLD PART ENDED **//*****//
    
    void solve(){
        int a, b;
        for(int i = 1; i < n; i++){
            scanf("%d %d", &a, &b);
            a--; b--;
            g[a].pb(b);
            g[b].pb(a);
        }
        dfs(0);
        hld(0);
        p[0] = 0; int cntr = 1;
        scanf("%d", &m); int type;
        for(int i = 1; i <= m; i++){
            scanf("%d",&type);
            if(type == 1){
                scanf("%d", &a);
                a--;
                st.rmqupdate(1, 0, n - 1, base[a], i);
            }
            else if(type == 2){
                scanf("%d", &a);
                a--;
                go(0, a, i);
            }
            else {
                scanf("%d", &a); a--;
                int res = queryans(a);
                int res1 = go1(0, a);
                if(res < res1) printf("1\n");
                else printf("0\n");
            }
        }
    }
   
}hl;

int main(){
    scanf("%d", &n); int a, b;
    hl.init(n);
    st.init(n);
    hl.solve();
    
    return 0;
}
