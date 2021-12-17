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
ll N=1e7;
void seive (){int limit = sqrt(N*1.0)+2;mark[1]=1;for (int i=4;i<=N;i+=2)mark[i]=1;prime.push_back(2);for (int i=3;i<=N;i+=2){if(!mark[i]){prime.push_back(i);if(i<=limit){for (int j=i*i;j<=N;j+=i*2)mark[j]=1;}}}}
ll evpa[100006];
ll evpb[100006];
ll odpa[100006];
ll odpb[100006];
int main ()
{
    fastIO();
    ll a,b,c,d,n,m,k,p,q,r;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    float x,y,z;
    ll Max= 0,Max1=-1e18+1;
    ll Min = 1e18;
    string s,s1,s3,s4;

    cin>>n>>q;

    for(int i=1;i<=n;i++){
        cin>>A[i];
        if(A[i]%2==0)evpa[i]=1;
        else odpa[i]=1;
    }
    for(int i=1;i<=n;i++){
        cin>>B[i];
        if(B[i]%2==0)evpb[i]=1;
        else odpb[i]=1;
    }

    for(int i=1;i<=n;i++){
        //cout<<evpa[i]<<" "<<evpb[i]<<" "<<odpa[i]<<" "<<odpb[i]<<endl;
        evpa[i]+=evpa[i-1];
        evpb[i]+=evpb[i-1];
        odpa[i]+=odpa[i-1];
        odpb[i]+=odpb[i-1];
        //cout<<i<<" --> "<<evpa[i]<<" "<<evpb[i]<<" "<<odpa[i]<<" "<<odpb[i]<<endl;
    }

    for(int i=0;i<q;i++){
        cin>>a>>b>>c>>d;
        ll odd=0,even=0;
        if(A[a]%2||B[b]%2||A[c]%2||B[d]%2)odd=1;else even=1;
        check=0;
        if(A[a]%2!=A[c]%2){cout<<"NO"<<endl;continue;}
        if(odd&&abs(odpa[a]-odpa[c])==abs(a-c)&&abs(odpb[b]-odpb[d])==abs(b-d))check=1;
        else if(even&&abs(evpa[a]-evpa[c])==abs(a-c)&&abs(evpb[b]-evpb[d])==abs(b-d))check=1;
        if(check==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


    return 0;
}
