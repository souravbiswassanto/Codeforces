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

    ll a,b,c,h;
    ll n,m,n1,n2,h1,h2;
    ll cnt=0,cntr=0,sum=0,ans=1;
    ll p,q,r;
    ll v=1;
    ll check=0;
    ll x,y,z;
    ll Max=0,Min=INT_MAX;
    string s,s1,s3,s4;

    cin>>n>>h>>a>>b>>q;


    for (int i=1;i<=q;i++){
        cin>>n1>>h1;
        cin>>n2>>h2;
        x=0,y=0;

        if (n1==n2){
            cout<<abs(h1-h2)<<endl;
            continue;
        }
        x=abs(h1-a)+abs(n1-n2)+abs(h2-a);
        y=abs(h1-b)+abs(n1-n2)+abs(h2-b);
        //cout<<x<<y<<endl;
        if (x==y)cout<<x<<endl;
        else cout<<min(x,y)<<endl;


    }


    return 0;
}
