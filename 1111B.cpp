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
    float x,y,z,avg=0;
    ll Max=-1e18;
    unsigned long long Min = 1e20;
    string s,s1,s3,s4;

    cin>>n>>k>>m;

    for (int i=1;i<=n;i++){
        cin>>A[i];
    }


    sort(A+1,A+n+1);

    for (int i=1;i<=n;i++){
        B[i]=B[i-1]+A[i];
        sum+=A[i];
    }

    int value=n;
    ll sum2=sum;
    float answer=0;
    for (int i=1;i<=value;i++){

        sum2+=(min((k*n),m));
        avg =(float) sum2/(float)(1.0*n);
        answer = (float)max(avg,answer);
        if(m==0)break;
        n--;
        m--;
        sum-=A[i];
        sum2=sum;
    }

    printf("%.20f\n",answer);
    return 0;
}
