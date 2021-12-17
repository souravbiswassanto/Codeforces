
// Problem: B. Working out
// Contest: Codeforces - Codeforces Round #245 (Div. 1)
// URL: https://codeforces.com/problemset/problem/429/B
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
ll upright[1002][1002], upleft[1002][1002], mat[1002][1002];
ll downright[1002][1002], downleft[1002][1002];

int main ()
{
    fastIO();
    ll a, b, c, d, n, m, l, p, q, r, t, x, y;
    ll cnt = 0, cntr = 0, sum = 0,ans = 1, check = 0;
    ll Max = 0, Min = 2e18;
    string s, s1, s2;

    t = 1;

    while(t--){
        cin >> n >> m;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cin >> mat[i][j];
            }
        }
        for(int i = 1; i <= n; i++){
            for(int j = 1, k = m; j <= m; j++){
                upleft[i][j] = max(upleft[i -1][j], upleft[i][j -1]) + mat[i][j];
                upright[i][k] = max(upright[i - 1][k], upright[i][k + 1]) + mat[i][k];
                k--;
            }
        }
        for(int i = n; i >= 1; i--){
            for(int j = 1, k = m; j <= m; j++){
                downleft[i][j] = max(downleft[i + 1][j], downleft[i][j - 1]) + mat[i][j];
                downright[i][k] = max(downright[i + 1][k], downright[i][k + 1]) + mat[i][k];
                k--;
            }
        }
        Max = 0;
        for(int i = 2; i < n; i++){
            for(int j = 2; j < m; j++){
                a = upright[i - 1][j] + upleft[i][j - 1];
                b = downleft[i + 1][j] + downright[i][j + 1] + a;
                c = upleft[i - 1][j] + upright[i][j + 1];
                d = downleft[i][j - 1] + downright[i + 1][j] + c;
                d = max(d, b);
                Max = max(d, Max);
            }
        }
        cout << Max << endl;

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
