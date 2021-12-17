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
vector< ll >V[MAX];
vector< ll >Ans1;
vector< ll >Ans;
vector< pair<ll,ll> >VP;
map< ll,ll >M;
vector<ll>prime;
bool mark[MAX1];
ll N=1e7;
void seive (){int limit = sqrt(N*1.0)+2;mark[1]=1;for (int i=4;i<=N;i+=2)mark[i]=1;prime.push_back(2);for (int i=3;i<=N;i+=2){if(!mark[i]){prime.push_back(i);if(i<=limit){for (int j=i*i;j<=N;j+=i*2)mark[j]=1;}}}}

int main ()
{
    fastIO();
    ll a,b,c,n,m,l,k,p,q,r;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    float x,y,z;
    ll Max= 0,Max1=-1e18+1;
    ll Min = 1e18;
    string s,s1,s3,s4;

    cin>>n;

    ll maxx,minn;


    for(int i=1;i<=n;i++){
        maxx=0;minn=1e18;
        cin>>l;
        for(int j=0;j<l;j++){
            cin>>a;
            V[i].pb(a);
            maxx=mymax(a,maxx);
            minn=mymin(a,minn);
        }
        B[i]=minn;
        Ans1.pb(maxx);
    }
    m=n;
    for (int i=1;i<=n;i++){
        check=0;
        Min=1e17;
        for(int j=0;j<V[i].size();j++){
            Min=mymin(Min,V[i][j]);
            if(V[i][j]>Min){
                check=1;
                break;
            }
        }
        if(check==1){
            sum+=(m+(m-1));m--;
        }
        else A[i]=1;
    }

    for(int i=0;i<n;i++){
        if(A[i+1]==0)continue;
        Ans.pb(Ans1[i]);
    }
    sort(Ans.begin(),Ans.end());
    r=Ans.size();
    if(r>=1)q=Ans[r-1];
    for (int i=1;i<=n;i++){
        if(A[i]==1){
            ll idx = upper_bound (Ans.begin(),Ans.end(),B[i])-Ans.begin();
            p=r-idx;
            sum+=p;
        }

    }

    cout<<sum<<endl;

    return 0;
}
