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
    ll cnt=0,cntr=0,rem=1,sum=0,ans=0,check=0;
    float x,y,z;
    ll Max=-1e18;
    unsigned long long Min = 1e20;
    string s,s1,s3,s4;

    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>a>>b;

        ans=0;
        if(a<b)swap(a,b);

        while(b!=0){
            ans+=(a/b);
            int temp=a;
            a=b;
            b=temp%b;
        }

        cout<<ans<<endl;
    }

    return 0;
}
