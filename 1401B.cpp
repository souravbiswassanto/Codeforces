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
//ll A[MAX];
//ll B[MAX];
//ll C[MAX];
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
//int main ()
//{
//    fastIO();
//    ll a,b,c,d,n,m,k,l,p,q,r,t,x,y,z;
//    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
//    ll Max= 0,Max1=-1e18+1,Min=LINF;
//    string s,s1,s3,s4;
//
//    //cin>>n;
//    cin>>t;
//
//    while(t--){
//        cin>>a>>b>>c;
//        cin>>x>>y>>z;
//
//        ans = min (c,y);
//        ans *= 2;
//
//        p = c -  min(c,y);
//        p+=a;
//
//        if(z>p){
//            q = z-p;
//            ans-=(2*q);
//        }
//        cout<<ans<<endl;
//    }
//
//    return 0;
//}

#include<bits/stdc++.h>
using namespace std;
#define  fast()      ios :: sync_with_stdio(false); cin.tie(0);
#define  ll             long long int
#define  ull            unsigned long long int
#define     sz(x)       (int)x.size()
#define  ld             long double
#define  vi             vector<int>
#define vl              vector<long long>
#define vc              vector<char>
#define vs              vector<string>
#define vp              vector< pair<ll,ll> >
#define sl              set<long long>
#define sc              set<char>
#define sts             stack<string>
#define pq_max(x)       priority_queue < x >
#define pq_min(x)       priority_queue < x, vector < x >, greater < x > >
#define max_3(a,b,c)    max(a, max(b,c))
#define max_4(a,b,c,d)  max(a,max(b,max(c,d)))
#define min_3(a,b,c)    min(a, min(b,c))
#define min_4(a,b,c,d)  min(a,min(b,min(c,d)))
#define gcd(a,b)        __gcd(a,b)
#define lcm(a,b)        (a*b)/gcd(a,b)
#define pi              2*acos(0.0)
#define N               200006
#define      mnn                 10000000000000
#define      mxx                 -10000000000000
#define in              1234567890;
int M=1000000007;
/*dp[0]=0,dp[1]=1;
	for(int i=2;i<=1000000;i++) dp[i]=dp[i-1]+dp[i-2],dp[i]%=M;*/
/*bool myfun(string &s1,string &s2){
return s1.size()<s2.size();
}
if(s[i+1].find(s[i])==string::npos)
//int dfs(int n){
	if (n>1){
		 dfs(a[n]);
	}
	cout<<n<<" ";
}
ll dfs(ll x,ll p,ll d){
    ll l=0;
    for(auto y:v[x]){
        if(y==p) continue;
        l+=dfs(y,x,d+1);
    }
    s[x]=d-l;
    return l+1;
}
*/
/*#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops")
#pragma GCC target("avx,avx2")
#include<cstdio>*/
/*bool isPrime(int n)
{ if (n <= 1)  return false;
    if (n <= 3)  return true;
    if (n%2 == 0 || n%3 == 0) return false;
    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;
    return true;
} */
map<ll,ll>mp;
//ll a[N],b[N];
sl s1,s2;vl v;vl w,w1,w2,w3;
ll m,n,c,d,i,j,k,l,r,x,t,y,u,b,e,f,g;string s,p,q;char ch,ck;
int main()
{
    fast()
    cin>>t;
    while(t--){
      cin>>n>>k;
      if(k>=n) cout<<k-n<<endl;
      else{
        if((n%2&&k%2)||(n%2==0&&k%2==0)) cout<<0<<endl;
        else cout<<1<<endl;
      }
    }
}

