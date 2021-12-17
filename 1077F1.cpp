
// Problem: F2. Pictures with Kittens (hard version)
// Contest: Codeforces - Codeforces Round #521 (Div. 3)
// URL: https://codeforces.com/contest/1077/problem/F2
// Memory Limit: 512 MB
// Time Limit: 2500 ms
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

ll A[MAX];
ll B[MAX];
ll C[MAX];
vector< ll >V;
vector< ll >Ans;
vector< pair<ll,ll> >VP;
map< ll,ll >M;
vector<ll>prime;
bool mark[MAX1];
ll N=1e7;
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
ll dp[5006][5006];
int main ()
{
    ll a,b,c,d,n,m,k,l,p,r,t,x,y;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    ll Max= 0,Max1=-1e18+1,Min=LINF;
    string s,s1,s3,s4;

    //cin>>n;
    //cin >> n >> k >> x;
    scanf("%lld %lld %lld",&n, &k, &x);
    for (int i = 1; i <= n; i++){
        scanf("%lld", &A[i]);
    }
    for (int i = 0; i <= n+ 2; i ++){
        for (int j = 0; j <= x + 2; j++)dp[i][j] = -INT_MAX;
    }
    deque<ll> q[x + 5];
    q[0].push_front(0);
    dp[0][0] = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= x; j++){
            while(!q[j - 1].empty() and q[j - 1].front() + k < i){
                q[j - 1].pop_front();
            }
            if(q[j - 1].empty()){
                dp[i][j] = -INT_MAX;
            }
            else {
                dp[i][j] = max(dp[i][j],dp[q[j - 1].front()][j - 1] + A[i]);
            }
        }
        for(int j = 1; j <= x; j++){
            if(dp[i][j] > 0){
                 while(!q[j].empty() and dp[i][j] >= dp[q[j].back()][j]){
                    q[j].pop_back();
                 }
                 q[j].pb(i);
            }
        }
    }

    for (int i = n - k + 1; i <= n; i++){
        Max = max(dp[i][x],Max);
    }
    if(Max == 0){
        printf("-1\n"); return 0;
    }
    Max = max(-1LL, Max);
    printf("%lld\n",Max);

    return 0;
}
