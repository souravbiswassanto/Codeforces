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
ll degree[MAX];
ll color[MAX];
vector<int>graph[MAX];

void DFS(int source,int p){

    B[source]=1;
    ll counter=1;


    for (int i=0;i<graph[source].size();i++){
        int v=graph[source][i];
        if (B[v]==1)continue;

         while(counter==color[source]||counter==color[p])counter++;
         if(!color[v])color[v]=counter++;


        if (B[v]==0){
            DFS(v,source);
        }
    }

}

int main ()
{

    fastIO();

    ll a,b,c,n,m,k,p,q,r;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    float x,y,z;
    ll Max=-1e18;
    unsigned long long Min = 1e20;
    string s,s1,s3,s4;

    cin>>n;

    for (int i=1;i<n;i++){
        cin>>a>>b;

        degree[a]++;
        degree[b]++;
        graph[a].pb(b);
        graph[b].pb(a);
    }

    for (int i=1;i<=n;i++){
        sum=max(sum,degree[i]);
    }

    cout<<sum+1<<endl;

    color[1]=1;

    DFS(1,0);

    for (int i=1;i<=n;i++){
        cout<<color[i]<<" ";
    }


    return 0;
}
