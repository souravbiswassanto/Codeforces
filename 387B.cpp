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

    for (int i=1;i<=n;i++){
        cin>>A[i];
    }

    for (int i=1;i<=m;i++){
        cin>>B[i];
    }

    sort(A+1,A+n+1);
    sort(B+1,B+m+1);

    for (int i=1;i<=n;i++){
        check=0;
        for (int j=1;j<=m;j++){
            if (B[j]>=A[i]){
                B[j]=-1;
                check=1;
                break;
            }
        }
    if (!check)cntr++;
    }

    cout<<cntr<<endl;

    return 0;
}
