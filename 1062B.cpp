#include <bits/stdc++.h>
using namespace std;
#define MAX 100006
#define ll long long


vector <ll> primes;

bool C[MAX+100];

void sieve()
{
    primes.push_back(2);

    for(ll i=2; i<=MAX; i+=2)
        C[i]=1;

    for(ll i=3; i<=MAX; i+=2)
    {
        if(C[i]==0)
        {
            primes.push_back(i);
            for(ll j=i*2 ; j<=MAX; j+=i)
                C[j]=1;
        }
    }

}

ll pfactor[MAX];
ll pfactor1[MAX];
ll power[MAX];
ll pfactor_size,v;

void prime_factor(ll N)
{
    ll Count=0;
    for(ll i=0; i<=MAX && primes[i]*primes[i]<=N; i++)
    {
        if(N%primes[i]==0)
        {
            pfactor[Count]=primes[i]; ///je prime dia vag kora jabe take array te save kore rakhbo.
            Count++;
        }
        while(N%primes[i]==0) ///oi prime diya koto bar vag kora jay toto power hobe.
        {
            power[Count-1]++;
            pfactor1[v++]=primes[i];
            cout<<pfactor1[v-1]<<endl;
            N=N/primes[i];
        }

    }
    if(N!=1)
    {
        pfactor1[v++]=N;
        cout<<pfactor1[v-1]<<endl;
        pfactor[Count]=N;
        power[Count]=1;
        Count++;
    }
    pfactor_size=Count;
}

ll A[MAX];
ll B[MAX];

int main()
{
    sieve();
    ll N,ans=0,sum=1,Max=0,check,counter;
    set<ll> S;
    set<ll>::iterator it;
    cin>>N;
    prime_factor(N);

    for (int i=0; i<v; i++)
    {
        S.insert(pfactor1[i]);
        A[pfactor1[i]]++;
    }

    for (it=S.begin(); it!=S.end(); it++)sum*=(*it);

    while (!S.empty())
    {
        check=0;

        for (it=S.begin(); it!=S.end(); it++)
        {
            //cout<<"AAAAAAAA "<<*it<<endl;
            if (A[*it]%2!=0)check=1;
            //cout<<A[*it]<<" A[it]"<<*it<<endl;

        }
        //cout<<"CHeck "<<check<<endl;
        if (check)
        {
            for (it=S.begin(); it!=S.end(); it++)
            {
                if (A[*it]%2==1)
                {
                    A[*it]++;
                    //cout<<*it<<"kll "<<A[*it]<<endl;
                }
                //cout<<" N 1"<<endl;
            }
            ans++;
        }
        else
        {
            counter=0;
            for (it=S.begin(); it!=S.end(); it++)
            {

                A[*it]=A[*it]/2;
                //cout<<*it<<" KJJ "<<A[*it]<<endl;
                //cout<<S.size()<<" S.size() "<<endl;

                if (A[*it]==1)
                {
                    counter++;

                }

            }

            ans++;
            if (counter==S.size())break;
        }

    }
    if (sqrt(N)*sqrt(N)==N)cout<<sum<<" "<<ans-1<<endl;
    else cout<<sum<<" "<<ans<<endl;

}
