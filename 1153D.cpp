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
ll visited[MAX];
ll color[MAX];
ll level[MAX];
ll weight[MAX];
ll Weight[MAX];
ll degree[MAX];
ll counter=1;
ll Max=0,Min=1e17;
ll k;


void DFS (ll source,ll parent){

    visited[source]=1;

    for(int i=0;i<graph[source].size();i++){


        ll v=graph[source][i];
        if (v==source)continue;

        if (graph[v].size()==1&&color[source]==1)Weight[v]=k--;

        if (graph[v].size()==1&&color[source]==0) Weight[v]=counter++;

        if(visited[v]==0){
            DFS(v,source);
        }

    }
    if (color[parent]==1)Weight[parent]=max(Weight[parent],Weight[source]);
    if (color[parent]==0)Weight[parent]=min(Weight[parent],Weight[source]);

}

int main(){

    fastIO();

    ll node,edge;
    ll weight;
    ll a,b,c;
    ll x,y,z;
    ll query;

    cin>>node;

    for (int i=1;i<=node;i++){
        cin>>color[i];
        if (!color[i]){
            Weight[i] =(long long)Min;
        }
    }

    for (int i=2;i<=node;i++){
        cin>>a;
        graph[a].pb(i);
        graph[i].pb(a);
    }

    for (int i=2;i<=node;i++){
        if (graph[i].size()==1)k++;
    }
    color[0]=2;

    DFS(1,0);

    for (int i=1;i<=node;i++)cout<<Weight[i]<<" ";

    cout<<Weight[1]<<endl;

    return 0;

}
