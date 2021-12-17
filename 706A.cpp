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

    float a,b,c;
    ll n,m;
    ll cnt=0,cntr=0,sum=0,ans=1;
    float p,q,r;
    float v;
    ll check=0;
    float x,y,z;
    float Max=0,Min=INT_MAX;
    string s,s1,s3,s4;

    cin>>x>>y;

    cin>>n;

    for (int i=0;i<n;i++){
        cin>>a>>b>>v;
        p=a-x;
        q=b-y;
        r=sqrt((p*p)+(q*q));
        c=(float)r/(float)v;
        if (Min>c)Min=c;
    }

    printf("%.20f\n",Min);

    return 0;
}
