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
ll even[MAX];
ll Even[MAX];
ll Odd[MAX];
ll odd[MAX];
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
    ll a=1,b,c,n,m,k,p,q,r;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    float x,y,z;
    ll Max= 0,Max1=-1e18+1;
    ll Min = 1e18;
    string s,s1,s3,s4;

    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>A[i];
        if(A[i]<0){
            B[i]=B[i-1]+1;
        }
        else B[i]=B[i-1];
    }
    for(int i=1;i<=n;i++){
        if(A[i]<0)check=1;
        if(!check)continue;
        if(B[i]%2==1){cntr++;
        else cnt++;
        Odd[i]=cntr;
        odd[i]=cnt;
    }
    for(int i=1;i<=n;i++){
        if(a%2==0){
            if(A[i]<0)b=cnt-odd[i]+1;
            else b=cnt-odd[i];sum+=b;
        }
        else {
            if(A[i]<0)b=cntr-Odd[i]+1;
            else b=cntr-Odd[i];sum+=b;
        }
        if(A[i]<0)a++;
    }
    cntr=0;cnt=0;
    ans=0;check=0;
    for(int i=1;i<=n;i++){
        if(B[i]%2==0){
            cntr++;
            check==0;
        }
        else {
            cnt++;
            if(check==0)cnt--;
            check++;
        }
        Even[i]=cntr;
        even[i]=cnt;
    }
    a=1;
    for(int i=1;i<=n;i++){
        if(a%2==0){
            if(A[i]>0)b=cnt-even[i]+1;
            else b=cnt-even[i];ans+=b;
        }
        else {
            if(A[i]>0)b=cntr-Even[i]+1;
            else b=cntr-Even[i];ans+=b;
        }
        if(A[i]<0)a++;
    }
    cout<<sum<<" "<<ans<<endl;
    return 0;
}
