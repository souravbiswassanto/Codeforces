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
bool sourav (string a,string b){
    return a.length()< b.length();
}
int main ()
{

    fastIO();
    vector<string> V;
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

    cin>>n;

    for (int i=0;i<n;i++){
        cin>>s;
        V.pb(s);
    }

    sort(V.begin(),V.end(),sourav);

    for (int i=0;i<n-1;i++){
        check=0;
        for (int j=0;j<V[i+1].length();j++){
            s1=V[i+1].substr(j,V[i].length());
            if (s1==V[i])check=1;
        }
        if (check==0){
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;
    for (int i=0;i<n;i++)cout<<V[i]<<endl;

    return 0;
}
