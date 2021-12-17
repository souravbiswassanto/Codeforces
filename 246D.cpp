
// Problem: D. Colorful Graph
// Contest: Codeforces - Codeforces Round #151 (Div. 2)
// URL: https://codeforces.com/problemset/problem/246/D
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
ll N=1e7,n;
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
set<int>S[MAX];
bool visited[MAX];
vector<int>g[MAX];

void bfs(int source){
	queue<int>q;
	q.push(source);
	visited[source] = 1;
	
	while(!q.empty()){
		int u = q.front();
		q.pop();
		for(auto v:g[u]){
			if(A[u] != A[v])S[A[u]].insert(A[v]);
			if(visited[v] == 0){
				visited[v] =  1;
				q.push(v);
			}
		}
	}
	
}

int main ()
{
    fastIO();
    ll a,b,c,d,m,k,l,p,q,r,t,x,y;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    ll Max= 0,Max1=-1e18+1,Min=LINF;
    string s,s1,s3,s4;

    cin >> n >> m;
    for(int i= 1; i <= n; i++){
    	cin >> A[i];
    }
    for(int i = 1; i <= m; ++i){
    	cin >> a >> b;
    	g[a].pb(b);
    	g[b].pb(a);
    }
    for(int i = 1; i <= n; i++){
    	if(!visited[i])bfs(i);
    }
    sort(A+1,A+n+1);
    for(int i = 1; i <= n; i++){
    	Max = max(Max,(ll)S[A[i]].size());
    	//cout<<S[i].size()<<endl;
    }
    ans = INT_MAX;
    for(int i = 1; i <= n; i++){
    	if(S[A[i]].size()==Max){
    		ans = A[i];break;
    	}
    }
    cout<<ans<<endl;

    return 0;
}
