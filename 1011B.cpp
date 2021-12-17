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
    vector<pair <int,int> > V;

    ll a,b,c;
    ll n,m;
    ll cnt=0,cntr=0,sum=0,ans=1;
    ll p,q,r;
    ll v=1;
    ll check=0;
    ll x,y,z;
    ll Max=0,Min=INT_MAX;
    string s,s1[MAX],s2[MAX],s3,s4;

    cin>>n>>m;

    for (int i=0;i<m;i++){
        cin>>a;
        A[a]++;
    }

    for (int i=1;i<=100;i++){
        if (A[i]!=0)B[cntr++]=A[i];
    }

    sort(B,B+cntr,rev);
    ll div=m/n;

    if (div==0){
        cout<<0<<endl;
        return 0;
    }
    div++;
    while (div--){
        sum=0;
        for (int i=0;i<cntr;i++){
            sum+=(B[i]/div);
        }

        if (sum>=n){
            cout<<div<<endl;
            return 0;
        }
    }
    cout<<0<<endl;

    return 0;
}
