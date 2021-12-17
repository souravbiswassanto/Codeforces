
// Problem: C. Divisibility by Eight
// Contest: Codeforces - Codeforces Round #306 (Div. 2)
// URL: https://codeforces.com/problemset/problem/550/C
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
int dp[200][8];
map<pair<int, int>, pair<int, pair<int, int>>> solution;
string s;

int calc(int idx, int rem, int taken){
    //cout << idx <<" "<<rem << endl;
    if(idx == s.size()){
        if(rem == 0 and taken)return 1;
        else return 0;
    }
    int &ret = dp[idx][rem];
    if(ret != -1)return ret;
    ret = 0;
    int a, b;
    a = calc(idx + 1, ((rem * 10 )+ (s[idx] - 48)) % 8, taken + 1);
    b = calc(idx + 1, rem, taken);
    ret = max(a, b);
    if(a == 1){
        solution[{idx, rem}] = {idx + 1, {((rem * 10 )+ (s[idx] - 48)) % 8, 1}};
    }
    else if(b == 1){
        solution[{idx, rem}] = {idx + 1, {rem, 0}};
    }
    return ret;
}

void printsol(int idx, int rem){
    while(solution.find({idx, rem}) != solution.end()){
        auto a = solution[{idx, rem}].first;
        auto b = solution[{idx, rem}].second.second;
        auto c = solution[{idx, rem}].second.first;
        if(b)cout << s[idx];
        idx = a; rem = c;
    }
}

int main ()
{
    fastIO();
    ll a, b, c, d, n, m, k, l, p, q, r, t, x, y;
    ll cnt = 0, cntr = 0, sum = 0,ans = 1, check = 0;
    ll Max = 0, Min = 2e18;
    string s1, s2;

    cin >> s;
    mem(dp, -1);
    ans = calc(0, 0, 0);
    if(ans){
        cout <<"YES"<<endl;
        printsol(0, 0);
    }
    else no;
    
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
