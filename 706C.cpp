
// Problem: C. Hard problem
// Contest: Codeforces - Codeforces Round #367 (Div. 2)
// URL: https://codeforces.com/problemset/problem/706/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
ll A[MAX], B[MAX][2], C[MAX][2], D[MAX];
ll dp[MAX][2], n;
ll calc(int idx, int flip){
    if(idx > n)return 0;
    ll &ret = dp[idx][flip];
    if(ret != -1)return ret;
    ret = 10000000000000000LL;
    if(B[idx][flip]){
        //cout << idx<<" "<<flip<<endl;
        ret = calc(idx + 1, 0);
    }
    if(C[idx][flip]){
        ret = min(ret, calc(idx + 1, 1) +  A[idx]);
    }
    return ret; 
}
int main ()
{
    fastIO();
    ll a, b, c, d, m, k, l, p, q, r, t, x, y;
    ll cnt = 0, cntr = 0, sum = 0,ans = 1, check = 0;
    ll Max = 0, Min = 2e18;
    string s, s1, s2;

    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> A[i];
    }
    mem(dp, -1); B[1][0] = B[1][1] = C[1][0] = C[1][1] = 1;
    cin >> s; string rev_s = s; reverse(rev_s.begin(), rev_s.end());
    for(int i = 2; i <= n; i++){
        cin >> s1;
        B[i][0] = s <= s1;
        B[i][1] = rev_s <= s1;
        reverse(s1.begin(), s1.end());
        C[i][0] = s <= s1;
        C[i][1] = rev_s <= s1;
        rev_s = s1;
        reverse(s1.begin(), s1.end());
        s = s1;
        //cout << B[i][0]<<" "<<B[i][1]<<" "<<C[i][0]<<" "<< C[i][1]<<endl;
    }
    ans = calc(1, 0);
    if(ans < 1e15)cout << ans << endl;
    else cout << -1 << endl;
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
