#include <bits/stdc++.h>
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
//#pragma GCC diagnostic ignored "-Wformat"
using namespace std ;

#define   Pi     2*acos(0.0)
#define   LINF   1LL<<63
#define   ll     unsigned long long
#define   pb     push_back
#define   mp     make_pair
#define   MAX    500006
#define   MAX1   10000008
#define   mem(a,v)   memset(a,v,sizeof(a))
#define   all(x) x.begin(),x.end()
#define lcm(a, b)        ((a)*((b)/gcd(a,b)))
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

struct{
	ll a;
	ll b;
}
tree[1200100];
bool Found = false;
ll index,pmax,pmin;
ll dp[MAX];

void build(ll node, ll b, ll e){
	if (b == e){
		tree[node].a = A[b];
		tree[node].b = A[b];
		return;
	}
	ll left, right, mid;
	left = node * 2;
	right = node * 2 + 1;
	mid = (b + e) / 2;
	
	build(left, b, mid);
	build(right, mid + 1, e);
	tree[node].a = max(tree[left].a,tree[right].a);
	tree[node].b = min(tree[left].b, tree[right].b);
}

void query_max(ll node, ll b, ll e, ll l,  ll key){
	if(e<l)return;
	if(Found){
		return;
	}
	if(b>=l&&tree[node].a<key){
		pmax = max(pmax,tree[node].a);return;
	}
	if(b == e){
		//cout<<b<<endl;
		Found = true;
		index = b;
		return ;
	}
	
	ll left, right, mid;
	left = node * 2;
	right = node * 2 + 1;
	mid = (b + e) / 2;
	query_max(left, b, mid, l, key);
	query_max(right, mid+1, e, l, key);
}

void query_min(ll node, ll b, ll e, ll l,  ll key){
	
	if(e<l)return;
	if(Found){
		return;
	}
	if(b>=l and tree[node].b>key){
		pmin = min(pmin,tree[node].b);return;
	}
	if(b == e){
		Found = true; index = b;
		return;
	}
	
	ll left, right, mid;
	left = node * 2;
	right = node * 2 + 1;
	mid = (b + e) / 2;
	query_min(left, b, mid, l, key);
	query_min(right, mid+1, e, l, key);
}

int main ()
{
    fastIO();
    ll a,b,c,d,n,m,k,l,p,q,r,t,x,y;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    ll Max= 0,Max1=-1e18+1,Min=LINF;
    string s,s1,s3,s4;
    
    cin>>n; t = 1;
    
    for(int i = 1; i <= n; ++i){
    	cin >> A[i];
    	M[A[i]]=1;
    	dp[i] = INT_MAX;
    }

    dp[n] = INT_MAX ;
    dp[0]=0; dp[1]=0;
    
    build(1,1,n);
    for (int i = 1; i < n; i++){
    	index = INT_MAX ; Found = false; pmax = 0;
    	query_max(1,1,n,i+1,A[i]);
    	if(index<1000000)dp[index] = min(dp[index],dp[i] + 1);
    	else {
    		index = INT_MAX; Found = false;
    		query_max(1,1,n,i+1,pmax);
    		dp[index] = min(dp[i] + 1,dp[index]);
    		
    	}
    	cout<<i<<" u "<<index<<" "<<dp[index]<<" "<<A[index]<<endl;
    	index = INT_MAX; Found = false; pmin = INT_MAX ;
    	query_min(1,1,n,i+1,A[i]);
    	
    	if(index<1000000)dp[index] = min(dp[index],dp[i] + 1);
    	else {
    		index = INT_MAX; Found = false;
    		query_min(1,1,n,i+1,pmin);
    		dp[index] = min(dp[i] + 1,dp[index]);
    		
    	}
    	cout<<i<<" ddd "<<index<<" "<<dp[index]<<" "<<A[index]<<endl;
    	dp[i+1] = min(dp[i]+1,dp[i+1]);
    }
    cout<<dp[n]<<endl;
 

    return 0;
}
