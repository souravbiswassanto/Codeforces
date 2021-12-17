#include <bits/stdc++.h>
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
/*
ll spf[10000004];
void seive ()
{
    int limit = sqrt(N*1.0)+2; spf[1] = 1; spf[2] = 2;for (int i=4; i<=N; i += 2)spf[i]=2;prime.push_back(2);for (int i=3; i<=N; i+=2){if(spf[i]==i){prime.push_back(i);if(i<=limit){for (int j=i*i; j<=N; j+=i*2){if(spf[j]==j)spf[j] = i;}}}}
}
*/
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
        cin>>n; cntr = 0; cnt = 0;
        for(int i=0;i<n;i++){
            cin>>A[i];
            if(A[i])cntr++;
            else cnt++;
        }
        if(cnt>=n/2){
            cout<<n/2<<endl;
            for(int i=0;i<n/2;i++){
                cout<<0<<" ";
            }
            cout<<endl;
        }
        else {
            n/=2;

            if(n%2){
                cout<<n+1<<endl;
                for(int i=0;i<n+1;i++){
                    cout<<1<<" ";
                }
                cout<<endl;
            }
            else {
                cout<<n<<endl;
                for(int i=0;i<n;i++){
                    cout<<1<<" ";
                }
                cout<<endl;
            }
        }
    }

    return 0;
}
