#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  500006
#define  MAX1  10000008
#define  mem(a,v)   memset(a,v,sizeof(a))

void fastIO ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}
ll dp[200006][4];
ll row[200006];
ll R3[200006];
ll sum;

ll minswap(ll value,ll Row){

    if(value==sum)return;
    if(Row==3)return R3[value];
    if(Row==1){
        minswap(value+1,1);
        minswap(value+1,2);
        minswap(value+1,3);

    }
    else if(row==2){

    }
}

int main ()
{
    fastIO();
    ll a,b,c,n,m,k,p,q,r;
    ll cnt=0,cntr=0,ans=1,check=0;
    float x,y,z;
    ll Max= 0,Max1=-1e18+1;
    ll Min = 1e18;
    string s,s1,s3,s4;

    cin>>n>>m>>k;
    sum=n+m+k;
    mem(dp,-1);
    for(int i=1; i<=n; i++)
    {
        cin>>a;
        row[a]=1;
    }
    for(int i=1; i<=m; i++)
    {
        cin>>b;
        row[b]=2;
    }

    for(int i=1; i<=k; i++)
    {
        cin>>c;
        row[c]=3;
        R3[C[i]]=1;
    }

    ll value=1;

    for(int i=sum; i>=1; i--)
    {
        value-=R3[i];
        R3[i]=value;
        value++;
    }

    return 0;
}
