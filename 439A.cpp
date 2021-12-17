#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  100006
#define  Max(a,b,c) max(a,max(b,c))
#define  Min(a,b,c) min(a,min(b,c))
#define  mem(a,v)   memset(a,v,sizeof(a))
#define  rep        for (int i=0;i<n;i++)
#define  Rep        for (int i=0;i<m;i++)


int main ()
{

    vector<ll> V;

    ll a,b,c,d;
    ll n,m;
    ll cnt=0,cntr=0,sum=0,ans=1;
    cin>>n>>d;

    for (int i=0; i<n; i++)
    {
        cin>>a;
        V.pb(a);
    }
    cnt=n-1;
    while (1)
    {
        if (cnt>=0)
            d=d-V[cnt--];

        if (d<=0)
        {
            break;
        }
        if (d-10>=0)
        {
            d-=10;
            cntr+=2;
        }
        else if (d-5>=0)
        {
            d-=5;
            cntr+=1;
        }
        else
        {
            break;
        }

    }

    if (cnt)
        cout<<"-1"<<endl;
    else cout<<cntr<<endl;
    return 0;
}
