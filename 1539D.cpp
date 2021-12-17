
// Problem: D. PriceFixed
// Contest: Codeforces - Codeforces Round #727 (Div. 2)
// URL: https://codeforces.com/contest/1539/problem/D
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
//#pragma GCC diagnostic ignored "-Wformat"

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
vector< ll >V;
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

struct sourav{
    ll ff, ss;
    sourav(ll a, ll b){
        ff = a;
        ss =  b;
    }
    bool operator<(sourav other)const{
        
        return ss < other.ss;
    }
};

int main ()
{
    fastIO();
    ll a,b,c,d,n,m,k,l,p,q,r,t,x,y;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    ll Max= 0,Max1=-1e18+1,Min=LINF;
    string s,s1,s3,s4;

    //cin>>n;
    cin>>n;
    vector<sourav> vec;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        vec.pb(sourav(a, b));
    }
    sort(vec.begin(), vec.end());
    l = 0; r = n - 1;
    ll cur = 0LL;
    while(l < r){
        
        ll need = vec[l].ss - cur;
        if(need < 0) need = 0;
        
        if(vec[r].ff <= need){
            sum += (2LL * vec[r].ff);
            cur += vec[r].ff;
            r--;
        }
        else {
            sum += (need * 2LL);
            sum += vec[l].ff;
            cur += need;
            cur += vec[l].ff;
            vec[r].ff -= need;
            l++;
        }
    }
    //cout << sum << endl;
    //cout << r <<" "<< l << endl;
    //cout << vec[r].ff <<" "<< vec[r].ss <<" "<< cur << endl;
    if(cur >= vec[r].ss){
        sum += vec[r].ff;
    }
    else {
        ll need = vec[r].ss - cur;
        a = min(need, vec[r].ff);
        a *= 2LL;
        sum += a;
        a /= 2;
        vec[r].ff -= a;
        sum += vec[r].ff;
    }
    cout << sum << endl;
    /* 
        always check the limit and make sure that is correct.
        lcm of first 40 numbers  can be calculated.
        sqrt of 10^9 is 31622.
        always usee 1LL while doing binary operations.
    */

    return 0;
}
