#include <bits/stdc++.h>
using namespace std ;

#define   Pi     2*acos(0.0)
#define   LINF   1LL<<63
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
#define lcm(a, b)        ((a)*((b)/gcd(a,b)))

#define sc1(x) scanf("%lld",&x)
#define sc2(x,y) scanf("lld",&x,&y)
#define sc3(x,y,z) scanf("lld%lld",&x,&y,&z)
#define sc4(a,b,c,d) scanf("lldlld",&a,&b,&c,&d)
#define sc5(a,b,c,d,e) scanf("lldlld%lld",&a,&b,&c,&d,&e)

#define yes   cout<<"YES"<<endl
#define no   cout<<"NO"<<endl
#define buga  cout<<1<<endl
#define bugb  cout<<2<<endl
#define bugc  cout<<3<<endl
#define bugd  cout<<4<<endl
#define buge  cout<<5<<endl


void fastIO (){ios_base::sync_with_stdio(false);cin.tie(0); cout.precision(20);}
void pr(ll n){ cout<<n<<endl;}

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
        cin>>n>>m;
        check=0;
        for(int i=0;i<=1000;i++)C[i]=0;
        for(int i=0;i<n;i++){cin>>A[i];C[A[i]]=1;}
        for(int i=0;i<m;i++){cin>>B[i];}
        for(int i=0;i<m;i++){

            if(C[B[i]]){
                check = 1;
                a = B[i];break;
            }
        }
        if(!check)no;
        else {
            yes;
            cout<<1<<" "<<a<<endl;
        }

        Max=0;
    }

    return 0;
}
