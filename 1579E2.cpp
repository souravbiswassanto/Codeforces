
// Problem: E2. Array Optimization by Deque
// Contest: Codeforces - Codeforces Round #744 (Div. 3)
// URL: https://codeforces.com/contest/1579/problem/E2
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


struct FT{
    int n; vector<int> BIT;
    FT(int _n){
        n = _n;
        BIT.resize(n + 5, 0);
    }
    void update(int x, ll delta){
          for(; x <= n; x += x&-x) BIT[x] += delta;
    }
    ll query(int x, ll sum = 0LL){
         for(; x > 0; x -= x&-x) sum += BIT[x];
         return sum;
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
        vector<int> vec;
        for(int i = 1; i <= n; i++){
            cin >> A[i];
            vec.pb(A[i]);
        }
        sort(vec.begin(),vec.end());
        vec.resize(unique(vec.begin(), vec.end())- vec.begin());
        for(int i = 1; i <= n; i++){
            A[i] = lower_bound(vec.begin(), vec.end(), A[i]) - vec.begin() + 1;
            
        }
        FT Bit(n + 3); sum = 0;
        for(int i = 1; i <= n ; i++){
            a = Bit.query(A[i] - 1);
            b = Bit.query(n + 2) - Bit.query(A[i]);
            if(a <= b){
                sum += a;
            }
            else{
                sum += b;
            }
            Bit.update(A[i], 1);
        }
        cout << sum << endl;
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
