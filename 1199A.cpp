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

    cin>>n>>a>>b;

    for(int i=1;i<=n;i++){
        cin>>A[i];
    }

    for(int i=1;i<=n;i++){
        check=0;
        cntr=0;
        for(int j=i-1;j>=i-a;j--){
            if(j<1)break;
            if(A[j]<=A[i])check=1;
        }
        for(int j=i+1;j<=i+b;j++){
            if(j>n)break;
            if(A[j]<=A[i])cntr=1;
        }
        if(cntr==0&&check==0){
            cout<<i<<endl;
            return 0;
        }
    }

    return 0;
}
