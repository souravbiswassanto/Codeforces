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

void fastIO (){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}

ll A[MAX];
ll B[MAX];
ll C[MAX];
vector< ll >V;
vector< ll >Ans;
vector< pair<ll,ll> >VP;
map< ll,ll >M;
vector<ll>prime;
bool mark[MAX1];
ll N=1e7;

//void seive (){int limit = sqrt(N*1.0)+2;mark[1]=1;for (int i=4;i<=N;i+=2)mark[i]=1;prime.push_back(2);for (int i=3;i<=N;i+=2){if(!mark[i]){prime.push_back(i);if(i<=limit){for (int j=i*i;j<=N;j+=i*2)mark[j]=1;}}}}

int main ()
{
    fastIO();
    ll a,b,c,n,m,k,p,q,r;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    float x,y,z;
    ll Max= 0,Max1=-1e18+1;
    ll Min = 1e18;
    string s[1006],s1,s3,s4;

    cin>>n>>m;

     for(int i=0;i<n;i++){
        cin>>s[i];
     }

    for(int i=0;i<m;i++){
        cin>>A[i];
    }

    for(int i=0;i<m;i++){
        a=0;
        ans=0;
        for(int j=0;j<n;j++){
            B[s[j][i]-'A']++;
        }
        for(int j=0;j<5;j++){
            if(B[j]*A[i]>ans){
                ans=B[j]*A[i];
            }
        }
        for(int j=0;j<=6;j++)B[j]=0;
        sum+=ans;
    }
    cout<<sum<<endl;

    return 0;
}
