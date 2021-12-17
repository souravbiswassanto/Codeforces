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

    ll t;
    cin>>t;
    while(t--){
        cin>>n;
        set<ll>S;
        set<ll>S1;
        Max=0;
        for(int i=0;i<n;i++){
            cin>>A[i];
            Max=mymax(A[i],Max);
            M[A[i]]++;
            S.insert(-1*A[i]);
        }
        map<ll,ll>M1;
        for(int i=0;i<n;i++){
            M1[A[i]]=0;
        }
        vector<pair<ll,ll> >res;
        for(int i=0;i<n;i++){
            if(M1[A[i]]==0){res.pb(mp(M[A[i]],A[i]));M1[A[i]]=1;}
        }
        for(int i=0;i<res.size();i++){
            cntr=0;ll ok=0;
            for(int j=i+1;j<res.size();j++){
                if(ok==0){
                    cntr+=res[j].first;
                    if(cntr>res[i].first){
                        ok=1;
                        cntr=0;continue;
                    }
                }
                if(ok==1){
                    cntr+=res[j].first;
                    if(cntr>res[i].first){
                        ok=2;
                        cntr=0;
                        break;
                    }
                }
            }
            if(ok==2)break;
            S.erase(res[i].second*-1);
        }
        ans=n/2;
        if(ans<=4||S.size()<3){cout<<0<<" "<<0<<" "<<0<<endl;continue;}
        auto it=S.begin();
        a=*it*-1;
        sum=M[a];check=0;
        ll cur=0,cur1=0;
        S.erase(-1*a);
        while(!S.empty()){
            auto it=S.begin();
            a=(*it)*-1;
            cur+=M[a];
            S.erase(*it);
            if(cur>sum){
                break;
            }

        }
        ll baki=sum+cur;
        baki=ans-baki;
        while(!S.empty()){
            auto it=S.begin();
            a=(*it)*-1;
            if(cur1+M[a]>baki){
                if(cur1<=sum)check=1;
                break;
            }
            cur1+=M[a];
            S.erase(*it);
        }
        if(check==1||cur<=sum||cur1<=sum){cout<<0<<" "<<0<<" "<<0<<endl;continue;}
        cout<<sum<<" "<<cur<<" "<<cur1<<endl;
        M.clear();
        S.clear();
    }

    return 0;
}
