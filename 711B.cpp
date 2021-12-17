#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  500006
#define  MAX1  10000008
#define  mem(a,v)   memset(a,v,sizeof(a))

template <typename T>
T mymax (T a,T b){return (a>b)?a:b;}
template <typename T>
T mymin (T a,T b){return (a<b)?a:b;}
template <typename T>
T myabs (T a){return (a<0)?(-1*a):a;}

ll A[506][506];
ll R[MAX];
ll C[MAX];
ll k1;
ll k2;
vector< ll >V;
vector< ll >Ans;
vector< pair<ll,ll> >VP;
map< ll,ll >M;
vector<ll>prime;
bool mark[MAX1];
ll N=1e7;

int main ()
{
    ll a,b,c,n,m,k,p,q,r,s;
    ll cnt=0,cntr=0,sum=0,ans=0,check=0;
    float x,y,z;
    ll Max= 0,Max1=-1e18+1;
    ll Min = 1e18;

    cin>>n;
    if(n==1){
        cout<<1<<endl;return 0;
    }

    for(int i=1;i<=n;i++){
            sum=0;
        for(int j=1;j<=n;j++){
            cin>>A[i][j];
            if(A[i][j]==0){
                check=1;
                a=i;
                b=j;
            }
            sum+=A[i][j];
        }
        ans=max(sum,ans);
        R[i]=sum;
    }

    A[a][b]=ans-R[a];
    if(A[a][b]==0){
        cout<<-1<<endl;return 0;
    }

    for(int i=1;i<=n;i++){
        sum=0;
        for(int j=1;j<=n;j++){
            if(i==j)k1+=A[i][j];
            if(i+j==n+1)k2+=A[i][j];
            sum+=A[i][j];

        }
        if(sum!=ans){
                cout<<-1<<endl;return 0;
        }

    }
    if(k1!=ans||k2!=ans){
        cout<<-1<<endl;return 0;
    }
    for(int i=1;i<=n;i++){
        sum=0;
        for(int j=1;j<=n;j++){
            sum+=A[j][i];
        }
        if(sum!=ans){
            cout<<-1<<endl;return 0;
        }
    }
    cout<<A[a][b]<<endl;
    return 0;
}
