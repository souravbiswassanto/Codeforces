#include <bits/stdc++.h>
using namespace std ;

#define     ll   long long
#define    pb    push_back
#define   mp  make_pair
#define MAX          1000006

void fastIO (){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}

ll a[MAX];
ll b[MAX];
ll c[MAX];

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
    ll sum=0;

    cin>>n>>m;

    for (ll i=0;i<m;i++){
        cin>>a[i];
    }

    for (ll i=0;i<m-1;i++){
        if (a[i+1]>a[i]){
            sum=sum+(a[i+1]-a[i]);
            //cout<<sum<<endl;
        }
        if (a[i+1]<a[i]){
            sum+=(n-a[i]+a[i+1]);
            //cout<<sum<<endl;
        }
    }
    sum=sum+(a[0]-1);
    cout<<sum<<endl;
    return 0;
}



