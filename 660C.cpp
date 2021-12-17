
// Problem: C. Hard Process
// Contest: Codeforces - Educational Codeforces Round 11
// URL: https://codeforces.com/problemset/problem/660/C
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
ll A[MAX], B[MAX], C[MAX];

int main ()
{
    fastIO();
    ll a, b, c, d, n, m, k, l, p, q, r, t, x, y;
    ll cnt = 0, cntr = 0, sum = 0,ans = 1, check = 0;
    ll Max = 0, Min = 2e18;
    string s, s1, s2;

    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    int cursum = 0, curk = 0;
    int segl = 0, segr = -1;
    l = 0, r = -1;
    int prevr= -1;
    while(l < n){
        //cout << l << " "<< r <<" "<<segl <<" "<<segr<<" "<<Max << endl;
        if(r < l){
            cursum = 0; curk = 0; r++;
        }
        
        if(curk > k){
            cursum--;
            if(A[l] == 0)curk--;
            l++;
        }
        else if(curk <= k and r < n){
            cursum++;
            
            if(A[r] == 0)curk++;
            r++;
        }
        else break;
        if(curk <= k){
            if(cursum > Max){
                Max = cursum;
                segl = l;
                segr = r - 1;
            }
        }
        
    }
    cout << segr - segl + 1 << endl;
    for(int i = segl; i <= segr; i++){
        A[i] = 1;
    }
    for(int i = 0; i < n; i++){
        cout << A[i] <<" ";
    }
    cout << endl;
    
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
