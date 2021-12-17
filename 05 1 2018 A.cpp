#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  1000006

void fastIO (){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}

ll a[MAX];
ll b[MAX];
ll c[MAX];

int main ()
{

    ///freopen("output.txt","w",stdout);

    fastIO();
    ll n;
    ll m;
    ll B;
    ll cnt=0;
    ll p,q,r;
    ll cntr=0;
    ll v=0;
    ll check=0;
    ll x,y,z;
    ll sp=0,ps=0;
    string s,s1,s2;

    cin>>y>>B;

    cin>>p>>q>>r;

    x=(p*2)+q;
    z=(r*3)+q;

    if (x>y){
        sp=x-y;
    }
    if (z>B){
        ps=z-B;
    }

    v=sp+ps;

    cout<<v<<endl;

    return 0;
}



