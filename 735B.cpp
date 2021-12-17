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

ll rev (ll a , ll b ){

     return a>b;
}

int main ()
{

    fastIO();

    ll a,b,c,n,m,k,p,q,r;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    float x,y,z;
    ll Max=-1e18;
    long long Min = 1e18;
    string s,s1,s3,s4;

    cin>>n>>a>>b;

    Max = max (a,b);
    Min = min (a,b);

    for (int i = 1 ; i <= n ; i++ ){

        cin>> A[i];

    }

    sort (A+1,A+n+1,rev);

    for (int i = 1 ; i <= n ; i++){
        A[i]+=A[i-1];
    }

    x = (float) A[Min]/(float)Min;
    y = (float) (A[Min+Max]-A[Min])/(float)Max;

    z = x+y ;

    printf("%.8f\n",z);


    return 0;
}
