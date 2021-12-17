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

    ll a,b,c;
    ll n,m;
    ll cnt=0,cntr=0,sum=0,ans=1;
    ll p,q,r;
    ll v=1;
    ll check=0;
    ll x,y,z;
    ll Max=0,Min=INT_MAX,pos=0;
    string s,s1,s3,s4;

    cin>>n>>m;
    cin>>s>>s1;

    for (int i=0;i<m-n;i++){
        cntr=0;
        for (int j=0;j<n;j++){
            if (s1[i+j]==s[j])cntr++;
        }
        if (cntr>Max){
            Max=cntr;
            pos=i;
        }
    }
    cout<<n-Max<<endl;

    for (int i=0;i<n;i++){
        if (s1[i+pos]!=s[i]){
            cout<<i+1<<" ";
        }
    }

    return 0;
}
