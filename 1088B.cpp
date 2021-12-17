#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 100000000000000000
#define pb push_back
#define mp make_pair

ll max(ll a,ll b) {if(a>b) return a; else return b;} ll min(ll a,ll b) {if(a<b) return a; else return b;}
ll pow(ll B,ll P) { ll S=1; for(ll i=1;i<=P;i++) S=S*B; return S;} ll fx4[]={1,-1,0,0}; ll fy4[]={0,0,1,-1};

int A[200006];

int ans[2000004];

int main()
{
    ///use always ll instead of int
    //sieve();

    ll T,N,K,M,X,Y,W;

    cin>>N>>K;

    set<ll> S;

    for(int i=1;i<=N;i++)
    {
        cin>>A[i];
    }

    sort(A+1,A+N+1);

    ll prop=0,MIN=INT_MAX;
    int j=1;
    for(int i=1;i<=N;i++)
    {
        MIN=A[i]-prop;

        if(MIN==0) continue;

        ans[j++]=MIN;
        prop+=MIN;
    }

    for(int i=1;i<=K;i++) cout<<ans[i]<<endl;

    return 0;
}
