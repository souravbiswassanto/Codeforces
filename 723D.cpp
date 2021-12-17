
// Problem: D. Lakes in Berland
// Contest: Codeforces - Codeforces Round #375 (Div. 2)
// URL: https://codeforces.com/problemset/problem/723/D
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

struct sourav{
	
	int Size;
	int a; 
	int b;
	sourav(int c,int d, int e){
		Size = c;
		a = d;
		b = e;
	}
};

ll A[60][60];
ll B[MAX];
ll C[MAX];
vector< sourav >V;
vector< ll >Ans;
vector< pair<ll,ll> >VP;
map< pair<int,int>, vector< pair <int,int> > >M;
vector<ll>prime;
bool mark[MAX1];
ll N=1e7;
void seive (){int limit = sqrt(N*1.0)+2;mark[1]=1;for (int i=4;i<=N;i+=2)mark[i]=1;prime.push_back(2);for (int i=3;i<=N;i+=2){if(!mark[i]){prime.push_back(i);if(i<=limit){for (int j=i*i;j<=N;j+=i*2)mark[j]=1;}}}}

bool compare(sourav f, sourav s){
	return f.Size < s.Size;
}

int flag = 0,key1,key2,n,m,vis[55][55];

void dfs(int x, int y){
	//cout<<x<<" "<<y<<endl;
	if((y==1||x==1||y==m||x==n) and A[x][y] == 0){
		flag = 1;
	}
	if(x<1||y<1||x>n||y>m||vis[x][y])return;
	if(A[x][y]==1)return;
	
	vis[x][y] = 1;
	
	dfs(x+1,y);
	dfs(x-1,y);
	dfs(x,y+1);
	dfs(x,y-1);
	M[{key1,key2}].pb(mp(x,y));
}

int main ()
{
    fastIO();
    ll a,b,c,d,k,l,p,q,r,t,x,y;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    ll Max= 0,Max1=-1e18+1,Min=LINF;
    string s,s1,s3,s4;

    //cin>>n;
    cin >> n >> m >> k;
    
    for(int i = 1; i <= n; i++){
    	cin >> s;
    	for( int j = 1; j <= m ;j++){
    		A[i][j] = (s[j-1]=='.')?0:1;
    		if(A[i][j]==0)VP.pb(mp(i,j));
    	}
    }
    
    for(int i = 1; i <= VP.size(); ++i){
    	a = VP[i-1].first;
    	b = VP[i-1].second;
    	if(vis[a][b]==0){
    		//
    		key1 = a; key2= b;
    		dfs(a,b);
    		
    		if(flag){
    		     M[{key1,key2}].clear();
    	    }	
    		flag = 0;
	    	if(M[{a,b}].size()){
	    		V.pb(sourav(M[{a,b}].size(),a,b));
	    	}
    	}
    	
    }
    sort(V.begin(),V.end(),compare);
    for(int i = 0 ; i < V.size() - k; i++){
    	a = V[i].a;
    	b = V[i].b;
    	for(auto it:M[{a,b}]){
    		sum++;
    		A[it.first][it.second] = 1;
    	}
    }
    cout<<sum<<endl;
    for(int i = 1; i <=n ; i++){
    	for(int j = 1; j <= m ; j++){
    		if(A[i][j])cout<<'*';
    		else cout<<'.';
    	}
    	cout<<endl;
    }
    
    

    return 0;
}
