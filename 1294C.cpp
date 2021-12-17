#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  500006
#define  MAX1  10000008
#define  mem(a,v)   memset(a,v,sizeof(a))

template <typename T>
T mymax (T a,T b){return (a>b)?a:b;}
template <typename T>
T mymin (T a,T b){return (a<b)?a:b;}
template <typename T>
T myabs (T a){return (a<0)?(-1*a):a;}
template <typename T>
T mysqrt (T x){if (x == 0 | x == 1)return x;int start = 1, End = x, ans;while (start <= End){int mid = (start + End) / 2;if (mid*mid == x)return mid;if (mid*mid < x){start = mid + 1;ans = mid;}else End = mid-1;}return ans;}

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
ll N=2e5;
void seive (){int limit = sqrt(N*1.0)+2;mark[1]=1;for (int i=4;i<=N;i+=2)mark[i]=1;prime.push_back(2);for (int i=3;i<=N;i+=2){if(!mark[i]){prime.push_back(i);if(i<=limit){for (int j=i*i;j<=N;j+=i*2)mark[j]=1;}}}}

int main ()
{
    fastIO();
    ll a,b,c,n,m,k,p,q,r;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    float x,y,z;
    ll Max= 0,Max1=-1e18+1;
    ll Min = 1e18;
    string s,s1,s3,s4;
    seive();
    cin>>q;
    while(q--){
        cin>>n;
        m=n;
        for(int i=0;prime[i]*prime[i]<=n;i++){
            while(n%prime[i]==0){
                V.pb(prime[i]);n/=prime[i];
            }
        }
        if(n!=1){
            V.pb(n);
        }
        ll last=0,New=1;cntr=0;
        A[0]=1;A[1]=1;
        for(int i=0;i<V.size();i++){
            New*=V[i];
            if(cntr==2){break;}
            if(New!=last){
                A[cntr++]=New;
                last=New;New=1;
            }
        }
        m/=A[0];
        m/=A[1];
        set<ll>S;
        if(A[0]!=1)S.insert(A[0]);
        if(A[1]!=1)S.insert(A[1]);
        if(m!=1)S.insert(m);
        if(S.size()==3){
            cout<<"YES"<<endl;
            cout<<A[0]<<" "<<A[1]<<" "<<m<<endl;
        }
        else cout<<"NO"<<endl;
        S.clear();
        V.clear();
    }


    return 0;
}
