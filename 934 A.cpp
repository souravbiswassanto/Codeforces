#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
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

int main ()
{

    ///freopen("output.txt","w",stdout);

    fastIO();
    vector<ll> V;
    set<ll>S;
    set<ll>::iterator it;
    map<ll,ll> M;

    ll a,b,c;
    ll n,m;
    ll cnt=0,cntr=-1000000000000000000;
    ll p,q,r;
    ll v=0;
    ll ans=0;
    ll check=0;
    ll x,y,z;
    string s,s1,s2,s3;

    cin>>n>>m;

    rep cin>>A[i];
    Rep cin>>B[i];

    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            x=A[i]*B[j];
            if (x>cntr){
                cntr=x;
                y=i;
            }
        }
    }
    for (int i=0;i<n;i++){
        if (i==y)continue;
        for (int j=0;j<m;j++){
            V.pb(A[i]*B[j]);
        }
    }

    sort (V.begin(),V.end());
    cout<<V[V.size()-1]<<endl;
    return 0;
}



