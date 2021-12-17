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

    ll a,b,c,d,n,m,k,p,q,r;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    float x,y,z;
    ll Max=-1e18;
    unsigned long long Min = 1e20;
    string s,s1,s3,s4;

    cin>>a>>b>>c>>d;

    A[0]=a;
    A[1]=b;
    A[2]=c;
    sort(A,A+3);

    if(A[0]+d+d>A[2])p=abs(A[1]-(A[0]+d));
    else p=abs(A[1]-(A[0]+d))+abs(A[2]-((2*d)+A[0]));

    if(A[1]-d>=A[0]&&A[1]+d<=A[2])q=0;
    else if(A[1]-d>=A[0])abs((A[1]+d)-A[2]);
    else if(A[1]+d<=A[2])abs((A[1]-d)-A[0]);
    else q=abs((A[1]-d)-A[0])+abs((A[1]+d)-A[2]);

    r=abs(A[2]-d-A[1])+abs(A[2]-(2*d)-A[0]);

    n=min(p,q);
    m=min(n,r);

    cout<<m<<endl;

    return 0;
}
