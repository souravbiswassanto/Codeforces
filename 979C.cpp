
// Problem: C. Kuro and Walking Route
// Contest: Codeforces - Codeforces Round #482 (Div. 2)
// URL: https://codeforces.com/problemset/problem/979/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
//#pragma GCC diagnostic ignored "-Wformat"

using namespace std ;

#define   Pi     2*acos(0.0)
#define   LINF   1LL<<63
#define   ll     long long
#define   ull    unsigned long long
#define   pb     push_back
#define   mp     make_pair
#define   MAX    500006
#define   MAX1   10000008
#define   mem(a,v)   memset(a,v,sizeof(a))
#define   all(x) x.begin(),x.end()
#define   lcm(a, b)        ((a)*((b)/gcd(a,b)))
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
vector< ll >V;
vector< ll >Ans;
vector< pair<ll,ll> >VP;
map< ll,ll >M;
vector<ll>prime;
bool mark[MAX1];
ll N=1e7;
void seive (){int limit = sqrt(N*1.0)+2;mark[1]=1;for (int i=4;i<=N;i+=2)mark[i]=1;prime.push_back(2);for (int i=3;i<=N;i+=2){if(!mark[i]){prime.push_back(i);if(i<=limit){for (int j=i*i;j<=N;j+=i*2)mark[j]=1;}}}}

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
bool vis[MAX],vis1[MAX];
vector<int>g[MAX];
int cnt[MAX],res,x,y,res1;

void dfs(int source, int x){
	vis[source] = 1;
	for(auto v: g[source]){
		if(vis[v])continue;
		if(v == x){
			continue;
		}
		dfs(v,x);
	}
}
void dfs2(int source){
	vis[source] = 1;
	cnt[source] = 1;
	for(auto v: g[source]){
		if(vis[v])continue;
		dfs2(v);
		cnt[source] += cnt[v];
	}
}

int main ()
{
    fastIO();
    ll a,b,c,d,n,m,k,l,p,q,r,t;
    ll cntr=0,sum=0,ans=1,check=0;
    ll Max= 0,Max1=-1e18+1,Min=LINF;
    string s,s1,s3,s4;

    //cin>>n;
    cin >> n >> x >> y;
    
    for( int i = 1; i < n; i++){
    	cin >> a >> b;
    	g[a].pb(b);
    	g[b].pb(a);
    }
    
	dfs(y,x); dfs2(x);
	a = cnt[x];
	mem(vis,0);mem(cnt,0);
	dfs(x,y); dfs2(y);
	b = cnt[y];
	ll gap = n-(a+b);
	ans = (n - a) * (n-1); 
	ans += (a * (n - b - 1));
	cout<<ans<<endl;
    return 0;
}
