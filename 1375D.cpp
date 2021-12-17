#include <bits/stdc++.h>
using namespace std ;

#define      LINF   1LL<<63
#define   ll     long long
#define   ull    unsigned long long
#define   pb     push_back
#define   mp     make_pair
#define   MAX    500006
#define   MAX1   10000008
#define   mem(a,v)   memset(a,v,sizeof(a))
#define   ft     first
#define   sd     second
#define   PII    pair<int,int>
#define   all(x) x.begin(),x.end()
#define   VL vector<long long int >
#define   VLL vector<pair<long long ,long long > >
#define   PLL pair<long long ,long long >
#define fill(x,v) fill(all(x),v)

#define sc1(x) scanf("%lld",&x)
#define sc2(x,y) scanf("lld",&x,&y)
#define sc3(x,y,z) scanf("lld%lld",&x,&y,&z)
#define sc4(a,b,c,d) scanf("lldlld",&a,&b,&c,&d)
#define sc5(a,b,c,d,e) scanf("lldlld%lld",&a,&b,&c,&d,&e)

#define pr1(x) printf("%lld\n",x)
#define pr2(x,y) printf("%lld %lld\n",x,y)
#define pr3(x,y,z) printf("%lld %lld %lld\n",x,y,z)
#define pr4(a,b,c,d) printf("%lld %lld %lld %lld\n",a,b,c,d)
#define pr5(a,b,c,d,e) printf("%lld %lld %lld %lld %lld\n",a,b,c,d,e)

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
vector< ll >V;
vector< ll >Ans;
vector< pair<ll,ll> >VP;
map< ll,ll >M;
vector<ll>prime;
bool mark[MAX1];
ll N=1e7;
void seive (){int limit = sqrt(N*1.0)+2;mark[1]=1;for (int i=4;i<=N;i+=2)mark[i]=1;prime.push_back(2);for (int i=3;i<=N;i+=2){if(!mark[i]){prime.push_back(i);if(i<=limit){for (int j=i*i;j<=N;j+=i*2)mark[j]=1;}}}}
/*
ll bin_pow(ll o, ll s) {
    if (s == 0) return 1;
    if (s == 1) return o % mod;
    ll d = bin_pow(o, s/2);
    d = (d * 1ll * d) % mod;
    if (s % 2 == 1)
        d = (d * 1ll * o) % mod;
    return d;
}
*/
/*
vector<int> z_function (string s) {
    int n = (int) s.length();
    vector<int> z (n);
    for (int i=1, l=0, r=0; i<n; ++i) {
        if (i <= r)
            z[i] = min (r-i+1, z[i-l]);
        while (i+z[i] < n && s[z[i]] == s[i+z[i]])
            ++z[i];
        if (i+z[i]-1 > r)
            l = i,  r = i+z[i]-1;
    }
    return z;
}*/

int main ()
{
    fastIO();
    ll a,b,c,d,n,m,k,l,p,q,r,t,x,y;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    ll Max= 0,Max1=-1e18+1;
    ll Min = 1e18;
    string s,s1,s3,s4;

    //cin>>n;
    cin>>t;

    while(t--){
        cin>>n;
        for(int i=0;i<=n;i++)
        for(int i=0;i<n;i++){
            cin>>A[i];
        }

    }

    return 0;
}
