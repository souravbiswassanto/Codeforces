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

    ll a,b,c,n,m,k,p,q,r;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0,cntrr=0,cntt=0;
    float x,y,z;
    ll Max=-1e18;
    unsigned long long Min = 1e20;
    string s,s1,s3,s4;

    cin>>n>>m;

    for(int i=1;i<=n;i++){
        cin>>A[i];
        if(A[i]%2)cntr++;
        else cnt++;
    }

    for(int i=1;i<=m;i++){
        cin>>A[i];
        if(A[i]%2)cntrr++;
        else cntt++;
    }

    ans=min(cntr,cntt)+min(cnt,cntrr);

    cout<<ans<<endl;

    return 0;
}
