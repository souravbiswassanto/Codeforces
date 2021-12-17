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
        cin>>s>>s1;
        cntr=0;
        check=0;
        char ch,ch1;
        map<char,ll>M;
        vector< pair <ll,ll> >V;
        for(int i=0;i<26;i++){M[char(i+97)]=0;}
        check=0;
        for(int i=0;i<n;i++){
            M[s[i]]++;
            M[s1[i]]++;
        }
        for(int i=0;i<26;i++){
            //cout<<char(i+97)<<" "<<M[char(i+97)]<<endl;
            if(M[char(i+97)]%2==1){
                check=1;
            }
        }
        if(check==1){
            cout<<"NO"<<endl;
            continue;
        }
        for(int i=0;i<n;i++){
            if(s[i]!=s1[i]){
                for(int j=i;j<n;j++){
                    if(s[i]==s1[j]){
                        swap(s1[j],s[j]);
                        swap(s[j],s1[i]);
                        V.pb(mp(j,j));
                        V.pb(mp(j,i));
                    }
                    else if (s[i]==s[j]){
                        swap(s[j],s1[i]);
                        V.pb(mp(i,j));
                    }
                }
            }
        }
        cout<<s<<" "<<s1<<endl;
        if(s!=s1){
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
            cout<<V.size()<<endl;
            for(int i=0;i<V.size();i++)cout<<V[i].first<<" "<<V[i].second<<endl;
        }
    }

    return 0;
}
