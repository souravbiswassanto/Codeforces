
// Problem: C. Link Cut Centroids
// Contest: Codeforces - Codeforces Round #670 (Div. 2)
// URL: https://codeforces.com/contest/1406/problem/C
// Memory Limit: 512 MB
// Time Limit: 1000 ms
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
vector<int>g[MAX];
int cnt[MAX], Maxx, idx, n;
int parent, child;
void dfs(int source, int par){
	cnt[source] = 1;
	for(auto v: g[source]){
		if(v == par)continue;
		dfs(v,source);
		cnt[source] += cnt[v];
	}
	if(cnt[source] == n / 2){
		child = source;
		parent = par;
	}
}
void dfs2(int source, int par){
	cnt[source] = 1;
	for(auto v:g[source]){
		if(v == par)continue;
		dfs2(v,source);
		cnt[source] += cnt[v];
		
	}
	if(Maxx<cnt[source]&&source!=child&&source!=parent){
		idx = source;
		Maxx = cnt[source];
	}
}

int main ()
{
    fastIO();
    ll a,b,c,d,m,k,l,p,q,r,t,x,y;
    ll cntr=0,sum=0,ans=1,check=0;
    ll Max= 0,Max1=-1e18+1,Min=LINF;
    string s,s1,s3,s4;

    //cin>>n;
    cin>>t;

    while(t--){
        cin>>n;
        for(int i=0;i<=n; i++){
        	g[i].clear(); cnt[i] = 0;
        }
        for(int i=1; i < n; ++i){
        	cin>>a>>b;
        	g[a].pb(b);
        	g[b].pb(a);
        }
        child = -1; parent = -1;
        dfs(1,-1);
        if(n%2||(parent == -1 and child == -1)){
        	cout<<a<<" "<<b<<endl;
        	cout<<a<<" "<<b<<endl;
        	continue;
        }
        for(int i= 1; i <= n; ++i)cnt[i] = 0;
        Maxx = 0;
        idx = 0;
        dfs2(child,parent);
        a = Maxx; b = idx; Maxx = 0; idx = 0;
        for(int i= 1; i <= n; ++i)cnt[i] = 0;
        dfs2(parent,child);
        c = Maxx; d = idx;
        if(a>c){
        	cout<<b<<" "<<child<<endl;
        	cout<<b<<" "<<parent<<endl;
        }
        else {
        	cout<<d<<" "<<parent<<endl;
        	cout<<d<<" "<<child<<endl;
        }
        

    }

    return 0;
}
