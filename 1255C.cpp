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
vector< ll >Ans;
vector< pair<ll,ll> >VP;
map< ll,ll >M;
vector<ll>prime;
bool mark[MAX1];
ll N=1e7;
void seive (){int limit = sqrt(N*1.0)+2;mark[1]=1;for (int i=4;i<=N;i+=2)mark[i]=1;prime.push_back(2);for (int i=3;i<=N;i+=2){if(!mark[i]){prime.push_back(i);if(i<=limit){for (int j=i*i;j<=N;j+=i*2)mark[j]=1;}}}}
vector<ll>V[6];
vector<ll>NV;
ll vis[100006];
map<ll,set<ll>>MS;

int main ()
{
    fastIO();
    ll a,b,c,n,m,k,p,q,r;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    float x,y,z;
    ll Max= 0,Max1=-1e18+1;
    ll Min = 1e18;
    string s,s1,s3,s4;

    cin>>n;

    for(int i=1;i<=n-2;i++){
        cin>>A[i]>>B[i]>>C[i];
          MS[A[i]].insert(B[i]);
          MS[A[i]].insert(C[i]);
          MS[B[i]].insert(A[i]);
          MS[B[i]].insert(C[i]);
          MS[C[i]].insert(B[i]);
          MS[C[i]].insert(A[i]);
    }

    for(int i=1;i<=n;i++){
        for(auto it:MS[i]){
            V[i].pb(it);
        }
    }

    for(int i=1;i<=n;i++){
        if(V[i].size()==2){
            a=i;break;
        }
    }
    vis[a]=1;
    NV.pb(a);
    for(int i=0;i<V[a].size();i++){
        if(V[V[a][i]].size()==3){
            a=V[a][i];break;
        }
    }
    NV.pb(a);
    vis[a]=1;
    cntr=1;
    for(int i=3;i<=n;i++){
        check=0;
        for(int j=0;j<V[a].size();j++){
            if(check)break;
            c=V[a][j];
            if(vis[c]==1)continue;
            for(int k=0;k<V[c].size();k++){
                if(V[c][k]==NV[cntr-1]){
                    NV.pb(V[a][j]);
                    a=V[a][j];
                    vis[a]=1;
                    check=1;
                    cntr++;
                    break;
                }
            }
        }
    }

    for(int i=0;i<NV.size();i++)cout<<NV[i]<<" ";

    return 0;
}
