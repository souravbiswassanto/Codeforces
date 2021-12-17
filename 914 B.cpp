#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  100006

void fastIO (){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}


int main ()
{

    ///freopen("output.txt","w",stdout);

    fastIO();
    ll n;
    ll m;
    ll cnt=0;
    ll p,q,r;
    ll cntr=0;
    ll v=0;
    ll check=0;
    ll x,y,z;
    string s,s1,s2;

    while(cin>>n)
    {
        v=0;
        cntr=0;
        ll a[MAX];

        for (ll i=0;i<n;i++){
            cin>>a[i];

            if (a[i]>v)
                v=a[i];
        }

        for (ll i=0;i<n;i++){
            if (a[i]==v){
                cntr++;
            }
        }

        if (cntr%2==1)
            cout<<"Conan"<<endl;
        if (cntr%2==0)
            cout<<"Agasa"<<endl;
    }

    return 0;
}



