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
    string s,s1[MAX],s2[MAX],s3,s4;

    cin>>n;

    rep {
        cin>>A[i];

        if (A[i]==50&&check!=1){
            if (B[25]==0){
                check=1;
            }
            B[50]++;
            B[25]--;
        }
        if (A[i]==100&&check!=1){
            if (B[50]>0&&B[25]>0){
                B[50]--;
                B[25]--;
                continue;
            }
            else if (B[25]>=3){
                B[25]=B[25]-3;
                continue;
            }
            else check=1;
        }

        if (A[i]==25)B[25]++;
        //if (A[i]==50)B[50]++;
    }

    if (check)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

    return 0;
}
