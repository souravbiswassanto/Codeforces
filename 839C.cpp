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
ll Counter;
ll Total;
ll A[MAX];
ll B[MAX];
ll C[MAX];
vector<int>graph[MAX];

void DFS(int source){

    B[source]=1;

    for (int i=0;i<graph[source].size();i++){


        int v=graph[source][i];
        if(B[v]==1)continue;
        C[v]=C[source]+1;

        if (graph[v].size()==1){
            Total+=C[v];
            Counter++;
        }

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
    float x,y,z;
    ll Max=-1e18;
    unsigned long long Min = 1e20;
    string s,s1,s3,s4;

    cin>>n;

    for (int i=1;i<n;i++){
        cin>>a>>b;
        graph[a].pb(b);
        graph[b].pb(a);
    }


    DFS(1);

    float Ans = (float)Total/(float)Counter;

    printf("%.15f\n",Ans);

    return 0;
}

//8
//1 2 1 3
//2 4
//3 5 3 6
//6 7
//6 8
