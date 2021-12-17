//#include <bits/stdc++.h>
//using namespace std ;
//
//#define  ll   long long
//#define  pb  push_back
//#define  mp  make_pair
//#define  MAX  500006
//#define  MAX1  10000008
//#define  mem(a,v)   memset(a,v,sizeof(a))
//
//template <typename T>
//T mymax (T a,T b){return (a>b)?a:b;}
//template <typename T>
//T mymin (T a,T b){return (a<b)?a:b;}
//template <typename T>
//T myabs (T a){return (a<0)?(-1*a):a;}
//template <typename T>
//T mysqrt (T x){if (x == 0 | x == 1)return x;int start = 1, End = x, ans;while (start <= End){int mid = (start + End) / 2;if (mid*mid == x)return mid;if (mid*mid < x){start = mid + 1;ans = mid;}else End = mid-1;}return ans;}
//
//void fastIO (){ios_base::sync_with_stdio(false);cin.tie(0); cout.precision(20);}
//
//ll A[MAX];
//ll B[MAX];
//ll C[MAX];
//vector< ll >V;
//vector< ll >Ans;
//vector< pair<ll,ll> >VP;
//map< ll,ll >M;
//vector<ll>prime;
//bool mark[MAX1];
//ll N=1e7;
//void seive (){int limit = sqrt(N*1.0)+2;mark[1]=1;for (int i=4;i<=N;i+=2)mark[i]=1;prime.push_back(2);for (int i=3;i<=N;i+=2){if(!mark[i]){prime.push_back(i);if(i<=limit){for (int j=i*i;j<=N;j+=i*2)mark[j]=1;}}}}
//
//int main ()
//{
//    fastIO();
//    ll a,b,c,n,m,k,p,q,r;
//    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
//    float x,y,z;
//    ll Max= 0,Max1=-1e18+1;
//    ll Min = 1e18;
//    string s,s1,s3,s4;
//
//    cin>>n>>m;
//    if(n==0&&m!=0){
//        cout<<"Impossible"<<endl;
//        return 0;
//    }
//    if(n==0&&m==0){
//        cout<<0<<" "<<0<<endl;return 0;
//    }
//    a=m/n;
//    if(a==0){
//        Min=n;
//    }
//    else{
//        Min=a;
//        Min*=n;Min+=(m%n);
//    }
//    if(m==0)sum=n;
//    else sum=m+(n-1);
//    cout<<Min<<" "<<sum<<endl;
//
//    return 0;
//}
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
map< ll,ll >M;
vector<ll>prime;
bool mark[MAX1];
ll N=1e7;
void seive (){int limit = sqrt(N*1.0)+2;mark[1]=1;for (int i=4;i<=N;i+=2)mark[i]=1;prime.push_back(2);for (int i=3;i<=N;i+=2){if(!mark[i]){prime.push_back(i);if(i<=limit){for (int j=i*i;j<=N;j+=i*2)mark[j]=1;}}}}
string s;
ll pos;
ll solve(){
    ll cntr=0;
    for(int i=0;i<2;i++){
        cntr++;
        //cout<<pos<<" "<<V[pos]<<endl;
        if(V[pos]=="pair"){
            s+=V[pos];
            s+='<';
            ++pos;
            solve();
            if(cntr==1)s+=',';
            else s+='>';
        }
        else if(cntr==1){
            s+=V[pos];
            s+=',';++pos;
        }
        else {
            s+=V[pos];
            s+='>';++pos;
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
    string s1,s3,s4;

    cin>>n;
    cin.ignore();
    getline(cin,s);
    s1="";
    if(s=="int"){
        cout<<"int"<<endl;return 0;
    }
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            V.pb(s1);
            if(s1[0]=='p')cntr++;
            s1="";
        }
        else s1+=s[i];
    }
    if(cntr!=n+1){
        cout<<"Error occurred"<<endl;
    }
    V.pb(s1);
    s="";
    s+=V[0];
    s+='<';
    ++pos;
    solve();
    cout<<s<<endl;

    return 0;
}
