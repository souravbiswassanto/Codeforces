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

int main ()
{
    fastIO();
    ll a,b,c,n,m,k,p,q,r;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    float x,y,z;
    ll Max= 0,Max1=-1e18+1;
    ll Min = 1e18;
    string s,s1,s3,s4;

    cin>>q;

    while(q--){
        cin>>n;
        Max=0;
        Min=1e18;
        ll dif=0;check=0;
        for(int i=1;i<=n;i++){
            cin>>A[i];
        }
        for(int i=1;i<=n;i++){
            if(A[i]==-1)continue;
            if((A[i-1]==-1||A[i+1]==-1)){
                Max=max(Max,A[i]);
                Min=min(Min,A[i]);
                check=1;
            }
//            if(i==n&&A[i-1]!=-1){
//                dif=max(dif,abs(A[i]-A[i-1]));continue;
//            }
//            if(i==0&&A[i+1]!=-1){
//                dif=max(dif,abs(A[i]-A[i+1]));continue;
//            }

            if(A[i]!=-1&&A[i+1]!=-1&&i<n){
                dif=max(dif,abs(A[i]-A[i+1]));
                //cout<<dif<<" 666 "<<i<<endl;
            }
        }
        if(!check){
            cout<<dif<<" "<<0<<endl;continue;
        }
        //cout<<dif<<" "<<Max<<" "<<Min<<endl;
        ans=(Max+Min)/2;
        sum=max(Max-ans,ans-Min);
        sum=max(dif,sum);
        cout<<sum<<" "<<ans<<endl;
    }

    return 0;
}
