#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  300006
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
vector< pair<int,int> > V;

ll rev (ll a,ll b){

    return a>b;
}
int value1[MAX];
int value2[MAX];
int main ()
{

    fastIO();
    set<ll>S;
    set<ll>::iterator it;
    map<string,ll> M;
    map<string,ll>::iterator it1;

    ll a,b,c;
    ll n,m;
    ll cnt=0,cntr=0,sum=0,ans=1;
    ll p,q,r;
    ll v=1;
    ll check=0;
    ll x,y,z;
    ll Max=0,Min=INT_MAX;

    cin>>n>>m;
    ll v1=n,v2=n;
    for (int i=0;i<m;i++){
        cin>>a>>b;
        V.pb(mp(a,b));
    }

    for (int i=0;i<m;i++){
        if (value1[V[i].first]==0&&value2[V[i].second]==0){
            v1--;
            v2--;
            value1[V[i].first]=1;
            value2[V[i].second]=1;
            cout<<v1*v2<<" ";
        }
        else if (value1[V[i].first]*value2[V[i].second]==0){
            if (value1[V[i].first]==1)v2--;
            else v1--;

            value1[V[i].first]=1;
            value2[V[i].second]=1;

            cout<<v1*v2<<" ";
        }
        else cout<<v1*v2<<" ";
    }

    return 0;
}
