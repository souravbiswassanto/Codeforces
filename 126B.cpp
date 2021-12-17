
// Problem: B. Password
// Contest: Codeforces - Codeforces Beta Round #93 (Div. 1 Only)
// URL: https://codeforces.com/problemset/problem/126/B
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

vector<ll> z_function(string s)
{
    int n = (int) s.length();
    vector < ll > Z(n);
    Z[0] = 0; // Z[0] = 0 ধরে নিলাম
    for (ll i = 1, L = 0, R = 0; i < n; ++i)
    {
        if (i <= R) // i সিগমেন্টের ভিতরে তা প্রথমেই চেক করে নিলাম
            Z[i] = min (R - i + 1, Z[i - L]); // সিগমেন্টে z[i] = z[i-L] থেকে কম বা সমান হতে পারে *শর্ত চেক
        else
            Z[i] = 0; // i সিগমেন্টের অংশ না হলে Z[i] এর মান শুন্য, মানে আমাদের Z[i] এর মান হিসাব করতে হবে।
        while (i + Z[i] < n && s[Z[i]] == s[i + Z[i]]) // সিগমেন্টের বাহিরেও যদি অতিরিক্ত ক্যারেক্টার মিলে যায় তাহলে Z[i] এর মান বাড়াবো
            ++Z[i]; // মান বাড়ালাম
        if (i + Z[i] - 1 > R) // নতুন সিগমেন্ট পেলে সিগমেন্ট রেঞ্জ আপডেট করবো ।
            L = i, R = i + Z[i] - 1;
    }
    return Z;
    //Z[0] =  n; প্রবলেমের উপর ভিত্তি করে Z[0]=n হতে পারে
}
int main ()
{
    fastIO();
    ll a, b, c, d, n, m, k, l, p, q, r, t, x, y;
    ll cnt = 0, cntr = 0, sum = 0,ans = 1, check = 0;
    ll Max = 0, Min = 2e18;
    string s, s1, s2;

    cin >> s;
    n = s.size(); vector<ll> V;
    vector<ll> Z = z_function(s); a  = -1; b = -1;
    
    for(int i = n - 1; i >= 0; i--){
        if(a <= Z[i]){
            b = max(b, min(a, Z[i]));
        }
        if(i + Z[i] == n){
            a = Z[i];
        }
    }
    if(b <= 0)cout <<"Just a legend"<<endl;
    else{
        for(int i = 0; i < b; i++)cout<<s[i];
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
