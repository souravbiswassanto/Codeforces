
// Problem: A. Orac and LCM
// Contest: Codeforces - Codeforces Round #641 (Div. 1)
// URL: https://codeforces.com/problemset/problem/1349/A
// Memory Limit: 256 MB
// Time Limit: 3000 ms
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
vector<ll>prime;
bool mark[MAX1];
ll N = 2e5;
void seive (){int limit = sqrt(N*1.0)+2;mark[1]=1;for (int i=4;i<=N;i+=2)mark[i]=1;prime.push_back(2);for (int i=3;i<=N;i+=2){if(!mark[i]){prime.push_back(i);if(i<=limit){for (int j=i*i;j<=N;j+=i*2)mark[j]=1;}}}}

template<class T> using oset=tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
// order_of_key returns the 0 based position of a value
// find_by_order returns a pointer pointing at the kth element 
// also 0 indexed
ll A[MAX], B[MAX], C[MAX];
vector<int> V[MAX];
int main ()
{
    fastIO();
    ll a, b, c, d, n, m, k, l, p, q, r, t, x, y;
    ll cnt = 0, cntr = 0, sum = 0,ans = 1, check = 0;
    ll Max = 0, Min = 2e18;
    string s, s1, s2;
    seive();
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    for(int i = 0; i < n; i++){
        a = A[i];
        for(int j = 0; prime[j] * prime[j] <= a; j++){
            if(a % prime[j])continue;
            cntr = 0;
            while(a % prime[j] == 0){
                a /= prime[j]; cntr++;
            }
            V[prime[j]].pb(cntr);
        }
        if(a != 1){
            V[a].pb(1);
        }
    }
    for(int i = 0; i < prime.size(); i++){
        sort(V[i].begin(), V[i].end());
    }
    for(int i = 0; i < prime.size(); i++){
        if(V[prime[i]].size() == n - 1){
            a = V[prime[i]][0];
            for(int k = 0; k < a; k++){
                ans *= prime[i];
            }
        }
        else if(V[prime[i]].size() == n){
            a = max(V[prime[i]][0], V[prime[i]][1]);
            for(int k = 0; k < a; k++){
                ans *= prime[i];
            }
        }
    }
    cout << ans << endl;
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
