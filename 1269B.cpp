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
map< ll,ll >::iterator it1;
map< ll,ll >M1;
vector<ll>prime;
bool mark[MAX1];
set<ll>S;
set<ll>S1;
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

    cin>>n>>m;

    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<n;i++){
        cin>>B[i];
        S1.insert(B[i]);
        M[B[i]]++;
    }
    sort(A,A+n);
    sort(B,B+n);
    for(int i=0;i<n;i++){
        if(A[i]<=B[0])S.insert(B[0]-A[i]);
        else S.insert(m-A[i]+B[0]);
    }

    for(auto it:S)V.pb(it);

    for(int i=0;i<V.size();i++){
        check=0;
        for(int j=0;j<n;j++){
            a=A[j]+V[i];
            a%=m;
            M1[a]++;
        }

        for(auto it:S1){
            if(M[it]!=M1[it])check=1;
        }

        if(check==0){
            cout<<V[i]<<endl;return 0;
        }
        M1.clear();
    }

    return 0;
}
