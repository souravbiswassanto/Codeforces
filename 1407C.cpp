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
    t=1;

    while(t--){
        scanf("%lld",&n);
        vector<ll>res;

        if(n==1){
            printf("! 1\n");
            fflush(stdout);
            return 0;
        }
        cntr = 1;
        cnt = n;
        for(int i=1;i<n;i++){
            printf("? %lld %lld\n",cntr,cnt);
            fflush(stdout);
            scanf("%lld",&p);
            printf("? %lld %lld\n",cnt,cntr);
            fflush(stdout);
            scanf("%lld",&q);
            if(p==-1||q==-1)return -1;
            //cout<<p<<" "<<q<<" "<<cntr<<" "<<cnt<<endl;
            if(p<q){B[cnt] = q;cnt--;res.pb(q);}
            else {B[cntr]=p; cntr++;res.pb(p);}
        }
        for(int i=0;i<res.size();i++){
            A[res[i]] = 1;
            //cout<<res[i]<<endl;
        }
        for(int i=1;i<=n;i++){
            if(!A[i]){
                B[cnt]=i;;break;
            }
        }
        printf("! ");
        fflush(stdout);
        for(int i=1;i<=n;i++){
            printf("%lld ",B[i]);
            fflush(stdout);
        }
        printf("\n");
        fflush(stdout);
    }

    return 0;
}


/*

5
? 1 5
0
? 5 1
2
? 1 4
1
? 4 1
3
? 1 3
4
? 3 1
1
? 2 3
1
? 3 2
0
*/
