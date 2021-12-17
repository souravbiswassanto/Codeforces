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

int main ()
{

    fastIO();

    ll a,b,c,n,m,k,p,q,r;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    float x,y,z;
    ll Max=-1e18;
    unsigned long long Min = 1e20;
    string s,s1,s3,s4;


    cin>>m;

    for (int j=1;j<=m;j++){

    sum=0;
    cin>>n;


    for(int i=0;i<n;i++){
        cin>>A[i];
        if(A[i]%3==0)B[0]++;
        else if(A[i]%3==1)B[1]++;
        else B[2]++;
    }

    sum+=B[0];

    a=min(B[1],B[2]);
    sum+=a;
    B[1]-=a;
    B[2]-=a;
    sum+=(B[1]/3);
    sum+=(B[2]/3);

    cout<<sum<<endl;
    mem(B,0);
    }
    return 0;
}
