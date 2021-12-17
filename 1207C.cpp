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

    ll t;

    cin>>t;
    while(t--){
        cin>>n>>a>>b;
        cin>>s;
        vector<ll> v;
        for(int i=0;i<n;i++){
            if(s[i]=='1') v.pb(i+1);
        }
        ll ans=(n+1)*b;
        ans+=a;
        //cout<<ans<<endl;
        if(v.size()){
            ll zero=v[0]-1;
            ans+=((zero-1)*a);
            ans+=(2*a);
            ans+=b;
                ll z=n-v[v.size()-1];
                ans+=((z-1)*a);
                if(v.size()>1) ans+=(2*a + b);
                ans+=(2*a);
        }
        else{
            ans+=((n-1)*a);
            //cout<<"ase"<<endl;
            cout<<ans<<endl; continue;
        }
        for(int i=0;i<v.size()-1;i++){
            ll d=v[i+1]-v[i]-1;
            if(d==0){
                ans+=(a+b);
                continue;
            }
            ll c1=d*b + (d+1)*a;
            ll c2=4*a + (d-1)*a;

            //cout<<c1<<" "<<c2<<endl;

            ans+=min(c1,c2);
        }
        cout<<ans<<endl;
    }



    return 0;
}
