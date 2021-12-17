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
    long long Min = 1e17;
    string s,s1,s3,s4;

    cin>>n>>r;

    for (int i=1;i<=n;i++){
        cin>>A[i]>>B[i];

    }

    for (int i=1;i<=n;i++){
        if (A[i]<=r){
            cout<<i<<endl;
            return 0;
        }

        a=r-A[i];
        c=a/B[i];
        if (a%B[i]!=0)c++;

        if (c<Min){
            Min=c;
            p=i;
        }

    }

    cout<<p<<endl;

    return 0;
}
