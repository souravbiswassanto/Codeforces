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
    vector<pair<int,int> > V;
    set<ll>S;
    set<ll>::iterator it;
    map<string,ll> M;
    map<string,ll>::iterator it1;

    ll a,b,c;
    ll n,m;
    ll cnt=0,cntr=0,sum=0,ans=1;
    ll p,q,r=0;
    ll v=1;
    ll check=0;
    ll x,y,z;
    ll Max=0,Min=INT_MAX;
    string s,s1[MAX],s2[MAX],s3,s4;

    cin>>n>>m;

    for (int i=0;i<n;i++){
        cin>>B[i];
        V.pb(mp(B[i],i));
    }
    sort(V.begin(),V.end());
    reverse(V.begin(),V.end());
    x=n/m;
    y=n%m;
    ll C[m];
    if(y){
        for (int i=0;i<V.size();i++){
            p=V[i].first;
            q=p%m;
            if (q<=y){
                r=V[i].second;
                A[r/m]=y;
                cout<<"y v "<<y<<" "<<V[i].second<<endl;
                C[r/m]=1;
                sum+=p;
                break;
            }
        }
    }
    for (int i=0;i<n;i++){
        if (C[V[i].second/m]!=1){
            A[V[i].second/m]=m;
            //cout<<"c "<<V[i].second<<endl;
            sum+=V[i].first;
            C[V[i].second/m]=1;
        }
    }

    cout<<sum<<endl;

    for (int i=1;i<=m;i++)cout<<A[i]<<" ";

    return 0;
}
