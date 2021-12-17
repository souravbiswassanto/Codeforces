#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  100006
#define  Max(a,b,c) max(a,max(b,c))
#define  Min(a,b,c) min(a,min(b,c))
#define  mem(a,v)   memset(a,v,sizeof(a))
#define  rep        for (int i=0;i<n;i++)
#define  Rep        for (int i=0;i<m;i++)

void fastIO ()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}

ll A[MAX];
ll B[MAX];
ll C[MAX];
ll Sum=0;

ll Max=0,Min=INT_MAX;
vector<ll> V[MAX];
int visited[MAX];

ll rev (ll a,ll b)
{

    return a>b;
}

void DFS (int source)
{
    int u=source;
    visited[source]=1;

    for (int i=0; i<V[u].size(); i++)
    {
        int v=V[u][i];
        if (visited[v]==0)
        {
            Sum+=(A[v]*2);
            //cout<<"v "<<v<<" a[v] "<<A[v]<<" a[u] "<<A[u]<<endl;
            B[v]+=(B[u]+A[v]);
            Max=max(Max,B[v]);
            DFS(v);
        }
    }
}

int main ()
{

    fastIO();
    set<ll>S;
    set<ll>::iterator it;
    map<string,ll> M;
    map<string,ll>::iterator it1;

    ll a,b,c;
    ll n,m;
    ll cnt=0,cntr=0,sum=0,ans=1;
    ll p,q,r;
    ll v=1;
    ll check=0;
    ll x,y,z;
    string s,s1[MAX],s2[MAX],s3,s4;

    cin>>n;

    for (int i=0; i<n-1; i++)
    {
        cin>>a>>b>>x;
        V[a].pb(b);
        V[b].pb(a);
        A[max(a,b)]=x;
    }
    A[1]=0;
    DFS(1);

    cout<<Sum-Max<<endl;

    return 0;
}
