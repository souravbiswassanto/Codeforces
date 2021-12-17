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
#define   MAX    1000006
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
ll A[MAX], B[MAX], C[MAX];
int parent[MAX];
vector<int> g[MAX];
int vis[MAX];
int Counter = 0, Count;
void dfs(int source){
    vis[source] = 1;
    B[Count++] = A[source];
    for(auto v: g[source]){
        if(vis[v])continue;
        dfs(v);
    }
    if(A[source])++Counter;
   
}

int main ()
{
    fastIO();
    ll a, b, c, d, n, m, k, l, p, q, r, t, x, y;
    ll cnt = 0, cntr = 0, sum = 0,ans = 1, check = 0;
    ll Max = 0, Min = 2e18;
    string s, s1, s2;

    cin >> t;

    while(t--){
        cin >> n >> k; int ck = 0, cc = 0; Counter = 0; Count = 0;
        for(int i = 0; i < n; i++){
            cin >> A[i];
            if(A[i])ck = 1; vis[i] = 0;g[i].clear();
            if(!A[i])cc = 1;
        }
        if(ck == 0){
            cout << 0 << endl; continue;
        }
        check = 0;
        for(int i = 0; i < n; i++){
            if(A[i] != A[(i + n - k)% n])check = 1;
        }
        if(check == 0 or !cc){
            cout << -1 << endl; continue;
        }
        for(int i = 0; i < n;i++){
            g[i].pb((i + n - k) % n);
            
        }
        check = 0; sum = 0;
        for(int i = 0; i < n; i++){
            Counter = Count = 0;
            if(vis[i] == 0){
                dfs(i);
                if(Counter == Count)check = 1;
                else {
                    cntr = 0;
                    for(int j = 0; j < Count + Count; j++){
                        if(B[j % Count] == 1){
                            cntr++;
                        }
                        else cntr = 0;
                        sum = max(sum, cntr);
                    }
                }
            }
        }
       
        if(!check)cout << sum << endl;
        else cout << -1 << endl;

    }
    /* 
        precedence : ! * / % + - << >> 
        < > <= >= == != & ^ | && ||
        always check the limit and make sure that is correct.
        lcm of first 40 numbers  can be calculated.
        sqrt of 10^9 is 31622.
        always usee 1LL while doing binary operations.
    */

    return (0 - 0 + 1 -  1 * 1);
}
