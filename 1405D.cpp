#include <bits/stdc++.h>
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
#define lcm(a, b)        ((a)*((b)/gcd(a,b)))
#define yes   cout<<"YES"<<endl
#define no   cout<<"NO"<<endl
#define buga  cout<<1<<endl
#define bugb  cout<<2<<endl
#define bugc  cout<<3<<endl
#define bugd  cout<<4<<endl
#define buge  cout<<5<<endl

void fastIO (){ios_base::sync_with_stdio(false);cin.tie(0); cout.precision(20);}
vector<int>graph[MAX];
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
ll MM=0,node,MMs=10000000;
bool visited[200000+5];
int len[200000+5];
void DFS(int source){
    visited[source]=1;

    for(int i=0;i<graph[source].size();i++){
        int v = graph[source][i];
        //cout<<source<<" "<<len[source]<<endl;
        if(visited[v])continue;
        len[v]= len[source] + 1;
        DFS(v);

        if(len[v]>MM){
            node = v;
            MM = len[v];
        }
    }
}
void DFS2(int source){
    visited[source]=1;

    for(int i=0;i<graph[source].size();i++){
        int v = graph[source][i];

        if(visited[v])continue;
        len[v] = len[source]+1;
        //cout<<len[v]<<endl;
        DFS2(v);

        if(len[v]>MM){
            node = v;
            MM = len[v];
        }
    }
}
void DFS3(int source,int des){
    visited[source]=1;

    for(int i=0;i<graph[source].size();i++){
        int v = graph[source][i];

        if(visited[v])continue;
        len[v] = len[source]+1;
        if(v==des){
            MMs=min((ll)len[v],MMs);
        }
        //cout<<len[v]<<endl;
        DFS3(v,des);

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
        cin>>n>>a>>b>>p>>q;
        for(int i=0;i<n-1;i++){
            cin>>x>>y;
            graph[x].pb(y);
            graph[y].pb(x);
        }

        for(int i=0;i<n+2;i++){
            visited[i]=0;
            len[i]=0;
        }
        MM = 0; node =1;
        DFS(1);
        //cout<<MM<<" "<<l<<endl;
        for(int i=0;i<n+2;i++){
            visited[i]=0;
            len[i]=0;
        }
        MM = 0;
        DFS2(node);
        for(int i=0;i<n+2;i++){
            visited[i]=0;
            len[i]=0;
        }
        DFS3(a,b);
        //cout<<MMs<<endl;
        //cout<<MM<<" "<<l<<endl;

        if(q<=p*2||MM<=p*2||MMs<=p){
            cout<<"Alice"<<endl;
        }
        else cout<<"Bob"<<endl;
        for(int i =0;i<=n;i++){
            graph[i].clear();
        }
        MMs=1000000;
    }

    return 0;
}
