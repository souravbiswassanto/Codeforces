
// Problem: B. Find the Spruce
// Contest: Codeforces - Codeforces Round #689 (Div. 2, based on Zed Code Competition)
// URL: https://codeforces.com/contest/1461/problem/B
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
#define   LINF   1LL<<63
#define   ll     long long
#define   ull    unsigned long long
#define   pb     push_back
#define   mp     make_pair
#define   MAX    500006
#define   MAX1   10000008
#define   mem(a,v)   memset(a,v,sizeof(a))
#define   all(x) x.begin(),x.end()
#define   lcm(a, b)        ((a)*((b)/gcd(a,b)))
#define yes   cout<<"YES"<<endl
#define no   cout<<"NO"<<endl
#define buga  cout<<1<<endl
#define bugb  cout<<2<<endl
#define bugc  cout<<3<<endl
#define bugd  cout<<4<<endl
#define buge  cout<<5<<endl

void fastIO (){ios_base::sync_with_stdio(false);cin.tie(0); cout.precision(20);}


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

int main ()
{
    fastIO();
    ll a,b,c,d,n,m,k,l,p,q,r,t,x,y;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    ll Max= 0,Max1=-1e18+1,Min=LINF;
    

    //cin>>n;
    cin>>l;

    while(l--){
        cin>>n>>m;
        string s[n+5];
        ll A[n+4][m+4];
        ll tk[n+4][m+3];
        ll t[n+4][m+3];
        mem(A,0);
        mem(tk,0);
        mem(t,0);
        for(int i=1; i <= n; i++){
        	cin >>s[i];
        }
		
		for(int i = 1; i <= n; i++){
			cntr = 0;
			for(int j = 1; j <= m; j++){
				if(s[i][j-1]=='.'){
					cntr = 0;
				}
				else {
					cntr++;
					A[i][j] = cntr;
				}
			}
			Max = 0;
			a = m ;
			for(int j = m; j >=1; j--){
				if(s[i][j-1]=='.'){
					Max = 0;
					a = j - 1;
				}
				else {
					Max = max(Max,A[i][j]);
					A[i][j] = Max;
					tk[i][j] = a;
				}
			}
		}
		ans = 0;
		
		for(int i = 1 ; i <= n; i++){
			for(int j = 1; j <= m; j++){
				if(s[i][j-1]=='.')continue;
				/*
				if(t[i-1][j] == 1){
					ans+=1;
					t[i][j]=1;continue;
				}
				if(t[i-1][j]){
					ans += t[i-1][j] - 1;
					t[i][j] = t[i-1][j] - 1;continue;
				}*/
				
				ll val = 1;cntr = 0;
				for(int k = i; k <= n; k++){
					a = tk[k][j] - A[k][j] + 1;
					b = min(j-a,tk[k][j]-j);
					c = b * 2 + 1;
					if(c < val){
						break;
					}
					val += 2;
					cntr++;
				}
				ans += cntr;
				t[i][j] = cntr;
				
			}
		}
		/*
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m;j++){
				cout<<tk[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m;j++){
				cout<<t[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m;j++){
				cout<<A[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		*/
		cout<<ans<<endl;
    }

    return 0;
}
