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
    ll cnt=0,cntr=0,sum=0,ans=1,check=0,Value=0;
    float x,y,z;
    ll Max=1;
    unsigned long long Min = 1e20;
    string s,s1,s3,s4;

    cin>>n>>m;

    for (int i=0;i<n;i++){
        cin>>A[i];
        Value=max(A[i],Value);
    }

    if (n==1){cout<<0<<endl;return 0;}

    sort (A,A+n);

    for (int i=0;i<n-1;i++){
        if (A[i]==1)continue;
        if (check&&i!=n-1){
            if (Value>Max)Max++;

            sum+=((A[i]-Max)+(Max-1));
        }
        if (A[i]>1&&check==0){Max=2;sum+=(A[i]-2+1);check=1;}

    }

    if (Max<Value)sum+=Max;
    else sum+=(Max-1);
    if (A[0]!=1||A[0]!=2)sum-=1;
    cout<<sum<<endl;

    return 0;
}
