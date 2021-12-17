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

    cin>>n>>m;

    if(m%n){
        cout<<-1<<endl;
        return 0;
    }
    a=m/n;
    if (m==n){
        cout<<0<<endl;
        return 0;
    }

    while(a%2==0){
        a/=2;
        cntr++;
    }
    while(a%3==0){
        a/=3;
        cntr++;
    }

    if(a==1){
        cout<<cntr<<endl;
    }
    else cout<<-1<<endl;

    return 0;
}
