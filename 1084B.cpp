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

    ll a,b,c,s,n,m,k,p,q,r;
    ll cnt=0,cntr=0,sum=0,ans=0,check=0;
    float x,y,z;
    ll Max=-1e18;
    unsigned long long Min = 1e20;
    string s1,s3,s4;

    cin>>n>>s;

    for (int i=0;i<n;i++){
        cin>>A[i];
        Min=(Min,A[i]);
        ans+=A[i];
    }

    if (ans<s){cout<<-1<<endl;return 0;}

    for (int i=0;i<n;i++){
        s-=(A[i]-Min);
    }

    if (s<=0){cout<<Min<<endl;}
    else {a=s/n;if (s%n)a++;cout<<Min-a<<endl;}

    return 0;
}
