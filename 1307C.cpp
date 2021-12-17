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
vector< ll >Ans;
vector< pair<ll,ll> >VP;
map< string,vector<char> >M;
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

    cin>>s;

    if(s.size()==1){
        cout<<1<<endl;return 0;
    }
    if(s.size()==2){
        if(s[0]==s[1]){
            cout<<2<<endl;
        }
        else cout<<1<<endl;
        return 0;
    }

    for(int i=0;i<26;i++){
        for(int j=0;j<26;j++){
            s1="";
            s1+=(i+'a');
            s1+=(j+'a');
            V.pb(s1);
        }
    }

    for(int i=0;i<V.size();i++){
        for(int j=0;j<s.size();j++){
            if(s[j]==V[i][0]||s[j]==V[i][1])
                {M[V[i]].pb(s[j]);cout<<s[j];}
        }
        cout<<endl;

    }
    for(int i=0;i<V.size();i++){
        //cout<<i<<" "<<V[i]<<endl;
        a=M[V[i]].size();
        if(V[i][0]==V[i][1]){

            Max=max(Max,a);
            a--;
            a=a*(a+1);
            a/=2;
            Max=max(Max,a);
            continue;
        }
        cntr=1;cnt=1;
        for(int j=0;j<a-1;j++){
            if(M[V[i]][j]!=M[V[i]][j+1]){
                cout<<cntr<<" ";
                B[cnt++]=cntr;

                cntr=1;
            }
            else cntr++;
        }
        cout<<cntr<<" cnt "<<cnt<<endl;
        B[cnt]=cntr;

        ll ck=1;
        for(int j=1;j<=cnt/2;j++){
            sum+=(B[ck]*B[ck+1]);ck+=2;
        }
        cout<<Max<<" "<<sum<<endl;
        Max=max(sum,Max);
        sum=0;
    }

    cout<<Max<<endl;

    return 0;
}
