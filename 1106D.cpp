#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 100000000000000000
#define pb push_back
#define mp make_pair
//#define MAXX 10000000
//vector<ll> Primes; ll isprime[MAXX+2]; bool Ar[MAXX+100];
//void sieve(){
//    Ar[0]=1; Ar[1]=1;
//    for (ll i = 2; i <= MAXX; i++) {
//        if(Ar[i] == false) {
//            Primes.push_back(i);
//            isprime[i]=1;
//            for (ll j = 2 * i; j <= MAXX; j = j + i) {
//                Ar[j] = true;
//            }
//        }
//    }
//}
//double mysqrt(ll N){
//    double high,low,mid; high=(double)N;low=0.0;for(ll i=1;i<=64;i++){ mid=(high+low)/2; if(mid*mid>N) high=mid; else low=mid;}
//    return mid;}
//ll mod(ll B,ll M){ll X=B%M; if(X>=0) return X; else return M+X;}
//ll bigmod(ll B,ll P,ll M){ if(P==0) return 1; else if(P%2==0) { ll R=bigmod(B,P/2,M); return ((R%M)*(R%M))%M;}
//    else { ll R=bigmod(B,P-1,M); return ((R%M)*(B%M))%M;}
//}
///cin.ignore();
ll max(ll a,ll b) {if(a>b) return a; else return b;} ll min(ll a,ll b) {if(a<b) return a; else return b;}
ll power(ll B,ll P){ if(P==0) return 1; ll X=power(B,P/2); if(P%2==0) return X*X; else return B*X*X;}
ll fx4[]={1,-1,0,0}; ll fy4[]={0,0,1,-1};

vector <ll> G[200006];

ll Mark[200006];

vector <ll> ans;

struct edge{
    ll node;
    edge(ll a)
    {
        node=a;
    }
};

bool operator<(edge a, edge b)
{
    return a.node>b.node;
}

void BFS(int S)
{
    Mark[S]=1;
    priority_queue<edge> PQ; PQ.push(S);

    while(!PQ.empty())
    {
        ll U=PQ.top().node; PQ.pop();

        ans.pb(U);

        for(int i=0;i<G[U].size();i++)
        {
            ll V=G[U][i];

            if(Mark[V]==0)
            {
                Mark[V]=1;
                PQ.push(edge(V));
            }
        }
    }
}

int main()
{
    ///use always ll instead of int
    //sieve();

    ll T,N,M,X,Y,W;

    cin>>N>>M;

    for(int i=1;i<=M;i++)
    {
        cin>>X>>Y;
        G[X].pb(Y);
        G[Y].pb(X);
    }

    BFS(1);

    for(int i=0;i<N;i++) cout<<ans[i]<<" "; cout<<endl;

    return 0;
}
