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

    ll a,b,c,n,m,k,p,q,r,pos=0;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    float x,y,z;
    ll Max=0,max1=0,max2=0;
    unsigned long long Min = 1e20;
    string s,s1,s3,s4;

    cin>>n;

    for(int i=1;i<=n;i++)cin>>A[i];
    cin>>q;
    for(int i=1;i<=q;i++){
        cin>>a;
        if(a==2){
            cin>>b;pos=i;Max=max(Max,b);
            B[i]=b;
        }
        if(a==1){
            cin>>p>>b;
            C[p]=i;
            A[p]=b;
        }
    }
    for(int i=pos;i>=1;i-- ){
        max1=max(max1,B[i]);
        B[i]=max1;
    }

    for(int i=1;i<=n;i++){
        ll Pos=C[i];
        ll value=B[Pos];

        if(A[i]>Max)continue;
        if(Pos==0){A[i]=Max;continue;}

        if(A[i]<value)A[i]=value;
    }

    for(int i=1;i<=n;i++)cout<<A[i]<<" ";

    return 0;
}
