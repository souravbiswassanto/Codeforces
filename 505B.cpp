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

vector<int>graph[MAX];
vector<int>color[MAX];

ll A[MAX];
ll B[MAX];
ll C[MAX];
ll visited[MAX];
int Counter;

void DFS (int source,int destination,int Color){

    B[source]=1;

    for (int i=0;i<graph[source].size();i++){

        int check=0;
        int v = graph[source][i];
        if(B[v]==1)continue;
        for (int j=0;j<color[v].size();j++){
            if (color[v][j]==Color)check=1;
        }
        if (check==0)continue;
        if (v==destination)Counter=1;
        if (B[v]==0){
            DFS(v,destination,Color);
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

    cin>>n>>m;

    for (int i=1;i<=m;i++){
        cin>>a>>b;
        graph[a].pb(b);
        graph[b].pb(a);
        cin>>c;

        color[a].pb(c);
        color[b].pb(c);
    }

    cin>>q;

    for (int i=1;i<=q;i++){

        cin>>p>>r;
        sum=0;

        for (int j=0;j<color[p].size();j++){

            if (visited[color[p][j]]==1)continue;
            DFS(p,r,color[p][j]);
            visited[color[p][j]]=1;
            sum+=Counter;
            Counter=0;
            mem(B,0);

        }
        mem(visited,0);
        cout<<sum<<endl;
    }

    return 0;
}
