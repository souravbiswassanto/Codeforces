
// Problem: D. The Strongest Build
// Contest: Codeforces - Educational Codeforces Round 114 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1574/problem/D
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

template<class T> using oset=tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
// order_of_key returns the 0 based position of a value
// find_by_order returns a pointer pointing at the kth element 
// also 0 indexed
ll A[MAX];
ll B[MAX];
ll C[MAX];
/// replica of tourists code
/// learning through his code
int main ()
{
    fastIO();
    ll a, b, c, d, n, m, k, l, p, q, r, t, x, y;
    ll cnt = 0, cntr = 0, sum = 0,ans = 1, check = 0;
    ll Max = 0, Min = 2e18;
    string s, s1, s2;

    cin >> n;
    vector<vector<int>> vec(n);
    vector<int> Sizen(n);
    
    for(int i = 0; i < n; i++){
        cin >> Sizen[i];
        vec[i].resize(Sizen[i]);
        for(int j = 0; j < Sizen[i]; j++){
            cin >> vec[i][j];
        }
    }
    cin >> m;
    vector<vector<int>> V(m, vector<int> (n));
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> V[i][j];
            V[i][j]--;
        }
    }
    sort(V.begin(), V.end());
    
    set<pair<int, vector<int>>> S;
    {
        vector<int> pt(n);
        for(int i = 0; i < n; i++){
            sum += vec[i][Sizen[i] - 1];
            pt[i] = Sizen[i] - 1;
        }
        S.insert({sum, pt});
    }   
    while(true){
        assert(!S.empty());
        auto it = prev(S.end());
        sum = it->first;
        vector<int> pt = it->second;
        S.erase(it);
        auto iter = lower_bound(V.begin(), V.end(), pt);
        if(iter == V.end() or pt != *iter){
            for(int i = 0; i < n; i++){
                cout << pt[i] + 1<<" ";
            }
            cout << endl;
            return 0;
        }
        for(int i = n - 1; i >= 0; i--){
            a = pt[i];
            if(a){
                ans = sum - (vec[i][pt[i]] - vec[i][pt[i] - 1]);
                pt[i]--;
                S.insert({ans, pt});
                pt[i]++;
            }
            if(pt[i] < Sizen[i] - 1)break;
        }
    }
    
    
    /* 
        always check the limit and make sure that is correct.
        lcm of first 40 numbers  can be calculated.
        sqrt of 10^9 is 31622.
        always usee 1LL while doing binary operations.
    */

    return (0 - 0 + 1 -  1 * 1);
}
