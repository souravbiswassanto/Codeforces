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
    vector<pair <ll,ll> > V;
    vector<ll> V1;
    set<ll>S;
    set<ll>::iterator it;

    ll a,b,c;
    ll n,m;
    ll cnt=0,cntr=0,sum=0,ans=1;
    ll p,q,r;
    ll v=1;
    ll check=0;
    ll x,y,z;
    ll Max=0,Min=INT_MAX;
    string s,s1,s3,s4;

    cin>>n;

    for (int i=1;i<=n;i++){
        cin>>A[i];
        V.pb(mp(A[i],i));
    }

    sort(V.begin(),V.end());

    for (int i=1;i<=n;i++)B[i]=(V[i-1].first+B[i-1]);

    for (int i=1;i<n;i++){
        sum=B[n]-V[i-1].first;
        if (sum%V[n-1].first==0&&sum/V[n-1].first==2){cntr++;V1.pb(V[i-1].second);}
    }

    sum=B[n]-V[n-1].first;

    if (sum%V[n-2].first==0&&sum/V[n-2].first==2){cntr++;V1.pb(V[n-1].second);}

    cout<<cntr<<endl;

    for (int i=0;i<cntr;i++)cout<<V1[i]<<" ";

    return 0;
}
