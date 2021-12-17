#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  300006
#define  mem(a,v)   memset(a,v,sizeof(a))

void fastIO (){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}

ll A[MAX];
ll B[MAX];
ll C[MAX];

int main ()
{

    fastIO();

    ll a,b,c,n,m,k,p,q,r;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    float x,y,z;
    ll Max=-1e18;
    unsigned long long Min = 1e20;
    string s,s1,s3,s4;

    cin>>n>>q;

    for (int i=1;i<=q;i++){
        cin>>A[i]>>B[i];

        for (int j = A[i];j<=B[i];j++){
            C[j]++;
        }
    }
    vector<int> V;
    for (int i=1;i<=n;i++){
        if (C[i]>=1)cntr++;
    }

    for (int i=1;i<=q;i++){
        cnt = 0;
        for (int j = A[i];j<=B[i];j++){
            sum = C[j]-1 ;

            if (sum==0)cnt++;

        }
        V.pb(cnt);
    }
    sort(V.begin(),V.end());

    cout<<cntr-(V[0]+V[1])<<endl;


    return 0;
}
