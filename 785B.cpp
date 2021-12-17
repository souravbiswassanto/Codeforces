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
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    float x,y,z;
    ll Max=-1e18;
    ll max1 = -1e10 , max2 = -1e10;
    ll min1 = 1e10 , min2 = 1e10;
    unsigned long long Min = 1e20;
    string s,s1,s3,s4;

    cin>>n;

    for (int i=0;i<n;i++){
        cin>>a>>b;

        max1 = max(max1,a);
        min1 = min(min1,b);
    }

    cin>>m;

    for (int i=0;i<m;i++){
        cin>>a>>b;

        max2 = max(max2,a);
        min2 = min(min2,b);
    }

    ans = max( max1 - min2 , max2 - min1);

    cout<<max(ans,cnt)<<endl;

    return 0;
}
