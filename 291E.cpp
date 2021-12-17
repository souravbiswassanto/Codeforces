
// Problem: E. Tree-String Problem
// Contest: Codeforces - Croc Champ 2013 - Qualification Round
// URL: https://codeforces.com/contest/291/problem/E
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
#define   ll     int
#define   ull    unsigned long long
#define   pb     push_back
#define   mp     make_pair
#define   MAX    300006
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
vector< int >V;
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
vector<int> g[MAX];
string st[MAX], pattern;
int sz = 0;
int Lps[MAX], nxt[MAX][30];
int Ll ;
vector <int> createlps(){
    int index = 0;
    vector<int> lps(pattern.length(),0);
    lps[0] = 0;
    for(int i = 1; i <  pattern.length(); ){
       
        if(pattern[i] == pattern[index]){
            lps[i] = index + 1;
            i++;
            index++;
        }
        else {
            if(index != 0){
                index = lps[index - 1];
            }
            else lps[i] = 0, i++;
        }
    }
    return lps;
}
int Count;

void dfs(int source, int par, int ptr = 0){
    int j;
    for (auto u: g[source]){
        if(u == par)continue;
        j = ptr;
        for(auto c: st[u]){
            j = nxt[j][c - 'a'];
            if(j == pattern.size()){
                sz++;
                j = V[j - 1];
            }
        }
        dfs(u, source, j);
    }
}

int main ()
{
    ll a,b,c,d,n,m,k,l,q,r,t,x,y;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    string s,s1,s3,s4;

    scanf("%d", &n);
    char ch[MAX];
    st[1] = "";
    for (int i = 2; i <= n; i++){
        scanf("%d %s", &a, ch);
        g[a].pb(i);
        g[i].pb(a);
        st[i] = ch;
    }
    scanf("%s", ch);
    pattern = ch;
    V = createlps();
    
    for(int i = 0; i < pattern.size(); i++)
	    for(int j = 0; j < 26; j++){ 
	        if(i)nxt[i][j] = pattern[i] - 'a' == j ? i + 1 : nxt[ V[i - 1] ][j];
	        else nxt[i][j] = pattern[i] - 'a' == j ? i + 1: nxt[0][j] = 0;
	    }
    
    dfs(1, 0);
    cout << sz << endl;
    
    /* 
        always check the limit and make sure that is correct.
        lcm of first 40 numbers  can be calculated.
        sqrt of 10^9 is 31622.
        always usee 1LL while doing binary operations.
    */

    return 0;
}
