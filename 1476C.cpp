
// Problem: C. Three Bags
// Contest: Codeforces - Codeforces Round #695 (Div. 2)
// URL: https://codeforces.com/contest/1467/problem/C
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

int main ()
{
    fastIO();
    ll a,b,c,d,n,m,k,l,p,q,r,t,x,y;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    ll Max= 0,Max1=-1e18+1,Min=LINF;
    string s,s1,s3,s4;

    //cin>>n;
    t = 1;

    while(t--){
        cin>>a >> b >> c;
        sum = 0; ll z;
        x = y = z = 0;
        for (int i = 0;i < a; i++){
            cin >> A[i];
            sum += A[i];
        }
        x = sum;
        for (int i = 0; i < b; i++){
            cin >> B[i];
            sum += B[i];
        }
        y = sum - x;
        for (int i = 0; i < c; i++){
            cin >> C[i];
            sum += C[i];
        }
        z = sum - x - y;
        sort(A, A+ a);
        sort(B, B+ b);
        sort(C, C + c);
        ll D[3];
        D[0] = A[0]; D[1] = B[0];
        D[2] = C[0];
        sort(D, D + 3);
        ans = sum - 2 * (D[0] + D[1]);
         p = q = r = l = 0;
        if(a == 1){
            q = sum - (A[0] * 2);
        }
        if(b == 1){
            r = sum - (B[0] * 2);
        }
        if(c == 1){
            l = sum - (C[0] * 2);
        }
        ans = max (ans,q);
        ans = max (ans,r);
        ans = max (ans, l);
        q = sum - 2 * (x);
        r = sum - 2 * (y);
        l = sum - 2 * (z);
        ans = max (ans,q);
        ans = max (ans,r);
        ans = max (ans, l);
        cout << ans << endl;
        

    }

    return 0;
}
