//#include <bits/stdc++.h>
//using namespace std ;
//
//#define  ll   long long
//#define  pb  push_back
//#define  mp  make_pair
//#define  MAX  500006
//#define  Max(a,b,c) max(a,max(b,c))
//#define  Min(a,b,c) min(a,min(b,c))
//#define  mem(a,v)   memset(a,v,sizeof(a))
//#define  rep        for (int i=0;i<n;i++)
//#define  Rep        for (int i=0;i<m;i++)
//
//void fastIO (){
//
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
//    cout.precision(20);
//}
//
//ll A[MAX];
//ll B[MAX];
//ll C[MAX];
//
//ll rev (ll a,ll b){
//
//    return a>b;
//}
//
//int main ()
//{
//
//    fastIO();
//    vector<ll> V;
//    set<ll>S;
//    set<ll>::iterator it;
//
//    ll a,b,c;
//    ll n,m;
//    ll cnt=0,cntr=0,sum=0,ans=1;
//    ll p,q,r;
//    ll v=1;
//    ll check=0;
//    ll x,y,z;
//    ll Max=0,Min=INT_MAX,pos=0;
//    string s,s1,s3,s4;
//
//    cin>>n;
//
//    for (int i=1;i<=n;i++){
//        cin>>A[i];
//        A[i+n]=A[i];
//        Min=min(Min,A[i]);
//    }
//    cout<<"MIN "<<Min<<endl;
//    for (int i=1;i<=n;i++){
//        if (A[i]==Min)
//            {pos=i;break;}
//    }
//    for (int i=1;i<=2*n;i++)cout<<A[i]<<" ";
//    cout<<endl<<"pos "<<pos<<endl;
//    for (int j=pos;j<pos+n-1;j++){
//        if (A[j]<A[j+1]){cout<<A[j]<<" "<<A[j+1]<<endl;}
//        else {cout<<A[j]<<" "<<A[j+1]<<" j "<<j<<endl;cout<<-1<<endl;return 0;}
//    }
//
//    if (pos==1)cout<<0<<endl;
//    else if (pos==n)cout<<1<<endl;
//    else cout<<n-pos+1<<endl;
//
//    return 0;
//}
#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  500006
#define  Max(a,b,c) max(a,max(b,c))
#define  Min(a,b,c) min(a,min(b,c))
#define  mem(a,v)   memset(a,v,sizeof(a))
#define  rep        for (int i=0;i<n;i++)
#define  Rep        for (int i=0;i<m;i++)

void fastIO (){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}

ll A[MAX];
ll B[MAX];
ll C[MAX];

ll rev (ll a,ll b){

    return a>b;
}

int main ()
{

    fastIO();
    vector<ll> V;
    set<ll>S;
    set<ll>::iterator it;

    ll a,b,c;
    ll n,m;
    ll cnt=0,cntr=0,sum=0,ans=1;
    ll p,q,r;
    ll v=1;
    ll check=0;
    ll x,y,z;
    ll Max=0,Min=INT_MAX,pos=0;
    string s,s1,s3,s4;

    cin>>n;

    for (int i=1;i<=n;i++){
        cin>>A[i];
        S.insert(A[i]);
        A[i+n]=A[i];
    }
    if (S.size()==1){cout<<0<<endl;return 0;}
    B[0]=1;
    for (int i=1;i<2*n;i++){
        if (A[i]>A[i+1]){
            B[v++]=i+1;
        }
    }

    for (int i=0;i<v;i++){
        if (B[i+1]-B[i]==n){pos=B[i];
            if (pos==1)cout<<0<<endl;
            else if (pos==n)cout<<1<<endl;
            else cout<<n-pos+1<<endl;
        return 0;
        }
    }
    cout<<-1<<endl;

    return 0;
}
