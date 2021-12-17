#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  come_on_xcpt_hoia_ja_oh_god  main
#define  pb  push_back
#define  mp  make_pair
#define  MAX  1000006
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

int come_on_xcpt_hoia_ja_oh_god ()
{

    ///freopen("output.txt","w",stdout);

    fastIO();
    vector<ll> V;
    set<ll>S;
    set<ll>::iterator it;
    map<ll,ll> M;

    ll a,b,c;
    ll n,m;
    ll cnt=0,cntr=0,sum=0,ans=1;
    ll p,q,r;
    ll v=0;
    ll check=0;
    ll x,y,z;
    string s,s1,s2,s3;

    cin>>n;

    for (int i=0;i<n;i++){
        cin>>a;
        if (a<0)cntr+=a;
        else sum+=a;
    }
    cout<<sum-cntr<<endl;

    return 0;
}



