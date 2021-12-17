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
T mysqrt (T x){if (x == 0 | x == 1)return x;ll start = 1, End = x, ans;while (start <= End){ll mid = (start + End) / 2;if (mid*mid == x)return mid;if (mid*mid < x){start = mid + 1;ans = mid;}else End = mid-1;}return ans;}

void fastIO (){ios_base::sync_with_stdio(false);cin.tie(0); cout.precision(20);}

ll A[MAX];
ll B[MAX];
ll C[MAX];
vector< ll >V;
vector< ll >Ans;
vector< pair<ll,ll> >VP;
map< ll,ll >M;
vector<ll>prime;
bool mark[MAX1];
ll N=1e7;
void seive (){ll limit = sqrt(N*1.0)+2;mark[1]=1;for (ll i=4;i<=N;i+=2)mark[i]=1;prime.push_back(2);for (ll i=3;i<=N;i+=2){if(!mark[i]){prime.push_back(i);if(i<=limit){for (ll j=i*i;j<=N;j+=i*2)mark[j]=1;}}}}

ll bigmod ( long long a, ll p, ll m )
{
    if ( p == 0 )return 1; // If power is 0 ( a ^ 0 ), return 1

    if ( p & 1 ) // If power is odd
    {
        return ( ( a % m ) * ( bigmod ( a, p - 1, m ) ) ) % m;
    }
    else
    {
        long long tmp = bigmod ( a, p / 2, m );
        return ( tmp * tmp ) % m;
    }
}

int main ()
{
    fastIO();
    ll a,b,c,n,m,k,p,q,r;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    float x,y,z;
    ll Max= 0,Max1=-1e18+1;
    ll Min = 1e18;
    string s,s1,s3,s4;

    cin>>n>>m;
    ll gap;
    ll mul=1;
    for(ll i=1;i<=n;i++){
        cin>>A[i];
    }
    for(ll i=1;i<n;i++){
        gap=abs(A[1]-A[i+1]);
        gap%=m;
        mul*=gap;
        mul%=m;
    }
    b=n-2;
    for(ll i=2;i<n;i++){
        gap=abs(A[1]-A[i]);
        sum=bigmod(gap,b--,m);
        ans=abs(mul-sum)%m;
        mul=mul*ans;
        mul%=m;
    }
    cout<<mul<<endl;

    return 0;
}
