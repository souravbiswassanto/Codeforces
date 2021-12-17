#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define INF 9223372036854775806
#define pb push_back
#define mp make_pair
#define  MAX  500006
#define  MAX1  1000000
#define  mem(a,v)   memset(a,v,sizeof(a))
#define mod 1000000007

template <typename T>
T mymax (T a,T b)
{
    return (a>b)?a:b;
}
template <typename T>
T mymin (T a,T b)
{
    return (a<b)?a:b;
}
template <typename T>
T myabs (T a)
{
    return (a<0)?(-1*a):a;
}
template <typename T>
T mysqrt (T x)
{
    if (x == 0 | x == 1)
        return x;
    int start = 1, End = x, ans;
    while (start <= End)
    {
        int mid = (start + End) / 2;
        if (mid*mid == x)
            return mid;
        if (mid*mid < x)
        {
            start = mid + 1;
            ans = mid;
        }
        else
            End = mid-1;
    }
    return ans;
}

void fastIO ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}

int STAT[(MAX1>>5)+2];

bool check(int N,int pos)
{
    return (bool)(N & (1<<pos));
}
int Set(int N, int pos)
{
    return N=(N|(1<<pos));
}
vector<ll>Primes;
vector<ll> ANS;
void sieve()
{
    ll i,j,sqrtN;
    sqrtN=ll(sqrt(MAX1))+1;
    Primes.pb(2);
    for(ll i=3; i<=MAX1; i+=2)
    {
        if(check(STAT[i>>5],i&31)==0)
        {
            Primes.pb(i);
            if(i<=sqrtN)
                for(j=i*i; j<=MAX1; j+=(i<<1))
                {
                    STAT[j>>5]=Set(STAT[j>>5],j & 31);
                }
        }
    }
}

void F(ll n);

ll bgm(ll B,ll P,ll M);

ll Function(ll n,ll x);
int main()
{
    sieve();
    fastIO();
    ll a,b,c,n,m,k,p,q,r,h,w;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    ll x,y,z;
    ll Max= 0,Max1=-1e18+1;
    ll Min = 1e18;
    string s,s1,s3,s4;
    cin>>x>>n;
    F(x);
    for(ll it:ANS)
    {
        ll d=Function(n,it);
        ans=((ans%mod)*(d%mod))%mod;
    }
    cout<<ans%mod<<endl;
    return 0;
}

ll Function(ll n,ll x)
{
    ll check=0,res;
    while(n!=0)
    {
        check+=n/x;
        n=n/x;
    }
    res=bgm(x,check,mod)%mod;
    return res;
}

void F(ll n)
{
    for(int i=0; Primes[i]*Primes[i]<=n; i++)
    {
        if(n%Primes[i])
            continue;
        ANS.pb(Primes[i]);
        while(n%Primes[i]==0)
        {
            n/=Primes[i];
        }
    }
    if(n!=1)
    {
        ANS.pb(n);
    }
}
ll bgm(ll B,ll P,ll M)
{
    if(P==0)
        return 1;
    else if(P%2==0)
    {
        ll R=bgm(B,P/2,M);
        return ((R%M)*(R%M))%M;
    }
    else
    {
        ll R=bgm(B,P-1,M);
        return ((R%M)*(B%M))%M;
    }
}
