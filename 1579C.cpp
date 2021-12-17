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


int main ()
{
    fastIO();
    ll a, b, c, d, n, m, k, l, p, q, r, t, x, y;
    ll cnt = 0, cntr = 0, sum = 0,ans = 1, check = 0;
    ll Max = 0, Min = 2e18;
    string s, s1, s2;

    cin >> t;

    while(t--){
        cin >> n >> m >> k;
        int A[n + 3][m + 4], B[n + 3][m + 4];
        mem(A, 0); mem(B, 0); ans = 0;
        for(int i = 1; i <= n; i++){
            cin >> s;
            for(int j = 0; j < s.size(); j++){
                if(s[j] == '*'){
                    A[i][j + 1] = 1;
                    ans++;
                }
                else A[i][j + 1] = 0;
            }
        }
        sum = 0;
        //cout << ans << endl;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(A[i][j] == 0)continue;
                cntr = 0; cnt = 0; 
                a = i; b = j;
                for(int k = 1; k <= min(i, j); k++){
                    if(A[a][b]){
                        cntr++;
                    }
                    else break;
                    a--; b--;
                }
                a = i; b = j;
                for(int k = 1; k <= min(i,(int) m - j + 1); k++){
                    if(A[a][b]){
                        cnt++;
                    }
                    else break;
                    a--; b++;
                }
                c = min(cntr, cnt);
                if(c <= k)continue;
                a = i; b = j;
                for(int k = 1; k <= c; k++){
                    if(B[a][b] == 0){
                        sum++;B[a][b] = 1;
                    }
                    a--; b--;
                }
                a = i; b = j;
                for(int k = 1; k <= c; k++){
                    if(B[a][b] == 0){
                        sum++; B[a][b] = 1;
                    }
                    a--; b++;
                }
                
            }
        }
        //cout << sum <<" "<<ans << endl;
        if(sum == ans)yes;
        else no;

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
