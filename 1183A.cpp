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

int loop (int n){
    int sum=0;
    while(n!=0){
        int rem=n%10;
        sum+=rem;
        n/=10;
    }

    if(sum%4==0)return 1;
    else return 0;
}

int main ()
{

    fastIO();

    ll a,b,c,n,m,k,p,q,r;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    float x,y,z;
    ll Max=-1e18;
    unsigned long long Min = 1e20;
    string s,s1,s3,s4;

    cin>>n;

    while(n++){
        if(loop(n-1)){
            cout<<n-1<<endl;
            return 0;
        }
    }

    return 0;
}
