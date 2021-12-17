#include<bits/stdc++.h>
using namespace std;

#define  pb     push_back
#define  mp     make_pair
#define  MAX    300006
#define  ll     long long
#define  mem(a,v)   memset(a,v,sizeof(a))

void fastIO (){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}

struct Sort{
    int a,b,c,d,e;
    Sort(int a1,int b1,int c1,int d1,int e1)
    {
        a=a1; b=b1; c=c1; d=d1; e=e1;
    }
};

bool func(Sort a,Sort b)
{
    return a.c>b.c;
}

vector<ll>graph[MAX];
vector <Sort> V;
vector <ll> res[MAX];
ll visited[MAX];
ll mark[MAX];
ll level[MAX];
ll weiight[MAX];
ll degree[MAX];
ll Counter;
ll A[4006][4006];

void DFS (ll source,ll parent,ll value){

    visited[source]=1;

    for(int i=0;i<graph[source].size();i++){

        ll v=graph[source][i];
        level[v]=level[source]+1;

        if (visited[v]==1&&v==value&&A[value][source]==1&&A[value][parent]==1){
            res[Counter].pb(source);
            res[Counter].pb(value);
            res[Counter].pb(parent);
            Counter++;
        }

        if(visited[v]==0){
            DFS(v,source,value);
        }

    }

}

int main(){

    fastIO();

    ll node,edge,sum=0,ans=1e17;
    ll weight;
    ll a,b,c;
    ll x,y,z;
    ll query,k;

    cin>>node>>edge;

    for (int i=1;i<=edge;i++){
        cin>>a>>b;
        degree[a]++;
        degree[b]++;
        graph[a].pb(b);
        graph[b].pb(a);
        A[a][b]=1;
        A[b][a]=1;
    }

    for (int i=1;i<=node;i++){
        level[i]=1;
        DFS(i,0,i);
        mem(level,0);
        mem(visited,0);
    }

    if (Counter==0){
        cout<<-1<<endl;
        return 0;
    }

    for (int i=0;i<Counter;i++){
        for (int j=0;j<3;j++){
            int v=res[i][j];
            sum+=(degree[v]-2);
            cout<<v<<" "<<degree[v]<<" ";
        }
        cout<<endl;
        cout<<sum<<endl;
        ans=min(ans,sum);
        sum=0;
    }

    cout<<ans<<endl;
    return 0;

}
