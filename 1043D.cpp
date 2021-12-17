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

ll A[12][100007];
ll parent[12][100007];
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
    ll Max=0,Min=INT_MAX;
    string s,s1,s3,s4;

    cin>>n>>m;

    for (ll i=1;i<=m;i++){
        for (ll j=1;j<=n;j++){
            cin>>A[i][j];
            parent[i][A[i][j]]=A[i][j-1];
        }
    }
    for (ll i=1;i<=n;i++){
        check=1;
        if (i==1){sum+=1;C[i]=1;continue;}
        for (ll j=2;j<=m;j++){
            if (parent[1][A[1][i]]!=parent[j][A[1][i]])check=0;
        }
        if (check==0)C[i]=1;
        else C[i]=(C[i-1]+1);
        sum+=C[i];
    }

    cout<<sum<<endl;

    return 0;
}
