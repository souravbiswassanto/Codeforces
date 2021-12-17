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
ll n=1e7+7;
vector<ll>prime;
vector<ll>primes;
bool mark[10000000];

void seive (){

    int limit = sqrt(n*1.0)+2;
    mark[1]=1;

    for (int i=4;i<=n;i+=2)mark[i]=1;

    prime.push_back(2);

    for (int i=3;i<=n;i+=2){
        if(!mark[i]){
            prime.push_back(i);

            if(i<=limit){
                for (int j=i*i;j<=n;j+=i*2)mark[j]=1;
            }
        }
    }

}


int main ()
{

    fastIO();

    ll a,b,c,m,k,p,q,r;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    float x,y,z;
    ll Max=-1e18;
    unsigned long long Min = 1e20;
    string s,s1,s3,s4;
    seive();
    cin>>a;
    if(a==1){
        cout<<1<<endl<<0<<endl;
        return 0;
    }
    for(int i=0;i<prime.size();i++){
        while(a%prime[i]==0&&a!=prime[i]){
            cntr++;
            if(cntr<=3)primes.pb(prime[i]);
            a/=prime[i];
        }
    }

    if(a!=1){
        if(cntr<=3)primes.pb(a);
    }

    if(primes.size()==1){
        cout<<1<<endl<<0<<endl;
    }
    else if(primes.size()==2){
        cout<<2<<endl;
    }
    else {
        cout<<1<<endl;
        cout<<primes[1]*primes[2]<<endl;
    }

    return 0;
}
