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
int Counter;
ll A[MAX];
ll B[MAX];
ll C[MAX];
int m;
vector <int> graph[MAX];

void DFS (int source){

    B[source]=1;


    for (int i=0;i<graph[source].size();i++){

        int v=graph[source][i];
        if (B[v])continue;
        if (A[v]==1)
            C[v]=C[source]+1;
        else C[v]=0;
        if (C[v]>m)continue;

        if (graph[v].size()==1){Counter++;continue;}


        if (B[v]==0){
            DFS(v);
        }
    }

}

int main ()
{

    fastIO();

    ll a,b,c,n,k,p,q,r;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    float x,y,z;
    ll Max=-1e18;
    unsigned long long Min = 1e20;
    string s,s1,s3,s4;

    cin>>n>>m;

    for (int i=1;i<=n;i++){
        cin>>A[i];
    }

    for (int i=1;i<n;i++){
        cin>>a>>b;
        graph[a].pb(b);
        graph[b].pb(a);
    }

    if(A[1]==1)C[1]=1;

    DFS(1);

    cout<<Counter<<endl;

    return 0;
}
