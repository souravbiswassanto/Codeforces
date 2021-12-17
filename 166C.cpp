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

    cin>>n>>k;

    for(int i=0;i<n;i++){
        cin>>a;V.pb(a);
        A[a]++;
    }
    sort(V.begin(),V.end());
    if(V[(n)/2]==k){
        cout<<0<<endl;return 0;
    }
    if(V[0]>k||V[n-1]<k){cout<<n+1<<endl;return 0;}
    ans=0;
    if(A[k]==0){
        ll pos=lower_bound(V.begin(),V.end(),k)-V.begin();
        p=n-pos;
        q=pos;
        if(p==q){cout<<2<<endl;return 0;}
        else if(p>q){
             cout<<min(p-q<<endl;return 0;
        }
        else{ cout<<q-p+1<<endl;return 0;}
    }

    if(A[k]==1){
        ll pos=lower_bound(V.begin(),V.end(),k)-V.begin();pos++;
        p=n-pos;
        q=pos-1;
        cout<<p<<" "<<q<<endl;
        if(p==q){cout<<0<<endl;return 0;}
        else if(p>q){
            cout<<p-q-1<<endl;return 0;
        }
        else{ cout<<q-p<<endl;return 0;}
    }
    ll fpos=upper_bound(V.begin(),V.end(),k-1)-V.begin();
    ll lpos=upper_bound(V.begin(),V.end(),k)-V.begin()-1;
    fpos++;lpos++;
    p=n-lpos;
    q=lpos-1;

    if(p<n/2){
        cout<<n/2-p<<endl;return 0;
    }
    else {cout<<q-p<<endl;return 0;}

    return 0;
}
