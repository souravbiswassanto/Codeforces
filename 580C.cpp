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

void fastIO (){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}
int Ans=0,m;
vector<ll> tree[MAX];

ll A[MAX];
ll visited[MAX];
ll level[MAX];

void dfs (int u){
    int cnt=0;
    visited[u]=1;

    for (int i=0;i<tree[u].size();i++){
        int v=tree[u][i];

        if (visited[v]==1){
            if (tree[u].size()==1)
                Ans++;
            continue;
        }
        if (A[v]==1){
            level[v]=level[u]+1;
        }
        else level[v]=0;

        if (visited[v]==0&&level[v]<=m)
            dfs (v);
    }

}

ll rev (ll a,ll b){

    return a>b;
}

int main ()
{

    fastIO();

    set<ll>S;
    set<ll>::iterator it;
    map<string,ll> M;
    map<string,ll>::iterator it1;

    ll a,b,c;
    ll n;
    ll cnt=0,cntr=0,sum=0,ans=1;
    ll p,q,r;
    ll v=1;
    ll check=0;
    ll x,y,z;
    ll Max=0,Min=INT_MAX;
    string s,s1[MAX],s2[MAX],s3,s4;

    cin>>n>>m;

    for (int i=1;i<=n;i++){
        cin>>A[i];
    }
    if (A[1]==1)level[1]=1;
    for (int i=1;i<n;i++){
        cin>>x>>y;

        tree[x].pb(y);
        tree[y].pb(x);
    }

    dfs(1);

    if (A[1]==1&&m==0)cout<<0<<endl;

    cout<<Ans<<endl;

    return 0;
}

