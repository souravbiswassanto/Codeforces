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

int main ()
{

    fastIO();

    ll a,b,c,n,m,k,p,q,r,w;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    float x,y,z;
    ll Max=-1e18;
    ll Min = 1e18;
    string s,s1,s3,s4;

    cin>>n>>w;

    for (int i=0;i<n;i++){
        cin>>A[i];
        sum+=A[i];
        if (sum>Max){
            Max=sum;
        }
        if (sum<Min){
            Min=sum;
        }
    }
    ans = w - Max+1;
    if (Min<0)ans+=Min;

    if (Max>w||Min<(-1*w))cout<<0<<endl;
    else cout<<ans<<endl;

    return 0;
}
