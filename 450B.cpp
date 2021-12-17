#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  200006
#define  Max(a,b,c) max(a,max(b,c))
#define  Min(a,b,c) min(a,min(b,c))
#define  mem(a,v)   memset(a,v,sizeof(a))
#define  rep        for (int i=0;i<n;i++)
#define  Rep        for (int i=0;i<m;i++)
#define  MOD         1000000007

void fastIO (){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}

ll A[MAX];
ll B[MAX];
ll C[MAX];

ll rev (ll a,ll b){

    return a>b;
}

int main ()
{

    fastIO();
    vector<ll> V;
    set<ll>S;
    set<ll>::iterator it;

    ll a,b,c;
    ll n,m;
    ll cnt=0,cntr=0,sum=0,ans=1;
    ll p,q,r;
    ll v=1;
    ll check=0;
    ll x,y,z,x1,y1,z1;
    ll Max=0,Min=INT_MAX;
    string s,s1,s3,s4;

    cin>>x>>y>>n;

    z=y-x;
    if (z==-1000000007)z=0;
    x1=x*-1;
    y1=y*-1;
    z1=z*-1;

    if (n%6==0){if(z1<0)cout<<(MOD-(abs(z1)%MOD))<<endl;else cout<<z1%MOD<<endl;}
    if (n%6==1){if(x<0)cout<<(MOD-(abs(x)%MOD))<<endl;else cout<<x%MOD<<endl;}
    if (n%6==2){if(y<0)cout<<(MOD-(abs(y)%MOD))<<endl;else cout<<y%MOD<<endl;}
    if (n%6==3){if(z<0)cout<<(MOD-(abs(z)%MOD))<<endl;else cout<<z%MOD<<endl;}
    if (n%6==4){if(x1<0)cout<<(MOD-(abs(x1)%MOD))<<endl;else cout<<x1%MOD<<endl;}
    if (n%6==5){if(y1<0)cout<<(MOD-(abs(y1)%MOD))<<endl;else cout<<y1%MOD<<endl;}

    return 0;
}
