#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  500006
#define  MAX1  10000008
#define  mem(a,v)   memset(a,v,sizeof(a))

void fastIO (){ios_base::sync_with_stdio(false);cin.tie(0); cout.precision(20);}

ll A[MAX];
ll B[MAX];
ll C[MAX];

int main ()
{
    fastIO();
    ll a,b,c,n,m,k,p,q,r;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    int t;
    cin>>t;

    while(t--){
        cin>>A[0]>>A[1]>>A[2];
        sort(A,A+3);
        sum=A[0]+A[1];
        if(sum<A[2]){
            cout<<sum<<endl;continue;
        }
        ans=(A[0]+A[1]+A[2])/2;

        cout<<ans<<endl;
    }

    return 0;
}
