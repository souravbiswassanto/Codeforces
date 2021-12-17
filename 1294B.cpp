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
struct sourav{
    ll a;
    ll b;
    sourav(ll c,ll d){
        a=c;b=d;
    }

};

vector< sourav >V;
vector< ll >Ans;
vector< pair<ll,ll> >VP;
map< ll,ll >M;
vector<ll>prime;
bool mark[MAX1];
ll N=1e7;
void seive (){int limit = sqrt(N*1.0)+2;mark[1]=1;for (int i=4;i<=N;i+=2)mark[i]=1;prime.push_back(2);for (int i=3;i<=N;i+=2){if(!mark[i]){prime.push_back(i);if(i<=limit){for (int j=i*i;j<=N;j+=i*2)mark[j]=1;}}}}
bool compare (sourav A,sourav B){
    if(A.a==B.a)return A.b<B.b;
    else return A.a<B.a;
}
int main ()
{
    fastIO();
    ll a,b,c,n,m,k,p,q,r;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    ll x,y,z;
    ll Max= 0,Max1=-1e18+1;
    ll Min = 1e18;
    string s,s1,s3,s4;
    ll t;
    cin>>t;
    while(t--){
        cin>>n;

        for(int i=0;i<n;i++){
            cin>>a>>b;
            V.pb(sourav(a,b));
        }
        s="";
        sort(V.begin(),V.end(),compare);
        p=0,q=0,check=0;
        for(int i=0;i<n;i++){
            x=V[i].a;
            y=V[i].b;

            if(p>x||q>y){
                check=1;break;
            }
            //cout<<p<<x<<q<<y<<endl;
            for(int j=0;j<(x-p);j++){
                s+='R';
            }
            for(int j=0;j<(y-q);j++){
                s+='U';
            }
            p=x;q=y;
        }
        if(check)cout<<"NO"<<endl;
        else {
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }
        V.clear();
    }



    return 0;
}
