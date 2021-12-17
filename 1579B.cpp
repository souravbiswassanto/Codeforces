
// Problem: B. Shifting Sort
// Contest: Codeforces - Codeforces Round #744 (Div. 3)
// URL: https://codeforces.com/contest/1579/problem/B
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
        vector<int> V(n);
        for(int i = 0; i < n; i++){
            cin >> A[i];
            V[i] = A[i];
        }
        sort(V.begin(), V.end());
        vector<pair<int, int> > VP;
        for(int i = 0; i < n; i++){
            if(A[i] == V[i])continue;
            for(int j = i + 1; j < n; j++){
                if(A[j] == V[i]){
                    a = j; break;
                }
            }
            for(int j = a; j > i; j--){
                swap(A[j - 1], A[j]);
            }
            VP.pb({i + 1, a + 1});
        }
        for(int i = 0; i < n; i++){
            //cout << A[i]<<" ";
        }
        //cout << endl;
        cout << VP.size()<<endl;
        for(int i = 0; i < VP.size(); i++){
            cout << VP[i].first<<" "<<VP[i].second<<" "<<VP[i].second - VP[i].first<<endl;
        }

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
