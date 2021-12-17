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

ll f (ll n){

return (n*(n-1))/2;
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
    ll Min,Max;
    ll n,m;
    ll cnt=0,cntr=0,sum=0,ans=1;
    ll p,q,r;
    ll v=1;
    ll check=0;
    ll x,y,z;
    string s,s1[MAX],s2[MAX],s3,s4;

    cin>>n>>m;

    if (n%m==0){
        cout<<f((n/m))*m<<" ";
        if (m>1)Max=f(n-m+1);
        else Max=f(n);
        cout<<Max<<endl;
    }
    else {
        Max=f(n-m+1);
        x=n/m;
        y=n-x*m;
        p=y*f(x+1);
        q=(m-y)*f(x);
        Min=p+q;

        cout<<Min<<" "<<Max<<endl;
    }
    return 0;
}
