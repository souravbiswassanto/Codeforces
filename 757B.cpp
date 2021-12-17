#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  500006
#define  MAX1  100010
#define  mem(a,v)   memset(a,v,sizeof(a))

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
ll N=1e5+8;

void seive (){int limit = sqrt(N*1.0)+2;mark[1]=1;for (int i=4;i<=N;i+=2)mark[i]=1;prime.push_back(2);for (int i=3;i<=N;i+=2){if(!mark[i]){prime.push_back(i);if(i<=limit){for (int j=i*i;j<=N;j+=i*2)mark[j]=1;}}}}

int main ()
{
    fastIO();
    ll a,b,c,n,m,k,p,q,r;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    float x,y,z;
    ll Max= 0,Max1=-1e18+1;
    ll Min = 1e18;
    string s,s1,s3,s4;
    seive();

    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>A[i];
    }

    for(int i=1;i<=n;i++){
        a=A[i];
        for(int j=0;prime[j]*prime[j]<=a;j++){
            if(a%prime[j]==0){
                while(a%prime[j]==0){
                    a/=prime[j];
                }
                B[prime[j]]++;
            }
        }
        if(a!=1)B[a]++;
    }

    for(int i=2;i<=100006;i++){
        ans=max(ans,B[i]);
    }
    cout<<ans<<endl;
    return 0;
}
