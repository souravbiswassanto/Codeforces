#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define MAX1 1000000

bool prime[10000000];
vector <ll>  v1;


void seive (){

    ll v=0;
    v1.pb(2);
    v=1;
    for (ll i=2;i<=MAX1;i+=2){
        prime[i]=1;
    }
    for (ll i=3;i<=MAX1;i+=2){
        if (prime[i]==0){
            v1.pb(i);
            for (ll j=i*2;j<=MAX1;j+=i){
                prime[j]=1;
            }
        }
    }

}

void fastIO (){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}

int main ()
{

    ///freopen("output.txt","w",stdout);

    fastIO();
    seive();
    ll n;
    ll m;
    ll cnt=0;
    ll p,q,r;
    ll cntr=0;
    ll v=0;
    ll check=0;
    ll x,y,z;

    cin>>n;

    for (int i=1;i<=n;i++){
        cin>>p;
        if (p==1){
            cout<<"NO"<<endl;
            continue;
        }
        q=sqrt(p);
        if (q*q==p){
            //bool x=find(v1.begin(),v1.end(),q)!=v1.end()?1:0;
            bool x=binary_search(v1.begin(),v1.end(),q);

            if (x){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}



