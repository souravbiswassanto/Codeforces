#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  200006
#define  Max(a,b,c) max(a,max(b,c))
#define  Min(a,b,c) min(a,min(b,c))
#define  mem(a,v)   memset(a,v,sizeof(a))
#define  rep        for (int i=0;i<n;i++)
#define  Rep        for (int i=0;i<m;i++)

void fastIO (){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}

ll A[MAX];
ll B[MAX];
ll C[MAX];

ll rev (ll a,ll b){

    return a>b;
}

int main ()
{

    fastIO();
    vector<ll> V;
    set<ll>S;
    set<ll>::iterator it;

    ll a,b,c;
    ll n,m,k;
    ll cnt=0,cntr=0,sum=0,ans=1;
    ll p,q,r;
    ll v=1;
    ll check=0;
    ll x,y,z;
    ll Max=0,Min=INT_MAX;
    string s,s1,s3,s4;

    cin>>n>>k;

    x=2*k+1;
    y=k+1;
    int rem=n%x;

    if (k>=n){
        cout<<1<<endl;
        cout<<n<<endl;
    }
    else if (rem>=k+1||rem==0){
        p=ceil((float)n/x);
        cout<<p<<endl;
        ans=k+1;
        for (int j=1;j<=p;j++){
            cout<<ans<<" ";
            ans+=x;
        }
    }
    else {
        int baki=y-rem;
        p=ceil((float)n/x);
        ans=k+1;
        ans-=baki;
        cout<<p<<endl;
        for (int j=1;j<=p;j++){
            cout<<ans<<" ";
            ans+=x;
        }
    }

    return 0;
}
