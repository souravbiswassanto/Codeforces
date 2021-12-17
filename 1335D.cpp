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

ll A[100000][10];
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

int build (int n){

        for(int j=1;j<=9;j++){
            if(B[j]==0&&n!=j){
                B[j]=1;
                return j;
            }
        }
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

    cin>>q;

    while(q--){
        for(int i=0;i<9;i++){
            cin>>s;

            for(int j=1;j<=9;j++){
                A[i+1][j]=s[j-1]-'0';
            }
        }

        a=build(A[1][1]);A[1][1]=a;
        a=build(A[2][4]);A[2][4]=a;
        a=build(A[3][7]);A[3][7]=a;
        a=build(A[4][2]);A[4][2]=a;
        a=build(A[5][5]);A[5][5]=a;
        a=build(A[6][8]);A[6][8]=a;
        a=build(A[7][3]);A[7][3]=a;
        a=build(A[8][6]);A[8][6]=a;
        a=build(A[9][9]);A[9][9]=a;

        for(int i=0;i<=10;i++)B[i]=0;
        for(int i=1;i<=9;i++){
            for(int j=1;j<=9;j++)cout<<A[i][j];
            cout<<endl;
        }
    }

    return 0;
}
