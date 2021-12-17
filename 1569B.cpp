
// Problem: B. Chess Tournament
// Contest: Codeforces - Educational Codeforces Round 113 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1569/problem/B
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
        cin >> s;
        string S[55];
        for(int i = 0; i < n; i++){
            S[i] = "";
            for(int j = 0; j < n; j++){
                if(i == j)S[i] += 'X';
                else S[i] += '.';
            }
        }
        V.clear(); cntr = cnt = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '1')cntr++;
            else{
                cnt++;
                V.pb(i);
            }
        }
        if(cnt and cnt <= 2){
            cout <<"NO"<< endl; continue;
        }
        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                for(int j = 0; j < n; j++){
                    if(S[i][j] != '.')continue;
                    if(s[j] == '1'){
                        S[i][j] = '=';
                        S[j][i] = '=';
                    }
                    else {
                        S[j][i] = '-';
                        S[i][j] = '+';
                    }
                }
            }
        }
        cout <<"YES"<< endl;
        if(V.size()){
            a = V[0]; b = V[1]; c = V[2];
            S[a][b] = '+';
            S[b][a] = '-';
            S[b][c] = '+';
            S[c][b] = '-';
            
            for(int i = 0; i < n; i++){
                if(s[i] == '2'){
                    for(int j = 0; j < n; j++){
                        if(S[i][j] != '.')continue;
                        
                        S[j][i] = '+';
                        S[i][j] = '-';
                    }
                }
            }
        }
        
        for(int i = 0; i < n ;i++){
            for(int j = 0; j < n; j++)cout << S[i][j];cout << endl;
        }

    }
    /* 
        always check the limit and make sure that is correct.
        lcm of first 40 numbers  can be calculated.
        sqrt of 10^9 is 31622.
        always usee 1LL while doing binary operations.
    */

    return (0 - 0 + 1 -  1 * 1);
}
