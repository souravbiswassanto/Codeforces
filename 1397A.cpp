//#include <bits/stdc++.h>
//using namespace std ;
//
//#define   Pi     2*acos(0.0)
//#define   LINF   1LL<<63
//#define   ll     long long
//#define   ull    unsigned long long
//#define   pb     push_back
//#define   mp     make_pair
//#define   MAX    500006
//#define   MAX1   10000008
//#define   mem(a,v)   memset(a,v,sizeof(a))
//#define   all(x) x.begin(),x.end()
//#define lcm(a, b)        ((a)*((b)/gcd(a,b)))
//#define yes   cout<<"YES"<<endl
//#define no   cout<<"NO"<<endl
//#define buga  cout<<1<<endl
//#define bugb  cout<<2<<endl
//#define bugc  cout<<3<<endl
//#define bugd  cout<<4<<endl
//#define buge  cout<<5<<endl
//
//void fastIO (){ios_base::sync_with_stdio(false);cin.tie(0); cout.precision(20);}
//
//int A[1002];
//ll B[1002];
//ll C[MAX];
//ll dp[1001][1001];
//vector< ll >V;
//vector< ll >Ans;
//vector< pair<ll,ll> >VP;
//map< ll,ll >M;
//vector<ll>prime;
//bool mark[MAX1];
//ll N=1e7;
//void seive (){int limit = sqrt(N*1.0)+2;mark[1]=1;for (int i=4;i<=N;i+=2)mark[i]=1;prime.push_back(2);for (int i=3;i<=N;i+=2){if(!mark[i]){prime.push_back(i);if(i<=limit){for (int j=i*i;j<=N;j+=i*2)mark[j]=1;}}}}
//
///*
//ll bin_pow(ll o, ll s) {
//    if (s == 0) return 1;
//    if (s == 1) return o % mod;
//    ll d = bin_pow(o, s/2);
//    d = (d * 1ll * d) % mod;
//    if (s % 2 == 1)
//        d = (d * 1ll * o) % mod;
//    return d;
//}
//*/
//
//
//ll maxsum(ll left,ll right){
//
//    if(left==right){
//        return A[left];
//    }
//    if(dp[left][right]!=-1)return dp[left][right];
//    ll leftside = maxsum(left, right - 1);
//    ll rightside = maxsum(left +1 , right);
//    ll sum = (B[right]-B[left-1])*(right-left+1);
//    ll leftsum = leftside + A[right];
//    ll rightsum = rightside + A[left];
//    dp[left][right]=max(max(leftsum,rightsum),sum);
//    //cout<<left<<" "<<right<<" "<<dp[left][right]<<endl;
//    return dp[left][right];
//
//}
//
//int main ()
//{
//    fastIO();
//    ll a,b,c,d,m,k,l,p,q,r,x,y;
//    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
//    ll Max= 0,Max1=-1e18+1,Min=LINF;
//    string s,s1,s3,s4;
//
//    //cin>>n;
//    int t;
//    scanf("%d",&t);
//
//    while(t--){
//        int n;
//        scanf("%d",&n);
//        for(int i=1;i<=n;i++){
//            scanf("%d",&A[i]);
//            B[i]=B[i-1]+A[i];
//        }
//        for(int i=1;i<=n;i++){
//            for(int j=i;j<=n;j++)dp[i][j]=-1;
//        }
//        ans = maxsum(1LL,n);
//        printf("%lld\n",ans);
//        for(int i=1;i<=n;i++)B[i]=0;
//
//    }
//
//    return 0;
//}
/*
5
6
2 6 -1 -7 2 3
8
2 3 -3 -3 -5 3 4 5
6
7 3 -9 2 -4 5

*/

#include<bits/stdc++.h>

using namespace std;

#define    pf               printf
#define    PF(a)            printf("%d\n",(a))
#define    PF2(a,b)         printf("%d %d\n",(a), (b))
#define    PF3(a,b,c)       printf("%d %d %d\n",(a), (b), (c))
#define    PFL(a)           printf("%lld\n",(a))
#define    PFL2(a,b)        printf("%lld %lld\n",(a), (b))
#define    PFL3(a,b,c)      printf("%lld %lld %lld\n",(a), (b), (c))
#define    get(a)           cin>>a
#define    sf               scanf
#define    SF(a)            scanf("%d",&a)
#define    SF2(a,b)         scanf("%d %d",&a, &b)
#define    SF3(a,b,c)       scanf("%d %d %d",&a, &b, &c)
#define    SFL(a)           scanf("%lld",&a)
#define    SFL2(a,b)        scanf("%lld %lld",&a, &b)
#define    SFL3(a,b,c)      scanf("%lld %lld %lld",&a, &b, &c)
#define    gl(a)            getline(cin,(a))
#define    gc()             getchar()
#define    pb               push_back
#define    m_p              make_pair
#define    pc()             printf("Case %d: ",tt++)
#define    tc()             cout<<"Case "<<tt++<<": "
#define    SZ(a)            (int)(a).size()
#define    all(a)           a.begin(),a.end()
#define    FF               first
#define    SS               second
#define    MAX              2134567891
#define    MOD              1000000007
#define    MM               100005
#define    PI               2*acos(0.0)
#define    cond(n,m)        (xx>=0 && xx<(n) && yy>=0 && yy<(m))

#define    mem(a)           memset((a),0,sizeof (a))
#define    SET(a)           memset((a),-1,sizeof (a))
#define    output           freopen("output.txt","w",stdout);
#define    input            freopen("input.txt","r",stdin);
#define    I_O              ios_base::sync_with_stdio(0); cin.tie(0)
#define    rep(a)           for(int i=0;i<(a);i++)
#define    FOR(a,b)         for(int i=(a);i<(b);i++)
#define    REP(a)           for(int j=0;j<(a);j++)
#define    rev(a)           for(int i=(a);i>=0;i--)
#define    fr(i,n)          for(i=0;i<n;i++)
#define    fr1(i,n,m)       for(i=n;i<m;i++)

int dx[]  = {0, 0, 1, -1};
int dy[]  = {1, -1, 0, 0};
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1, -1, -1, 0, 1, -1, 0, 1};
int kx8[] = {1, 1, 2, 2, -1, -1, -2, -2};
int ky8[] = {2, -2, 1, -1, 2, -2, 1, -1};

typedef long long ll;
typedef unsigned long long llu;
typedef priority_queue < int > PQ;
typedef pair < int , int > pi;
typedef pair < int , pi > pii;
typedef vector < int > vi;
typedef vector < ll > vl;
typedef vector < string > vs;

/*
//FUNCTION//
ll bigmod(ll a, ll b, ll c)
{
    if(b==0)return 1%c;ll x=bigmod(a,b/2,c);x=x*x%c;
    if(b%2==1)x=x*a%c;return x;
}

ll poww(ll a, ll b)
{
    if(b==0)return 1;ll x=poww(a,b/2);x=x*x;if(b%2==1)x=x*a;return x;
}

ll mod_inverse(ll a, ll mod){return bigmod(a,mod-2,mod);}

ll LCM(ll a, ll b){ return a*b/ __gcd(a,b);}

int pr = 50000;
vi primelist;
bool a[MM*100];
void seive( )
{
    int i,j,k=sqrt(pr);
    a[1]=1;
    primelist.pb(2);
    for(i=4;i<=pr;i+=2)a[i]=1;
    for(i=3;i<=k;i+=2)if(!a[i])for(j=i*i;j<=pr;j+=2*i)a[j]=1;
    for(i=3;i<=pr;i+=2)if(!a[i])primelist.pb(i);
}

ll fact_divs( ll n, ll p)
{
    ll cnt=0;while(p<=n){cnt += n/p;n /= p;}return cnt;
}
struct point{double x, y;};
double area( point A, point B, point C){
return 0.5*(A.x*(B.y-C.y) - A.y*(B.x-C.x) + B.x*C.y - C.x*B.y);
}

int Set(int N,int pos){return N=N | (1<<pos);}
int reset(int N,int pos){return N= N & ~(1<<pos);}
bool check(int N,int pos){return (bool)(N & (1<<pos));}

//*/
ll dp[1005];
ll a[1005];
int main() {

    //I_O;
    freopen("H:/All study/Onedrive/1Programming/Codeforces/output.txt","w",stdout);
    int t,tt=1;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            dp[i] = -MAX;
        }
        for(ll i=1;i<=n;i++)
        {
            ll sum = 0;
            for(ll j=i;j>=1;j--)
            {
                sum += a[j];
                dp[i] = max(dp[i],dp[j-1] + sum*(i-j+1));
            }
        }
        cout<<dp[n]<<"\n";
    }



    return 0;
}
