#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  300006
#define  mem(a,v)   memset(a,v,sizeof(a))

 vector<ll > V;

void fastIO (){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}

ll A[MAX];
ll B[MAX];
ll C[MAX];

ll a,b,c,n,m,k,p,q,r;

ll Count(ll b,ll e)
{
    ll X=upper_bound(V.begin(),V.end(),b)-V.begin();
    ll Y=upper_bound(V.begin(),V.end(),e)-V.begin();

    Y--;

    return Y-X+1;
}

ll rc (ll left,ll right){

    ll C=Count(left,right);

    if(C==0) return a;

    if(left==right)
    {
        if(C==0) return a;
        else return C*b*(right-left+1);
    }

    ll mid=(left+right)/2;

   ll L= rc(left,mid);
   ll R= rc(mid+1,right);

}

int main ()
{

    fastIO();


    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    float x,y,z;
    ll Max=-1e18;
    unsigned long long Min = 1e20;
    string s,s1,s3,s4;

    cin>>n>>k>>a>>b;


    for (ll i=0;i<n;i++){
        cin>>c;
        V.pb(c);
    }

    ll ans=rc(1,1<<n);

    cout<<ans<<endl;


    return 0;
}
