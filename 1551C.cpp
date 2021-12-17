
// Problem: C. Interesting Story
// Contest: Codeforces - Codeforces Round #734 (Div. 3)
// URL: https://codeforces.com/contest/1551/problem/C
// Memory Limit: 256 MB
// Time Limit: 4000 ms
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
struct srt{
    ll a, b;
    srt(ll c, ll d){
        a = c;
        b = d;
    }
    bool operator<(srt other)const{
        ll Lcm = lcm(b, other.b);
        ll c = a * (Lcm / b);
        ll d = other.a * (Lcm/ other.b);
        //cout << a <<" "<<other.a <<" "<< b <<" "<<other.b<< endl;
        //cout << c <<" "<<d<<endl;
        if(c == d)return b < other.b;
        return c > d;
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
        vector<srt> vec[8];
        vector<int> V[8];
        string S[n + 4];
        for(int i = 0; i < n; i++){
            cin >> S[i];
        }
        for(int i= 0; i < n; i++){
            for(int j = 0; j < 5; j++)A[j] = 0;
            for(int j = 0; j < S[i].size(); j++){
                A[S[i][j]- 97]++;
            }
            for(int j = 0; j < 5; j++){
                vec[j].pb(srt(A[j],(ll) S[i].size()));
            }
        }
        for(int i = 0; i < 5; i++){
            sort(vec[i].begin(), vec[i].end());
            for(int j = 0; j < n; j++){
                a = vec[i][j].b - vec[i][j].a;
                if(a > vec[i][j].a)V[i].pb(a - vec[i][j].a);
                //cout << vec[i][j].a <<" "<<vec[i][j].b<<endl;
            }
            sort(V[i].begin(), V[i].end());
            //cout << endl;
        }
        Max = 0;
        for(int i = 0; i < 5; i++){
            sum = cnt = cntr = 0;
            for(int j = 0; j < n; j++){
                b = vec[i][j].b - vec[i][j].a;
                if(b > vec[i][j].a)break;
                cntr += vec[i][j].a;
                sum += (vec[i][j].b - vec[i][j].a);
                if(cntr > sum)cnt++;
                else {
                    cntr -= vec[i][j].a;
                    sum -= (vec[i][j].b - vec[i][j].a);
                }
                //cout << cntr <<" sum "<< sum<<endl;
            }
            a = cntr - sum;
            for(int j = 0; j < V[i].size(); j++){
                a = a - V[i][j];
                if(a > 0)cnt++;
            }
            Max = max(Max, cnt);
        }
        cout << Max << endl;

    }
    /* 
        always check the limit and make sure that is correct.
        lcm of first 40 numbers  can be calculated.
        sqrt of 10^9 is 31622.
        always usee 1LL while doing binary operations.
    */

    return (0 - 0 + 1 -  1 * 1);
}
