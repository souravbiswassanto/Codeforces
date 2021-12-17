#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  300006
#define  mem(a,v)   memset(a,v,sizeof(a))

void fastIO (){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}

ll A[MAX];
ll B[MAX];
ll C[MAX];
ll Max,Check;
vector<int>graph[MAX];

void DFS (int source){

    B[source]=1;

    if(graph[source].size()!=2)Check=1;

    for (int i=0;i<graph[source].size();i++){
        int v=graph[source][i];
        if (B[v]==0){
            DFS(v);
        }
    }

}

int main ()
{

    fastIO();

    ll a,b,c,n,m,k,p,q,r;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;

    cin>>n>>m;

    for (int i=1;i<=m;i++){
        cin>>a>>b;
        graph[a].pb(b);
        graph[b].pb(a);
    }

    for (int i=1;i<=n;i++){
        if (B[i]==0){
            DFS(i);
            if (Check==0)cnt++;
             Check=0;
        }
    }

    cout<<cnt<<endl;

    return 0;
}
