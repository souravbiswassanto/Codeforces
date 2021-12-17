#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  500006
#define  MAX1  10000008
#define  mem(a,v)   memset(a,v,sizeof(a))

template <typename T>
T mymax (T a,T b){return (a>b)?a:b;}
template <typename T>
T mymin (T a,T b){return (a<b)?a:b;}
template <typename T>
T myabs (T a){return (a<0)?(-1*a):a;}
template <typename T>
T mysqrt (T x){if (x == 0 | x == 1)return x;int start = 1, End = x, ans;while (start <= End){int mid = (start + End) / 2;if (mid*mid == x)return mid;if (mid*mid < x){start = mid + 1;ans = mid;}else End = mid-1;}return ans;}

void fastIO (){ios_base::sync_with_stdio(false);cin.tie(0); cout.precision(20);}

ll A[MAX];
ll B[MAX];
ll C[MAX];
vector<ll>graph[MAX];
vector< ll >V;
vector< ll >Ans;
vector< pair<ll,ll> >VP;
map< ll,ll >M;
vector<ll>prime;
bool mark[MAX1];
ll visited[MAX];
ll N=1e7;
void seive (){int limit = sqrt(N*1.0)+2;mark[1]=1;for (int i=4;i<=N;i+=2)mark[i]=1;prime.push_back(2);for (int i=3;i<=N;i+=2){if(!mark[i]){prime.push_back(i);if(i<=limit){for (int j=i*i;j<=N;j+=i*2)mark[j]=1;}}}}
ll cntr;
void dfs(ll source){

    visited[source]=1;
    for(int i=0;i<graph[source].size();i++){
        ll v=graph[source][i];

        if(visited[v]==0){
            cntr++;
            dfs(v);
        }
    }

}

int main ()
{
    fastIO();
    ll a,b,c,n,m,k,p,q,r;
    ll cnt=0,sum=0,ans=0,check=0;
    float x,y,z;
    ll Max= 0,Max1=-1e18+1;
    ll Min = 1e18;
    string s,s1,s3,s4;

    cin>>n>>m>>k;

    for(int i=0;i<k;i++){
        cin>>A[i];
    }

    for(int i=0;i<m;i++){
        cin>>a>>b;

        graph[b].pb(a);
        graph[a].pb(b);
    }

    for(int i=0;i<k;i++){
        dfs(A[i]);
        p=cntr;p++;
        cntr=0;
        Max=mymax(p,Max);
        V.pb(p);
    }
    sort(V.begin(),V.end());


    for(int i=0;i<V.size()-1;i++){
        sum+=V[i];
        ans+=((V[i]*(V[i]-1))/2);
    }
    sum+=Max;
    ll baki=n-sum;

    Max+=baki;
    ans+=((Max*(Max-1))/2);

    cout<<(ans-m)<<endl;


    return 0;
}
