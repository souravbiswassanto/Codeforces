
// Problem: G. Moving to the Capital
// Contest: Codeforces - Codeforces Round #693 (Div. 3)
// URL: https://codeforces.com/contest/1472/problem/G
// Memory Limit: 256 MB
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
vector< ll >V;

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
ll dist[MAX];
vector <int> G[MAX];
void bfs(int source){
    
    queue<int> q1; q1.push(1);
    while (!q1.empty()) {
        int cur = q1.front(); q1.pop();
        for(auto a: G[cur]) {
            if (dist[cur] + 1 < dist[a]) {
                dist[a] = dist[cur] + 1; q1.push(a);
            }
        }
    }
}

int main ()
{
    fastIO();
    ll a,b,c,d,n,m,k,l,p,q,r,t,x,y;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    ll Max= 0,Max1=-1e18+1,Min=LINF;
    string s,s1,s3,s4;

    //cin>>n;
    cin>>t;

    while(t--){
        cin>>n >> m;
        for (int i = 1; i <= n; i++){
            G[i].clear();
            dist[i] = INT_MAX;
        }
        for (int i = 0; i < m; i++){
            cin >> a >> b;
            G[a].pb(b);
        }
        dist[1] = 0;
        bfs(1);
        vector< pair<int, int> > VP;
        vector <ll> Ans(n+2, INT_MAX);
        for (int i = 1; i <= n; i++){
            VP.pb({dist[i], i});
        }
        sort(VP.rbegin(), VP.rend());
        for(int i = 0; i < VP.size(); i++){
            a = VP[i].second;
            Min = dist[a];
            for (auto it: G[a]){
                if (dist[it] > dist[a]){
                    Min = min (Min, Ans[it]);
                }
                else {
                    Min = min(dist[it], Min);
                }
            }
            Ans[a] = Min;
        }
        for (int i = 1; i <= n; i++){
            cout << Ans[i] << " ";
        }
        cout << endl;
        VP.clear();
        
    }

    return 0;
}
