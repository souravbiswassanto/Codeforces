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

ll A[MAX];
ll B[MAX];
ll C[MAX];

ll rev (ll a,ll b){

    return a>b;
}
struct process{
    ll gap;
    ll first;
    ll second;
    process(ll a,ll b,ll c)
    {
        gap=a;
        first=b;
        second=c;
    }
};

bool send(process a,process b)
{
    return a.gap<b.gap;
}

int main()
{

    ll N,M;

    cin>>N>>M;

    vector <process> V;

    ll sum=0;

    for(ll i=1;i<=N;i++)
    {
        cin>>A[i]>>B[i];
        sum+=B[i];
        V.pb(process(A[i]-B[i],A[i],B[i]));
    }

    if(sum>M)
    {
        cout<<-1<<endl; return 0;
    }

    sort(V.begin(),V.end(),send);


    ll ans=N;

    for(ll i=0;i<N;i++)
    {
        ll x=sum-V[i].second+V[i].first;

        if(x<M)
        {
            sum+=(V[i].first-V[i].second);
            ans--;
        }

        else if(x==M)
        {
            ans--;
            break;
        }


    }

    cout<<ans<<endl;

    return 0;
}
