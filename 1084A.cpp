#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 100000000000000000
#define pb push_back
#define mp make_pair

ll max(ll a,ll b) {if(a>b) return a; else return b;} ll min(ll a,ll b) {if(a<b) return a; else return b;}
ll pow(ll B,ll P) { ll S=1; for(ll i=1;i<=P;i++) S=S*B; return S;} ll fx4[]={1,-1,0,0}; ll fy4[]={0,0,1,-1};

ll A[29999];

int main()
{
    ///use always ll instead of int
    //sieve();

    ll T,N,M,X,Y,W;

    cin>>N;

    for(int i=1;i<=N;i++) cin>>A[i];

    ll ans=INT_MAX;

    for(int x=1;x<=N;x++)
    {
        ll S=0;
        for(int i=1;i<=N;i++)
        {
            X=2*(abs(i-x))+2*(x-1)+2*(i-1);
            S+=(A[i]*X);
        }

        ans=min(ans,S);
    }

    cout<<ans<<endl;

    return 0;
}
