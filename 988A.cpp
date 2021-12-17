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

ll rev (ll a,ll b){

    return a>b;
}

int main ()
{

    fastIO();

    ll a,b,c;
    ll n,m;
    ll cnt=0,cntr=0,sum=0,ans=1;
    ll p,q,r;
    ll v=1;
    ll check=0;
    ll x,y,z;
    ll Max=0,Min=INT_MAX;
    string s,s1[MAX],s2[MAX],s3,s4;
    map<int,int>S;
    map<int,int>:: iterator it;

    cin>>n>>m;

    for (int i=0;i<n;i++){
        cin>>A[i];
        S.insert(mp(A[i],i+1));
    }
    if (S.size()<m)cout<<"NO"<<endl;
    else {
        cout<<"YES"<<endl;
        for (it=S.begin();it!=S.end();it++){
            cout<<it->second<<" ";cntr++;
            if (cntr==m)break;
        }
    }
    return 0;
}
