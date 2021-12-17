
// Problem: B. TMT Document
// Contest: Codeforces - Codeforces Round #715 (Div. 2)
// URL: https://codeforces.com/contest/1509/problem/B
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
ll A[MAX], B[MAX], C[MAX], D[MAX];

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
        for(int i = 0; i <= n + 1; i++){
            B[i] = A[i] = C[i] = D[i] = 0;
        }
        cin >> s; cntr = cnt = 0;
        for(int i = 1; i <= n; i++){
            if(s[i - 1] == 'T')cntr++;
            else cnt++;
            A[i] = A[i - 1] + (s[i - 1] == 'T');
            B[i] = B[i - 1] + (s[i - 1] == 'M');
        }
        check = 1; int ck = 1;
        for(int i = 1; i <= n; i++){
            if(B[i] > A[i])check = 0;
        }
        if(check == 0 or (cntr  != cnt * 2)){
            no;continue;
        }
        for(int i = n;  i >= 1; i--){
            C[i] = C[i + 1] + (s[i - 1] == 'T');
            D[i] = D[i + 1] + (s[i - 1] == 'M');
        }
        for(int i = n; i>= 1; i--){
            if(D[i] > C[i])ck = 0;
        }
        if(!ck){
            no; continue;
        }
        yes;
        

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
