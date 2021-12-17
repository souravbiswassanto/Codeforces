#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  1000006
#define Min    100000000000014
#define rep    for (int i=0;i<n;i++)
#define rep1   for (int i=0;i<m;i++)

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

    ///freopen("output.txt","w",stdout);

    fastIO();
    ll n,m;
    ll a,b,c;
    ll cnt=0;
    ll p,q,r;
    ll cntr=0;
    ll v=0;
    ll check=0;
    ll x,y,z;
    string s,s1,s2;

    cin>>n;

    p=Min;

    rep cin>>A[i]>>B[i];

    rep {

        if (B[i]<p)
            p = B[i];

        cntr+=(A[i]*p);
    }

    cout<<cntr<<endl;

    return 0;
}



