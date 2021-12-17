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
    ll Max=0;
    unsigned long long Min = 1e20;
    string s,s1,s3,s4;

    cin>>n;

    for (int i=0;i<n;i++)cin>>A[i];

    if (A[0]!=0){cout<<1<<endl;return 0;}

    for (int i=0;i<n-1;i++){
        Max=(Max,A[i]);
        if (A[i+1]>Max&&(Max+1)!=A[i+1]){
            cout<<i+2<<endl;
            return 0;
        }
    }

    cout<<-1<<endl;

    return 0;
}
