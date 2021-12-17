#include <bits/stdc++.h>
using namespace std ;

#define     pb             push_back
#define     popb            pop_back
#define     ll              long long int
#define     ull             unsigned long long int
#define     f               first
#define     s               second
#define     mem(a,v)        memset(a,v,sizeof(a))
#define     mp              make_pair
#define     MAX             100006

void fastIO (){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}

vector <long int >graph[MAX];

ll cost[MAX]={0};
int visited [MAX]={0};
///ull sum=0;
int BFS (long long int source){

    ll u,v;
    queue <long long int > q;
    q.push(source);
    if (visited[source]==1){
        return 0;
    }
    cout<<"c s "<<cost[source]<<endl;
    visited[source]=1;

    cout<<"source "<<source<<endl;
    while (!q.empty()){
        u=q.front ();
        cout<<"u "<<u<<endl;
        q.pop();
        for (int i=0;i<graph[u].size();i++){
            v=graph[u][i];
            cout<<"v "<<v<<endl;
            if (visited[v]==0){
                visited[v]=1;
                if (cost[v]<cost[source]){
                    cost[source]=cost[v];
                }

                q.push(v);
                cout<<"cost [v] "<<cost[v]<<" cost [source] "<<cost[source]<<endl;
            }
        }
    }

    return cost[source];

}

int main ()
{

    ///freopen("output.txt","w",stdout);

    fastIO ();
    ull value;
    ll n,m;
    ll x,y;

    cin>>n>>m;

    for (int i=1;i<=n;i++){
        cin>>cost[i];
    }

    for (int i=1;i<=m;i++){
        cin>>x>>y;
        graph[x].pb(y);
        graph[y].pb(y);
    }
    ull sum=0;
    for (int i=1;i<=n;i++){
        value=BFS(i);
        sum=sum+value;
    }

//
//
//    set <long long int >s (cost,cost+n+1);
//    set <long long int >::iterator it;
//
//    for (it=s.begin();it!=s.end();it++){
//    sum=sum+*it;
//    ///cout<<*it<<endl;
//
//    }

    cout<<sum<<endl;

    return 0;
}


