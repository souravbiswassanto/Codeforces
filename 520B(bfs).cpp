#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  200006
#define  mem(a,v)   memset(a,v,sizeof(a))

ll A[MAX];
ll B[MAX];
ll C[MAX];
ll level[MAX];
int visited[MAX];
int bfs (int n,int m){

    int red,blue;
    queue<int> Q;

    level[n]=0;
    visited[n]=1;
    Q.push(n);

    while(!Q.empty()){
        int u=Q.front();
        Q.pop();

        for (int i=0;i<2;i++){
            if (i==0)red=2*u;
            if (i==1)red=u-1;

            if (red<0||red>10001)continue;
            if (visited[red]==0){
                visited[red]=1;
                Q.push(red);
                level[red]=level[u]+1;
                if (red==m){
                    cout<<level[red]<<endl;
                    return 0;
                }
            }

        }
    }

}

int main ()
{
    vector<ll> V;
    set<ll>S;
    set<ll>::iterator it;

    ll a,b,c,l,n,m,k,p,q,r,v;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0,Max=0,Min=INT_MAX;
    float d,e,f,x,y,z;
    string s,s1,s3,s4;

    cin>>n>>m;

    bfs(n,m);

    return 0;
}
