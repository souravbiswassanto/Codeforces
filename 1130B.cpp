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
    ll cnt=0,cntr=0,sum=0,ans=0,check=0;
    float x,y,z;
    ll Max=-1e18;
    unsigned long long Min = 1e20;
    string s,s1,s3,s4;

    cin>>n;

    ll start =1 , start1 =1 ;


    for (int i=1;i<=2*n;i++){
        cin>>A[i];
        if (B[A[i]*2-1]==0)B[A[i]*2-1]=i;
        else B[A[i]*2]=i;
    }


    for (int i=1;i<=2*n;i++){
        if (i%2==1){
            ans+=(abs(B[i]-start));
            start = B[i];
            //cout<<ans<<endl;
        }
        else {
            //cout<<B[i]-start1<<endl;
             ans+=(abs(B[i]-start1));
             start1 = B[i];
             //cout<<ans<<endl;
        }
    }

    cout<<ans<<endl;

    return 0;
}
