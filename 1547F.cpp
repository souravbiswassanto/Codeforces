
// Problem: F. Array Stabilization (GCD version)
// Contest: Codeforces - Codeforces Round #731 (Div. 3)
// URL: https://codeforces.com/contest/1547/problem/F
// Memory Limit: 512 MB
// Time Limit: 4000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

// Problem: F. Array Stabilization (GCD version)
// Contest: Codeforces - Codeforces Round #731 (Div. 3)
// URL: https://codeforces.com/contest/1547/problem/F
// Memory Limit: 512 MB
// Time Limit: 4000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
//#pragma GCC diagnostic ignored "-Wformat"

using namespace std ;

#define   Pi     2*acos(0.0)
#define   LINF   1LL<<62
#define   ll     long long
#define   ull    unsigned long long
#define   pb     push_back
#define   mp     make_pair
#define   MAX    500006
#define   MAX1   10000008
#define   mem(a,v)   memset(a,v,sizeof(a))
#define   all(x) x.begin(),x.end()
#define   lcm(a, b)        ((a)*((b)/__gcd(a,b)))
#define yes   cout<<"YES"<<endl
#define no   cout<<"NO"<<endl
#define buga  cout<<1<<endl
#define bugb  cout<<2<<endl
#define bugc  cout<<3<<endl
#define bugd  cout<<4<<endl
#define buge  cout<<5<<endl

void fastIO (){ios_base::sync_with_stdio(false);cin.tie(0); cout.precision(20);}

ll A[MAX];
ll B[MAX];
ll C[MAX];

vector< ll >Ans;
vector< pair<ll,ll> >VP;
vector<ll>prime;
bool mark[MAX1];
ll N=2e3;
void seive (){int limit = sqrt(N*1.0)+2;mark[1]=1;for (int i=4;i<=N;i+=2)mark[i]=1;prime.push_back(2);for (int i=3;i<=N;i+=2){if(!mark[i]){prime.push_back(i);if(i<=limit){for (int j=i*i;j<=N;j+=i*2)mark[j]=1;}}}}
/*
ll sti(string a,int base=10)
{
	ll k=0;
	for (int i=0;i<(int)a.size();++i)
	{
		k*=base;
		k+=a[i]-'0';
	}
	return k;
}
 
/*
/*
ll bin_pow(ll o, ll s) {
    if (s == 0) return 1;
    if (s == 1) return o % mod;
    ll d = bin_pow(o, s/2);
    d = (d * 1ll * d) % mod;
    if (s % 2 == 1)
        d = (d * 1ll * o) % mod;
    return d;
}
*/

int main ()
{
    seive();
    int tc;
    scanf("%d", &tc);
    while(tc--){
        int n;
        scanf("%d", &n);
        int gcd = 0, sum = 0;
        int A[n + n + n];
        for(int i = 1; i <= n; i++){
            scanf("%d", &A[i]);
            gcd = __gcd(gcd, A[i]);
        }
        for(int i = 1; i <= n; i++){
            A[i] = A[i] / gcd; A[i + n] = A[i]; sum += A[i];
        }
        int a; map <int, vector<int>> M;
        int ans = 0; map<int, int> adj;
        if(sum == n){
            cout << 0 << endl; continue;
        }
        for(int i = 1; i <= 2 * n; i++){
            a = A[i];
            for(int j = 0; prime[j] * prime[j] <= a; j++){
                if(a % prime[j])continue;
                while(a % prime[j] == 0)a /= prime[j];
                if(binary_search(M[prime[j]].begin(), M[prime[j]].end(), i -1)){
                    adj[prime[j]]++;
                }
                else adj[prime[j]] = 0;
                M[prime[j]].pb(i);
                ans = max(adj[prime[j]], ans);
            }
            if(a != 1){
               if(binary_search(M[a].begin(), M[a].end(), i -1)){
                    adj[a]++;
                }
                else adj[a] = 0;
                M[a].pb(i);
                ans = max(adj[a], ans);
            }
        }
        cout << ans + 1 << endl;
        M.clear();
        adj.clear();
    }
    /* 
        always check the limit and make sure that is correct.
        lcm of first 40 numbers  can be calculated.
        sqrt of 10^9 is 31622.
        always usee 1LL while doing binary operations.
    */

    return (0 - 0 + 1 -  1 * 1);
}