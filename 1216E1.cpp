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

ll digit(ll n){
    ll cnt=0;
    while(n!=0){
        cnt++;
        n/=10;
    }
    return cnt;
}

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

//    cin>>t;
//    while(t--){

            cin>>k;

    n=9999;

    for(int i=1;i<=n;i++){
        if(i<=9){
            sum=sum+i;
            a=i;
            A[i]=sum;
        }
        else if(i<=99){
            sum=sum+a+2;
            a=a+2;
            b=a;
            A[i]=sum;
        }
        else if(i<=999){
            sum=sum+b+3;
            b+=3;
            c=b;
            A[i]=sum;
        }
        else if(i<=9999){
            sum+=c+4;
            c+=4;
        }
        A[i]=sum;
        //cout<<i<<" "<<sum<<endl;
        if(sum>k){
            p=i;
            break;
        }

    }

    r=A[p-1];
    ll pos=k-r;
//    cout<<r<<" " <<pos<<endl;
//    cout<<p<<endl;

    ll d=digit(p);
    //cout<<"ok"<<endl;
    d--;//cout<<k<<" "<<d<<endl;
    ll num=0;
    for(int i=1;i<=d;i++) num=num*10+9;

    ll newpos=p-num;

    ll xx=newpos/d; ll rr=newpos%d;

    if(rr==0){
        cout<<p%10<<endl;
    }
    else if(rr==1){
        ll ans=p+1;
        cout<<ans%100<<endl;
    }
    else if(rr==2){
        ll ans=p+1;
        cout<<ans%1000<<endl;
    }
    else{
        ll ans=p+1;
        cout<<ans%10000<<endl;
    }

    //}

    //cout<<sum<<endl;

    return 0;
}
