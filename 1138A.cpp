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
    ll cnt=0,cntr=1,sum=0,ans=1,check=0;
    float x,y,z;
    ll Max=0;
    long long Min = 1e18;
    string s,s1,s3,s4;

    cin>>n;

    for (int i=0;i<n;i++){
        cin>>A[i];
    }

    for (int i=0;i<n;i++){
        if (A[i]!=A[i+1]){
            B[i]=cntr;
            cntr=1;
        }
        else cntr++;

    }

    for (int i =0;i<n;i++){
        if (B[i]==0)continue;
        C[cnt++]=B[i];
    }
    for (int i = 0 ;i<cnt;i++){
        Min = min (C[i],C[i+1]);
        Max = max (Min,Max);
    }
    cout<<Max*2<<endl;
    return 0;
}
