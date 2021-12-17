
// Problem: D. Cleaning
// Contest: Codeforces - Codeforces Round #696 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1474/D
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

bool chk (ll A[], int n){
    ll mn = A[1];
    for (int i = 2; i <= n; i++){
        mn = A[i] - mn;
        if (mn < 0)return false;
    }
    if (mn) return false;
    return true;
}

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
        cin >> n;
        for (int i = 1; i <= n; i++){
            cin >> A[i];
        }
        check = 0;
        if (chk(A, n)) check = 1;
        swap (A[1], A[2]);
        if (chk (A, n)) check = 1;
        swap (A[1], A[2]);
        swap (A[n], A[n - 1]);
        if (chk (A, n)) check = 1;
        swap (A[n], A[n - 1]);
        
        if(check){
            cout << "YES" << endl; continue;
        }
        if (n <= 3){
            cout << "NO" << endl; continue;
        }
        cntr = n;
        ll Front[n + 3] = {0}, Back[n + 4] = {0};
        ll posl = n + 2, posr = -1;
        Min = A[1];
        Front[1] = A[1];
        for (int i = 2; i <= n; i++){
            Min = A[i] - Min;
            if (Min >= 0){
                Front[i] = Min;
            }
            else {
                posl = min(posl, i * 1LL - 1);
            }
            Min = max(0LL, Min);
        }
        Back[n] = A[n];
        Min = A[n];
        for (int i = n - 1; i >= 1; i--){
             Min = A[i] - Min; 
             if (Min >= 0){
                 Back [i] = Min;
             }
             else {
                 posr = max((int)posr, i + 1);
             }
             Min = max(0LL, Min);         
        }

        for (int i = 2; i < n - 1; i++){
            B[1] = A[i + 1], B[2] = A[i], B[3] = Back[i + 2];
            Min = Front[i - 1];
            bool flag = true;
            for (int j = 1; j <= 3; j ++){
                Min = B[j] - Min;
                if(Min < 0){
                    flag = false;
                }
            }
            if (Min) flag = false;
            if (posl < (i - 1) or posr > (i + 2))flag = false;
            if (!flag)continue;
            check = 1;
            break;
        }
        if (check) cout << "YES" << endl;
        else cout << "NO" << endl;

    }

    return 0;
}
