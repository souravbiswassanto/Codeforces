
// Problem: D1. Up the Strip (simplified version)
// Contest: Codeforces - Codeforces Round #740 (Div. 2, based on VK Cup 2021 - Final (Engine))
// URL: https://codeforces.com/contest/1561/problem/D1
// Memory Limit: 128 MB
// Time Limit: 6000 ms
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
int A[MAX];
ll B[MAX];
ll C[MAX];

int main ()
{
    fastIO();
    ll a, b, c, d, n, m, k, l, p, q, r, t, x, y;
    int cnt = 0, cntr = 0, sum = 0,ans = 1, check = 0;
    ll Max = 0, Min = 2e18;
    string s, s1, s2;

    t = 1;

    while(t--){
        cin >> n >> m;
        for(int i = 1; i <= n; i++)A[i] = 0;
        A[1] = 1;
        int res = 1;
        for(int i = 2; i <= n; i++){
            sum = 0; a = i;
    
            for(int j = 1; j * j <= i; j++){
                b = i / (j + 1); c = i / j;
                if(b >= c)break;
                sum = (1LL * (c - b) * A[j] + sum) % m;
                a = b;
            }
            for(int j = 2; j <= a; j++){
                sum =  (1LL* A[i / j] + sum) % m;
            }
            A[i] = (1LL * res + sum) % m;
            res = (1LL * res + A[i]) % m;
        }
        cout << A[n] << '\n';
    }
    /* 
        always check the limit and make sure that is correct.
        lcm of first 40 numbers  can be calculated.
        sqrt of 10^9 is 31622.
        always usee 1LL while doing binary operations.
    */

    return (0 - 0 + 1 -  1 * 1);
}
