
// Problem: C. Baby Ehab Partitions Again
// Contest: Codeforces - Codeforces Round #717 (Div. 2)
// URL: https://codeforces.com/contest/1516/problem/C
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
ll A[MAX];
ll B[MAX];
ll C[MAX];
ll n, sum;
bool vis[103][200003];
int dp[103][200003];
bool calc(int i, int j){
    if(i == n){
        if(j == sum)return 1;
        else return 0;
    }
    if(vis[i][j])return dp[i][j];
    vis[i][j] = 1;
    dp[i][j] = max((int)calc(i + 1, j + A[i]), (int)calc(i + 1, j));
    return dp[i][j];
}

int main ()
{
    fastIO();
    ll a, b, c, d,  m, k, l, p, q, r, t, x, y;
    ll cnt = 0, cntr = 0, ans = 1, check = 0;
    ll Max = 0, Min = 2e18;
    string s, s1, s2;

    t = 1;

    while(t--){
        cin >> n; sum = 0;
        set <int > S;
        vector<int> V[2002];
        for(int i = 0; i < n; i++){
            cin >> A[i];
            sum += A[i];
            V[A[i]].pb(i);
            S.insert(A[i]);
        }
        if(sum % 2)cout << 0 << endl;
        else{
            sum /= 2; ans = sum;
            //cout << sum << endl;
            auto it = prev(S.end());
            bool ck = calc(0, 0);
            loop:
            if(ck){
                mem(dp, 0);
                mem(vis, 0);
                a = *it;
                b = V[a][0];
                A[b] = 0; sum *= 2; sum = (sum - a)/2;
                //cout << ++cnt <<" "<<sum << endl;
                check = calc(0, 0);
                if(check and a % 2 == 0){ A[b] = a; it--; sum = ans ; goto loop;}
                else {
                    cout << 1 <<"\n"<<b + 1 << endl; return 0;
                }
            }
            else cout << 0 << endl;
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
