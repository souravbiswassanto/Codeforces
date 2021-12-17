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

    cin>>p;

    while(p--){
        cin>>a>>b>>n>>r;

        if(b>=r||(r%n==0&&(r/n)<=a)){
            cout<<"YES"<<endl;
        }
        else if(r>a*n+b){
            cout<<"NO"<<endl;
        }
        else {
            q=n*min(r/n,a);
            if(q+b>=r){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
    }


    return 0;
}

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

    cin>>p;

    while(p--){
        cin>>n;
        ll B[n+25];
        ll  A[n+20];
        mem(B,0);
        for(int i=1;i<=n;i++){
            cin>>A[i];
            B[A[i]]=i;
        }

        cntr=1;
        int i=1;
        r=1;
        cnt=0;
        while(1){

            ll tem,temp=A[r];
            if(r>n||cnt>=n-1)break;
            if(cntr==B[cntr]){
                cntr++;
                r++;
                i++;
                continue;
            }
            //cout<<88888<<endl;
            if(r<B[cntr]){
                while(temp!=cntr){
                    tem=A[r+1];
                    //cout<<tem<<" "<<cnt<<" "<<temp<<" "<<r<<endl;
                    A[r+1]=temp;
                    //cout<<A[r+1]<<endl;
                    temp=tem;
                    B[A[r+1]]=r+1;
                    //cout<<B[A[r+1]]<<endl;
                    r++;
                    cnt++;
                    //for(int k=1;k<=n;k++)cout<<A[k]<<" ";cout<<endl;
                }
                //cout<<111<<endl;
                A[i]=temp;
                i=r;
                cntr++;
            }
            else {
                cntr++;
            }
        }
        for(int j=1;j<=n;j++)cout<<A[j]<<" ";cout<<endl;
    }



    return 0;
}
