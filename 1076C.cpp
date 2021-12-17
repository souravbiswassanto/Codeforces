#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 100000000000000000
#define pb push_back
#define mp make_pair

ll max(ll a,ll b) {if(a>b) return a; else return b;} ll min(ll a,ll b) {if(a<b) return a; else return b;}
ll pow(ll B,ll P) { ll S=1; for(ll i=1;i<=P;i++) S=S*B; return S;} ll fx4[]={1,-1,0,0}; ll fy4[]={0,0,1,-1};


int main()
{
    ///use always ll instead of int
    //sieve();

    ll T,N,M,X,Y,W;

    ll A[200005];

    cin>>N;

    for(int i=1;i<=N;i++) cin>>A[i];

    Y=0;

    for(int i=1;i<=N;i++)
    {
        X=A[i];
        int Count=0;

        int S=i; int E=i;

        for(int j=i;j<=N;j++)
        {
            if(A[j]!=X)
            {
                E=j-1; break;
            }
            X++;
            Count++;
            E=j;
        }

        if(A[S]!=1) Count--;
        if(A[E]!=1000) Count--;

        Y=max(Y,Count);


    }

    cout<<Y<<endl;

    return 0;
}
