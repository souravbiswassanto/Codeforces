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
vector< string >V;
vector< string >V1;
vector< ll >Ans;
vector< pair<ll,ll> >VP;
map< string,ll >M;
map< string,ll >M1;
map< string,ll >M2;
vector<ll>prime;
bool mark[MAX1];
ll N=1e7;
void seive (){int limit = sqrt(N*1.0)+2;mark[1]=1;for (int i=4;i<=N;i+=2)mark[i]=1;prime.push_back(2);for (int i=3;i<=N;i+=2){if(!mark[i]){prime.push_back(i);if(i<=limit){for (int j=i*i;j<=N;j+=i*2)mark[j]=1;}}}}

bool check(string s){

    string s1="";
    s1=s;
    reverse(s1.begin(),s1.end());
    if(s==s1)
        return true;
    else return false;
}

int main ()
{
    fastIO();
    ll a,b,c,n,m,k,p,q,r;
    ll cnt=0,cntr=0,sum=0,ans=1;
    float x,y,z;
    ll Max= 0,Max1=-1e18+1;
    ll Min = 1e18;
    string s[1000],s1,s3,s4;

    cin>>n>>m;

    for(int i=0;i<n;i++){
        cin>>s[i];
        bool ck=check(s[i]);
        if(ck){
            M2[s[i]]=1;
        }
        M[s[i]]++;
    }

    for(int i=0;i<n;i++){
        s1="";
        s1=s[i];
        reverse(s1.begin(),s1.end());
        if(M2[s[i]]){
            s3=s[i];
            if(M[s[i]]<=1){cntr=1;continue;}
        }
        if(M[s1]&&M1[s1]==0&&M1[s[i]]==0){
            M1[s1]=1;
            M1[s[i]]=1;
            V.pb(s[i]);
            V1.pb(s1);
        }
    }
    if(cntr){
            cout<<V.size()*m+V1.size()*m+m<<endl;
    }
    else cout<<V.size()*m*2<<endl;
    for(int i=0;i<V.size();i++){
        cout<<V[i];
    }
    if(cntr)cout<<s3;
    for(int i=V1.size()-1;i>=0;i--){
        cout<<V1[i];
    }
    cout<<endl;
    return 0;
}
