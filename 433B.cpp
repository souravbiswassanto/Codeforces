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
ll D[MAX];

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
    ll n,m,l;
    ll cnt=0,cntr=0,sum=0,ans=1;
    ll p,q,r;
    ll v=1;
    ll check=0;
    ll x,y,z;
    ll Max=0,Min=INT_MAX,type;
    string s,s1,s3,s4;

    cin>>n;

    for (int i=1;i<=n;i++){cin>>A[i];B[i]=B[i-1]+A[i];C[i]=A[i];}
    sort(C+1,C+n+1);
    for (int i=1;i<=n;i++)D[i]=D[i-1]+C[i];

    cin>>m;
    for (int i=1;i<=m;i++){
        cin>>type>>l>>r;

        if (type==1){cout<<B[r]-B[l-1]<<endl;}
        if (type==2){cout<<D[r]-D[l-1]<<endl;}
    }

    return 0;
}
