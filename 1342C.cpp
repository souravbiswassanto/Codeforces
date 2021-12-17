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
    ll a,b,c,n,m,k,p,q,l,r,t;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    ll x,y,z;
    ll Max= 0,Max1=-1e18+1;
    ll Min = 1e18;
    string s,s1,s3,s4;
//    while(1){
//        cin>>n>>a>>b;
//
//        for(int i=0;i<n;i++){
//            cout<<" i ="<<i<<" a "<<a<<" b "<<b<<" "<<((i%a)%b)<<" "<<((i%b)%a)<<endl;
//        }
//    }

    cin>>t;
    while(t--){
        cin>>a>>b>>q;

        ll gcd=__gcd(a,b);
        ll lcm=(a*b)/gcd;
        Max=max(a,b);

        while(q--){
            cin>>l>>r;
            ll gap,diff;
            x=l/lcm;
            y=r/lcm;
            //cout<<x<<" "<<y<<endl;
            //cout<<"enter 1"<<lcm<<" "<<gcd<<endl;
            if(x==y){
                    //cout<<11<<endl;
                gap=lcm*x+Max;
                //cout<<r<<" "<<gap<<endl;
                if(r>=gap){
                    //cout<<111111111<<endl;
                    cout<<r-max(gap,l)+1<<" ";
                }
                else cout<<0<<" ";
            }
            else if(y-x==1){
                //cout<<22<<endl;
                gap=lcm*x+Max;
                diff=lcm*y+Max;
                ll val=(lcm*y)-max(gap,l);
                if(diff<=r){
                    val+=(r-diff+1);
                }
                cout<<val<<" ";
            }
            else {
                //cout<<3<<endl;
                ll val=(y-1)-(x+1)+1;
                ll va=val*(lcm-Max);
                gap=lcm*x+Max;
                ans=(lcm*(x+1))-max(gap,l);
                gap=lcm*y+Max;
                if(r>=gap){
                    ans+=(r-gap+1);
                }
                cout<<va+ans<<" ";
            }
        }
        //cout<<endl<<"exit"<<endl;
        cout<<endl;
    }


    return 0;
}
