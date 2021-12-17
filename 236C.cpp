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
    unsigned long long Min = 1e20;
    string s,s1,s3,s4;

    cin>>n;

    if(n==1){cout<<1<<endl;return 0;}
    if(n==2){cout<<2<<endl;return 0;}
    if(n==3){cout<<6<<endl;return 0;}
    if(n==4){cout<<12<<endl;return 0;}
    if(n==5){cout<<60<<endl;return 0;}
    if(n==6){cout<<60<<endl;return 0;}

    if(n%2){
        ans=n*(n-1)*(n-2);
    }
    else {
            if(n%3==0)ans=(n-1)*(n-2)*(n-3);
            else ans=n*(n-1)*(n-3);
    }

    cout<<ans<<endl;

    return 0;
}
