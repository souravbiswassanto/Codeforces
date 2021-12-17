// Problem: G. Strange Beauty
// Contest: Codeforces - Codeforces Round #697 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1475/G
// Memory Limit: 256 MB
// Time Limit: 5000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
//#pragma GCC diagnostic ignored "-Wformat"

using namespace std ;

#define   Pi     2*acos(0.0)
#define   LINF   1int<<62
#define   ll     long long
#define   uint    unsigned long long
#define   pb     push_back
#define   mp     make_pair
#define   MAX    500006
#define   MAX1   10000008
#define   mem(a,v)   memset(a,v,sizeof(a))
#define   aint(x) x.begin(),x.end() 
#define   lcm(a, b)        ((a)*((b)/__gcd(a,b)))
#define yes   cout<<"YES"<<endl
#define no   cout<<"NO"<<endl
#define buga  cout<<1<<endl
#define bugb  cout<<2<<endl
#define bugc  cout<<3<<endl
#define bugd  cout<<4<<endl
#define buge  cout<<5<<endl


int A[MAX];
int B[MAX];
int C[MAX];
vector< int >V;
vector< int >Ans;
vector< pair<int,int> >VP;
map< int,int >M;
vector<int>prime;
bool mark[MAX1];
int N=1e7;
void seive (){int limit = sqrt(N*1.0)+2;mark[1]=1;for (int i=4;i<=N;i+=2)mark[i]=1;prime.push_back(2);for (int i=3;i<=N;i+=2){if(!mark[i]){prime.push_back(i);if(i<=limit){for (int j=i*i;j<=N;j+=i*2)mark[j]=1;}}}}
/*
int sti(string a,int base=10)
{
	int k=0;
	for (int i=0;i<(int)a.size();++i)
	{
		k*=base;
		k+=a[i]-'0';
	}
	return k;
}
 
/*
/*
int bin_pow(int o, int s) {
    if (s == 0) return 1;
    if (s == 1) return o % mod;
    int d = bin_pow(o, s/2);
    d = (d * 1int * d) % mod;
    if (s % 2 == 1)
        d = (d * 1int * o) % mod;
    return d;
}
*/
int dp[MAX];
int main ()
{
    int a,b,c,d,n,m,k,l,p,q,r,t,x,y;
    int cnt=0,cntr=0,sum=0,ans=1,check=0;
    int Max= 0;
    string s,s1,s3,s4;

    //cin>>n;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        for (int i = 0; i < n; i++){
            scanf("%d", &a);
            V.pb(a);
            A[a]++;
        }
        sort(V.begin(), V.end());
        V.resize(unique(V.begin(), V.end())- V.begin());
        for(int i = 0; i < V.size(); i++){
            if(V[i] == 1){
                dp[V[i]] = A[V[i]]; continue;
            }
            dp[V[i]] = dp[1] + A[V[i]];
            int limit = sqrt(V[i]);
            for(int j = 2; j <= limit; j++){
                if(V[i] % j == 0){
                    a = V[i] / j;
                    dp[V[i]] = max(dp[V[i]], A[V[i]] + dp[j]);
                    dp[V[i]] = max(dp[V[i]], A[V[i]] + dp[a]);
                }
            }
        }
        Max = 0;
        
        for(int i = 0; i < V.size(); i++){
            A[V[i]] = 0;
            Max = max(Max, dp[V[i]]);
            dp[V[i]] = 0;
        }
        dp[1] = 0;
        V.clear();
        printf("%d\n", n - Max);
    }

    return 0;
}
