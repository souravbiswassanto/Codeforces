
// Problem: D2. Seating Arrangements (hard version)
// Contest: Codeforces - Codeforces Global Round 16
// URL: https://codeforces.com/contest/1566/problem/D2
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)


// Problem: D1. Seating Arrangements (easy version)
// Contest: Codeforces - Codeforces Global Round 16
// URL: https://codeforces.com/contest/1566/problem/D1
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
//#pragma GCC diagnostic ignored "-Wformat"
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std ;

#define   Pi     2*acos(0.0)
#define   LINF   1LL<<62
#define   ll     long long
#define   ull    unsigned long long
#define   pb     push_back
#define   mp     make_pair
#define   MAX    500006
#define   MAX1   10000008
#define   mem(a,v)   memset(a,v,sizeof(a))
#define   all(x) x.begin(),x.end()
#define   lcm(a, b)        ((a)*((b)/__gcd(a,b)))
#define yes   cout<<"YES"<<endl
#define no   cout<<"NO"<<endl
#define buga  cout<<1<<endl
#define bugb  cout<<2<<endl
#define bugc  cout<<3<<endl
#define bugd  cout<<4<<endl
#define buge  cout<<5<<endl

void fastIO (){ios_base::sync_with_stdio(false);cin.tie(0); cout.precision(20);}

ll A[MAX];
ll B[MAX];
ll C[MAX];
vector< pair<ll, ll> >V;
vector< ll >Ans;
vector< pair<ll,ll> >VP;
map< ll,ll >M;
vector<ll>prime;
bool mark[MAX1];
ll N=1e7;
void seive (){int limit = sqrt(N*1.0)+2;mark[1]=1;for (int i=4;i<=N;i+=2)mark[i]=1;prime.push_back(2);for (int i=3;i<=N;i+=2){if(!mark[i]){prime.push_back(i);if(i<=limit){for (int j=i*i;j<=N;j+=i*2)mark[j]=1;}}}}
/*
ll sti(string a,int base=10)
{
	ll k=0;
	for (int i=0;i<(int)a.size();++i)
	{
		k*=base;
		k+=a[i]-'0';
	}
	return k;
}
 
/*
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
struct Sort{
    ll a, b;
    Sort(ll _a, ll _b){
        a = _a;
        b = _b;
    }
    bool operator<(Sort other)const{
        if(a == other.a)return b > other.b;
        return a < other.a;
    }
};
template<class T> using oset=tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


int main ()
{
    fastIO();
    ll a,b,c,d,n,m,k,l,p,q,r,t,x,y;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    ll Max= 0,Max1=-1e18+1,Min=LINF;
    string s,s1,s3,s4;

    //cin>>n;
    cin>>t;

    while(t--){
        cin>>n >> m;
        vector<Sort> vec[n + 3]; V.clear();
        for(int i = 0; i  < n * m; i++){
            cin >> a;
            V.pb({a, i});
        }
        
        sort(V.begin(), V.end());
        for(int i = 0; i < n * m; i++){
            A[i] = 0; B[i] = 0;
        }
        for(int i = 0; i < n * m; i++){
            vec[i / m].pb(Sort(V[i].first, V[i].second));
            A[V[i].second] = i / m;
        }
        for(int i = 0; i < n; i++){
            sort(vec[i].begin(), vec[i].end());
            for(int j = 0; j < m; j++){
                //cout << vec[i][j].a <<" "<<vec[i][j].b<<endl;
                B[vec[i][j].b] = j;
            }
            //cout << endl;
        }
        
        oset<ll> S[n + 3];
        for(int i = 0; i < n * m; i++){
            //cout << A[i] <<" "<< B[i]<<" "<<i<<endl;
            a = A[i];
            b = S[a].order_of_key(B[i]);
            S[a].insert(B[i]);
            sum += b;
            
        }
        cout << sum << endl; sum = 0;
        

    }
    /* 
        always check the limit and make sure that is correct.
        lcm of first 40 numbers  can be calculated.
        sqrt of 10^9 is 31622.
        always usee 1LL while doing binary operations.
    */

    return (0 - 0 + 1 -  1 * 1);
}
