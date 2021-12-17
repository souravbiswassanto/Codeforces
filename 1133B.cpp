#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 999999999999999999
#define pb push_back
#define Max 300006
#define mp make_pair

ll A[Max];
ll sum[3000];
ll C[Max];

int main()
{
    ll n;
    ll k;
    ll cntr = 0,ans=0;;

    cin>>n>>k;

    for(int i=1; i<=n; i++)
    {
        cin>>A[i];
    }

    for(int i=1; i<=n; i++)
    {
        ll a =A[i]%k;
        sum[a]++;
    }

    for(int i=1; i<=n; i++)
    {
        ll a=A[i]%k;
        ll b=k-a;
        if(b==k) b=0;
        if(a==b) ans=sum[a]/2;
        else ans=min(sum[a],sum[b]);
        sum[a]-=ans;
        sum[b]-=ans;
        cntr+=(ans*2);
    }

    cout<<cntr<<endl;

    return 0;
}
