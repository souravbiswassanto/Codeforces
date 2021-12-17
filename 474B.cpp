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
    ll start=0,mid=0,last=0,ans=1;
    ll p,q,r;
    ll v=1;
    ll check=0;
    ll x,y,z;
    string s,s1[MAX],s2[MAX],s3,s4;

    cin>>n;

    rep {
        cin>>a;
        A[i+1]=A[i]+a;

    }

    cin>>m;

    for (int i=1;i<=m;i++){
        cin>>B[i];
        start=1;
        last=n;
        while(1){
            mid=(start+last)/2;

            if (B[i]==A[mid]||mid==start||mid==last){
                if (A[mid]==B[i])cout<<mid<<endl;

                 else   if (A[start]<B[i])
                    cout<<last<<endl;
                else cout<<start<<endl;
                    break;
            }
            else if (B[i]<A[mid]){
                last=mid;
            }
            else if (B[i]>A[mid]){
                start=mid;
            }
        }
    }

    return 0;
}
