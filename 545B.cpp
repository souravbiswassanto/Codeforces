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

void fastIO ()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}

ll A[MAX];
ll B[MAX];
ll C[MAX];

ll rev (ll a,ll b)
{

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
    ll p,q,r;
    ll v=1;
    ll check=0;
    ll x,y,z;
    ll Max=0,Min=INT_MAX;
    string s,s1[MAX],s2,s3,s4;

    cin>>s;
    cin>>s2;

    for (int i=0; i<s.size(); i++)
    {
        if (s[i]!=s2[i])cntr++;
    }
    a=cntr/2;
    if (cntr%2)cout<<"impossible"<<endl;
    else
    {
        for (int i=0; i<s.size(); i++)
        {
            if (s[i]==s2[i])
            {
                cout<<"0";
            }
            else if (a){
                cout<<s[i];
                a--;
            }
            else cout<<s2[i];
        }
    }

    return 0;
}
