
// Problem: D. Divisible by Twenty-Five
// Contest: Codeforces - COMPFEST 13 - Finals Online Mirror (Unrated, ICPC Rules, Teams Preferred)
// URL: https://codeforces.com/contest/1575/problem/D
// Memory Limit: 512 MB
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
int n, dp[100][100][100];
string s;
int R(int rem, int d){
    int a = rem * 10 + d; a %= 25; return a;
}
int calc(int id, int rem, int flag){
    if(id == n){
        //cout << rem << endl;
        if(rem == 0)return 1;
        else return 0;
    }
    int &ret = dp[id][rem][flag + 2];
    if(ret != -1)return ret;
    ret = 0;
    if(s[id] =='X'){
        if(flag != -1){
            ret = calc(id + 1, R(rem, flag), flag);
        }
        else{
            for(int i = 0; i < 10; i++){
                if(id == 0 and i == 0 and n != 1)continue;
                ret += calc(id + 1, R(rem, i), i);
            }
        }
    }
    else if(s[id] == '_'){
        for(int i = 0; i < 10; i++){
            if(id == 0 and i == 0 and n != 1)continue;
            ret += calc(id + 1, R(rem, i) , flag);
            //cout << ret <<" "<<flag<< endl;
        }
    }
    else{
        //cout <<"asche"<<endl;
        if(id == 0 and s[id] =='0' and n != 1)return 0;
        ret += calc(id + 1, R(rem, s[id] - 48), flag);
    }
    return ret;
}



int main ()
{
    fastIO();
    ll a, b, c, d,  m, k, l, p, q, r, t, x, y;
    ll cnt = 0, cntr = 0, sum = 0,ans = 1, check = 0;
    ll Max = 0, Min = 2e18;
    string  s1, s2;

    cin >> s;
    mem(dp, -1); n = s.size();
    
    ans = calc(0, 0, -1);
    cout << ans << endl;
    
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
