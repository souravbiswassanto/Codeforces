#include <bits/stdc++.h>
using namespace std;
#define MAX 200000

typedef long long ll;

vector <ll> primes;

bool A[MAX+100];

void sieve()
{
    primes.push_back(2);

    for(ll i=2; i<=MAX; i+=2)
        A[i]=1;

    for(ll i=3; i<=MAX; i+=2)
    {
        if(A[i]==0)
        {
            primes.push_back(i);
            for(ll j=i*2 ; j<=MAX; j+=i)
                A[j]=1;
        }
    }

}



int main()
{
    sieve();
    ll N;
    cin>>N;
    ll X=N;

    ll ans=0;
    ll check=0;
    for (int i=2;i<=sqrt(N);i++){
        if (N%i==0){check=1;break;}
    }
    if (check==0)cout<<1<<endl;
    else if (N%2==0)cout<<N/2<<endl;
    else
    {
        for (ll i=0; i<primes.size(); i++)
        {
            if (N%primes[i]==0)
            {
                ans++;
                N-=primes[i];
                break;
            }

        }
        cout<<ans+N/2<<endl;
    }
}
