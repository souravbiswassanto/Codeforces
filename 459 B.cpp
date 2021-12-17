#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  100006
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
    map<string,ll> M;
    map<string,ll>::iterator it1;

    ll a,b,c;
    ll n,m;
    ll cnt=0,cntr=0,sum=0,ans=1;
    ll Max=0,Min=INT_MAX;
    ll p,q,r;
    ll v=1;
    ll check=0;
    ll x,y,z;
    string s,s1[MAX],s2[MAX],s3,s4;

    cin>>n;

    rep {
        cin>>a;
        if (a>Max){Max=a;cnt=0;}
        if(a<Min){Min=a;cntr=0;}
        if (a==Max)cnt++;
        if(a==Min)cntr++;
    }
    if (Max==Min){
        for (int i=cnt-1;i>=1;i--){
            sum+=i;
        }
        cout<<Max-Min<<" "<<sum<<endl;
        return 0;
    }
    cout<<Max-Min<<" "<<cnt*cntr<<endl;

    return 0;
}
