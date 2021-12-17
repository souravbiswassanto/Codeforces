
// Problem: D. Integers Have Friends
// Contest: Codeforces - Codeforces Round #736 (Div. 2)
// URL: https://codeforces.com/contest/1549/problem/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
#pragma GCC diagnostic ignored "-Wsign-compare"
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std ;

#define   Pi     2*acos(0.0)
#define   ll     long long
#define   pb     push_back
#define   mp     make_pair
#define   MAX    500006
#define   MAX1   10000008
#define   mem(a,v)   memset(a,v,sizeof(a))
#define   lcm(a, b)        ((a)*((b)/__gcd(a,b)))
#define yes   cout<<"YES"<<endl
#define no   cout<<"NO"<<endl
void fastIO (){ios_base::sync_with_stdio(false);cin.tie(0); cout.precision(20);}

template<class T> using oset=tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
// order_of_key returns the 0 based position of a value
// find_by_order returns a pointer pointing at the kth element 
// also 0 indexed
ll A[MAX];
ll B[MAX];
ll C[MAX];

struct SegmentTree{
	vector<ll> tree;
	int n;
	SegmentTree(int _n){
	    n = _n;
	    tree.clear();
	    tree.resize(n * 4);
	}
	void build(int node, int tb, int te){
	    if(tb > te) return;
		if(tb == te){
			tree[node]  = B[tb];//value goes here
			return;
		}
		int mid=(tb + te) >> 1; 
		int left = (node * 2);
		int right = node * 2 + 1;
		build(left, tb, mid);
		build(right, mid + 1, te);
		tree[node] = __gcd(tree[left], tree[right]);
	}
	
	// Range query
	ll query(int node, int tb, int te, int qb, int qe){
        if(tb > te) return 0;
        if(qb > te || qe < tb)return 0;
        if(qb <= tb && te <= qe){
            return tree[node];
        }
        int left, right, mid;
        left = (node << 1);
        right = left + 1;
        mid = (tb + te) >> 1;
        ll L = query(left, tb, mid, qb, qe);
        ll R = query(right, mid + 1, te, qb, qe);
        return __gcd(L,R);
    }

}; 

int main ()
{
    fastIO();
    ll a, b, c, d, n, m, k, l, p, q, r, t, x, y;
    ll cnt = 0, cntr = 0, sum = 0,ans = 1, check = 0;
    ll Max = 0, Min = 2e18;
    string s, s1, s2;

    cin >> t;

    while(t--){
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> A[i];
        }
        for(int i = 1; i <= n; i++){
            B[i - 1] = abs(A[i] - A[i - 1]);
        }
        if(n == 1){
            cout << 1 << endl;continue;
        }
        if(n == 2){
            if(B[0] == 1){
                cout << 1 << endl; 
            }    
            else {
                cout << 2 << endl;
            }
            continue;
        }
        n--;
        SegmentTree st(n);
        st.build(1, 0, n - 1);
        for(int i = 0; i < n; i++){
            l = i; r = n - 1;
            while(l <= r){
                int mid = (l + r) / 2;
                a = st.query(1, 0, n - 1, i, mid);
                if(a != 1){
                    l = mid + 1;
                }
                else if(Max > (mid - i + 1))break;
                else {
                    r = mid - 1;
                }
            }
            if(l == i and a == 1){
                Max = max(Max, 1LL);
            }
            else{
                Max = max(Max, l - i + 1);
            }
        }
        cout << Max << endl;
        Max = 0;
    }
    /* 
        always check the limit and make sure that is correct.
        lcm of first 40 numbers  can be calculated.
        sqrt of 10^9 is 31622.
        always usee 1LL while doing binary operations.
    */

    return (0 - 0 + 1 -  1 * 1);
}
