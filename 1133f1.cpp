#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 999999999999999999
#define pb push_back
#define mp make_pair

vector< pair<ll,ll> > edge;
vector<ll> Graph[300005];
ll Degree[300005];
ll Visited[300005];

bool sorting(ll a,ll b)
{
    return Degree[a]>Degree[b];
}

ll BFS(ll S)
{
    queue<ll> Q;
    Q.push(S);

    Visited[S]=1;

    while(!Q.empty())
    {
        ll U=Q.front();
        Q.pop();

        for(int i=0; i<Graph[U].size(); i++)
        {
            ll V=Graph[U][i];

            if(Visited[V]==0)
            {
                Visited[V]=1;
                Q.push(V);
                edge.pb(mp(U,V));
            }
        }
    }
}

int main()
{

    ll X,Y,W,Node,Edge;

    cin>>Node>>Edge;

    ll Source=1,XX=0;

    for(int i=1; i<=Edge; i++)
    {
        cin>>X>>Y;
        Graph[X].pb(Y);
        Graph[Y].pb(X);

        Degree[X]++;
        Degree[Y]++;

        if(Degree[X]>XX)
        {
            XX=Degree[X];
            Source=X;
        }
        if(Degree[Y]>XX)
        {
            XX=Degree[Y];
            Source=Y;
        }
    }

    for(int i=1; i<=Node; i++)
    {
        sort(Graph[i].begin(),Graph[i].end(),sorting);
    }

    BFS(Source);

    for(int i=0; i<Node-1; i++)
    {
        cout<<edge[i].first<<" "<<edge[i].second<<endl;
    }

    return 0;
}
