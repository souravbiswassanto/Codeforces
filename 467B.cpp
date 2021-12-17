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

void fastIO ()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}
ll A[MAX];
int main ()
{
    fastIO();

    ll a,b=0,c=0;
    ll n,m,k;
    ll cnt=0,cntr=0,sum=0,ans=1;
    ll p,q,r;
    ll v=1;
    ll check=0;
    ll x,y,z;
    string s,s1[4000],s2[4000],s3,s4;

    cin>>n>>m>>k;

    for (int i=0; i<=m; i++)
    {
        cin>>A[i];
    }

    int fedor=A[m];

    for (int i=0; i<m; i++)
    {
        a=A[i]^fedor;
        cntr=0;

        while(a!=0)
        {
            a=a&(a-1);
            cntr++;
        }

        if(cntr<=k)cnt++;

    }

    cout<<cnt<<endl;

    return 0;
}

