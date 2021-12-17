#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  100006
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
    vector< pair <int,int> > V;
    set<ll>S;
    set<ll>::iterator it;
    map<string,ll> M;
    map<string,ll>::iterator it1;

    ll a,b,c,d;
    ll n,m,l=0;
    ll cnt=0,cntr=0,sum=0,ans=1;
    ll p,q,r=1;
    ll v=1;
    ll check=0;
    ll x,y,z;
    ll Max=0,Min=INT_MAX,key;
    string s,s1[MAX],s2[MAX],s3,s4;

    cin>>n>>d;

    for (int i=1;i<=n;i++){
        cin>>a>>b;
        V.pb(mp(a,b));
    }

    sort(V.begin(),V.end());

    sum=V[0].second;
    key=V[r].first-V[l].first;

    while (l<n){
        if (key<d&&r!=n){
            sum+=V[r].second;
            r++;
            key=V[r].first-V[l].first;
            //Max=max(Max,sum);
        }
        else {
            Max=max(Max,sum);
            key-=(V[l+1].first-V[l].first);
            sum-=V[l].second;
            l++;
        }

    }

    cout<<Max<<endl;

    return 0;
}
