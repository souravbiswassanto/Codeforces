
// Problem: C. Pie Rules
// Contest: Codeforces - MemSQL Start[c]UP 3.0 - Round 1
// URL: https://codeforces.com/problemset/problem/859/C
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
ll A[MAX], B[MAX], C[MAX];
ll dp[60][2], n, sum;

ll calc(int idx, int flip){
    if(idx == n){
        return 0;
    }
    ll &ret = dp[idx][flip];
    if(ret != -1)return ret;
    ret = 0;
    ret = max(B[idx] - calc(idx + 1, flip ^ 1), calc(idx + 1, flip));
    return ret;
}

int main ()
{
    fastIO();
    ll a, b, c, d,  m, k, l, p, q, r, t, x, y;
    ll cnt = 0, cntr = 0, ans = 1, check = 0;
    ll Max = 0, Min = 2e18;
    string s, s1, s2;

    cin >> n; mem(dp, -1);
    for(int i = 0; i < n; i++){
        cin >> A[i];
        sum += A[i];
    }
    for(int i = n - 1; i >= 0; i--){
        B[i] = B[i + 1] + A[i];
    }
    ans = calc(0, 0);
    cout << sum - ans <<" "<< ans << endl;
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
