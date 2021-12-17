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

vector<int>tree[MAX];
int visited [MAX];
int level[MAX];

 void DFS (int source){
    int u,v;
    visited[source]=1;
    level[source]=1;
    for (int i=0;i<tree[source].size();i++){
        u=tree[source][i];
        if (visited[u]==0){
            DFS(u);
            level[source]+=level[u];
        }
    }
}

ll A[MAX];
ll B[MAX];
ll C[MAX];

int main ()
{

    fastIO();

    ll a,b,c;
    ll n,m;
    ll cnt=0,cntr=0,sum=0,ans=1;
    ll p,q,r;
    ll v=1;
    ll check=0;
    ll x,y,z;
    ll Max=0,Min=INT_MAX;
    string s,s1[MAX],s2[MAX],s3,s4;

    cin>>n;

    for (int i=1;i<n;i++){
        cin>>x>>y;
        tree[x].pb(y);
        tree[y].pb(x);
    }
    DFS(1);

    if (n%2)cout<<-1<<endl;
    else {
        for (int i=1;i<=n;i++)if (level[i]%2==0)cntr++;
        cout<<cntr-1<<endl;
    }

    return 0;
}
