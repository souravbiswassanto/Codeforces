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
    int t;
    cin>>t;

    while(t--){
        cin>>n;
        cntr=1;
        sum=0;
        ll A[n+10];
        ll Max1=0;
        ll Max2=0;
        for(int i=1;i<=n;i++){
            cin>>A[i];
            Max1=max(A[i],Max1);
        }
        vector<pair<ll,ll> >V2;
        vector<ll>V;
        cin>>m;

        for(int i=1;i<=m;i++){
            cin>>a>>b;
            V2.pb(mp(a,b));
            Max2=max(Max2,a);
        }
        if(Max2<Max1){cout<<-1<<endl;continue;}
        sort(V2.begin(),V2.end());
        for(int i=0;i<m;i++){
            V.pb(V2[i].first);
        }
        Max=0;
        for(int i=m-1;i>=0;i--){
            Max=max(V2[i].second,Max);
            if(Max>=V2[i].second){
                V2[i].second=Max;
            }
        }
        ll lastmax=0;
        for(int i=0;i<n;i++){
            if(lastmax<A[i+1]){
                lastmax=A[i+1];
            }
             int it=lower_bound(V.begin(), V.end(), lastmax) - V.begin();

            if(V2[it].second<cntr){
                i--;
                sum++;
                cntr=1;
                lastmax=0;
                continue;
            }
            else cntr++;
        }
        cout<<sum+1<<endl;
    }

    return 0;
}
