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
    string s,s1[MAX],s2[MAX],s3,s4;

    cin>>s;

    q=s[s.size()-1]-48;
    for (int i=0;i<s.size();i++){
        p=s[i]-48;
        if (p%2==0){
            check=1;
        }

        if (p%2==0&&p<q){
            s[i]=s[s.size()-1];
            s[s.size()-1]=p+48;
            cntr=1;
            break;
        }
        else if (p%2==0){
            a=s[i]-48;
            b=i;
        }
    }

    if (check&&cntr)cout<<s<<endl;
    else if (check&&!cntr){
        s[b]=q+48;
        s[s.size()-1]=a+48;
        cout<<s<<endl;
    }
    else cout<<"-1"<<endl;

    return 0;
}

