
// Problem: C. Array Destruction
// Contest: Codeforces - Codeforces Round #696 (Div. 2)
// URL: https://codeforces.com/contest/1474/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
//#pragma GCC diagnostic ignored "-Wformat"
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
//const int RANDOM = chrono::high_resolution_clock::now().time_since_epoch().count();

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

struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
gp_hash_table<int, int, custom_hash> M;

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
        cin>>n;
        m = n * 2;
        for (int i = 0; i < m; i++){
            cin >> A[i];
        }
        sort(A, A + m);
        b = -1;
        for (int i = 0; i < m - 1; i++){
            ll last = A[m-1];
            for (int j = 0; j < m; j++)M[A[j]]++;
            M[A[i]]--;
            M[last]--;
            cntr = 0;
            for (int j = m - 2; j >= 1; j--){
                if(M[A[j]] == 0){
                    continue;
                }
                a = last - A[j];
                M[A[j]]--;
                if(M[a] == 0){
                    break;
                }
                M[a]--;
                cntr++;
                last = A[j];
            }
            M.clear();
            if(cntr == n - 1){
                b = i; break;
            }
        }
        if(b == -1){
            cout << "NO" << endl; continue;
        }
        cout <<"YES"<< endl;
        cout << A[m - 1] + A[b] << endl;
         for (int i = b; i <=b; i++){
            ll last = A[m-1];
            for (int j = 0; j < m; j++)M[A[j]]++;
            M[A[i]]--;
            M[last]--;
            cout << A[i] <<" " << last<< endl;
            for (int j =m - 2; j >= 1; j--){
                if(M[A[j]] == 0){
                    continue;
                }
                a = last - A[j];
                M[A[j]]--;
                if(M[a] == 0){
                    break;
                }
                cout << A[j] <<" " << a << endl;
                M[a]--;
                last = A[j];
            }
            M.clear();
        }
        
    }

    return 0;
}
