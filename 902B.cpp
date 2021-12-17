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

vector<int>graph[MAX];
int counter=1;


void dfs(int source){

    A[source]=1;

    for (int i=0;i<graph[source].size();i++){
        int u = graph[source][i];

        if (A[u]==0){
            dfs(u);
            if (C[source]!=C[u])counter++;
            //cout<<counter<<endl;
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

    for (int i=2;i<=n;i++){
        cin>>a;
        graph[a].pb(i);
    }
    for (int i=1;i<=n;i++){
        cin>>C[i];
    }

    dfs(1);

    cout<<counter<<endl;

    return 0;
}
