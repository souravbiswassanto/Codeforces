
// Problem: C. Pekora and Trampoline
// Contest: Codeforces - Codeforces Global Round 13
// URL: https://codeforces.com/contest/1491/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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

int parent[MAX];
void init(int n){
    int i;
    for(i = 1; i <= n; i++) {parent[i] = i; }
}

int root(int x){
    if(parent[x] != x) parent[x] = root(parent[x]);
    return parent[x];
}

int main ()
{
    ll a,b,c,d,n,m,k,l,p,q,r,t,x,y;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    ll Max= 0,Max1=-1e18+1,Min=LINF;
    string s,s1,s3,s4;

    //cin>>n;
    scanf("%lld", &t);

    while(t--){
        scanf("%lld", &n);
        init(n);
        for(int i = 1; i <= n + 10; i++){
            A[i] = 0;
        }
        for(int i = 1; i <= n; i ++){
            scanf("%lld", &A[i]);
        }
        sum = 0;
        for(int i = 1; i <= n; i++){
            //cout << A[i] <<" A[i]" << endl;
            if(A[i] == 1){
                continue;
            }
            a = i + A[i] - n;
            sum += A[i] - 1;
            A[i] -= max(0LL,a);
            
            //cout << sum <<" a" << endl;
            while(A[i] > 1){
                for(int j = i + A[i]; j <= n; ){
                    p = j;
                    
                    if(A[j] == 1){
                        if(A[j + 1] == 1){
                            parent[j] = root(parent[j + 1]);
                        }
                        if(A[j - 1] == 1){
                            parent[j - 1] = root(parent[j]);
                        }
                        j = parent[j];
                        //cout << j - p << endl;
                    }
                    j += A[j];
                    if(j > n){
                       A[p] = max(1LL, A[p] - 1);break;
                    }
                    
                    A[p] = max(1LL, A[p] - 1);
                }
                A[i] -= 1;
            }
        }
        printf("%lld\n", sum);
        //cout << endl;

    }
    /* 
        always check the limit and make sure that is correct.
        lcm of first 40 numbers  can be calculated.
        sqrt of 10^9 is 31622.
        always usee 1LL while doing binary operations.
    */

    return 0;
}
