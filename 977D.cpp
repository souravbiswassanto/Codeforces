#include <bits/stdc++.h>
using namespace std ;

#define  ll   unsigned long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  200006

void fastIO ()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}

map< ll,ll>M;
map< ll,ll>M1;
map< ll,ll>C;

ll A[1000];
ll B[1000];
ll n;
ll counter;

ll BFS (ll s,ll n)
{
    queue<ll>q;
    counter=0;
    q.push(s);
    M1[s]=1;
    C[s]=1;
    B[counter++]=s;

    while (!q.empty())
    {
        ll u=q.front();
        q.pop();

        for (ll i=0; i<3; i++)
        {
            ll v=-1;
            if (i==0)v=u*2;
            if (i==2&&u%3==0)v=u/3;

            if (M[v]==1&&M1[v]==0)
            {
                q.push(v);
                C[v]=C[u]+1;
                B[counter++]=v;
                M1[v]=1;
                if (C[v]==n)return s;
            }
        }
    }
    return 0;

}


int main ()
{

    fastIO();
    vector<ll> V;

    ll a,b,c;
    ll m;
    ll cnt=0,cntr=0,sum=0,ans=1;
    ll p,q,r;
    ll v=1;

    cin>>n;

    for (ll i=0; i<n; i++)
    {
        cin>>A[i];
        M.insert(mp(A[i],1));
        M1.insert(mp(A[i],0));
        C.insert(mp(A[i],0));
    }

    for (ll i=0; i<n; i++)
    {
        ll source = BFS(A[i],n);
        if(source==A[i])
            break;
        for (ll j=0; j<n; j++)
        {
            M1[A[j]]=0;
            C[A[j]]=0;
        }

    }
    for (int i=0;i<n;i++)cout<<B[i]<<" ";

    return 0;
}
