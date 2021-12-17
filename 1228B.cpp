#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  500006
#define  MAX1  10000008
#define  mem(a,v)   memset(a,v,sizeof(a))
#define MOD  1000000007

void fastIO (){ios_base::sync_with_stdio(false);cin.tie(0); cout.precision(20);}

ll A[MAX];
ll B[MAX];
ll C[1006][1006];

int main ()
{
    fastIO();
    ll a,b,c,n,m,k,p,q,r,h,w;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    float x,y,z;
    ll Max= 0,Max1=-1e18+1;
    ll Min = 1e18;
    string s,s1,s3,s4;

    cin>>h>>w;

    for(int i=1;i<=h;i++){
        cin>>A[i];
    }
    for(int i=1;i<=w;i++){
        cin>>B[i];
    }
    for(int i=1;i<=h;i++){
        int j=1;
        for(j=1;j<=A[i];j++){
            C[i][j]=1;
        }
    }

    for(int i=1;i<=w;i++){
        int j=1;
        for(j=1;j<=B[i];j++){
            C[j][i]=1;
        }
    }

    for(int i=1;i<=h;i++){
        cnt=0;
        for(int j=1;j<=w;j++){
            if(C[i][j]!=1){
                break;}
            else cnt++;
        }
        if(cnt!=A[i]){
            cout<<0<<endl;return 0;
        }
    }

    for(int i=1;i<=w;i++){
        cnt=0;
        for(int j=1;j<=h;j++){
            if(C[j][i]!=1){
                break;}
            else cnt++;
        }
        if(cnt!=B[i]){
            cout<<0<<endl;return 0;
        }
    }
    for(int i=1;i<=h;i++){
        int j=1;
        for(j=1;j<=A[i];j++){
            C[i][j]=1;
        }
        C[i][j]=1;
    }

    for(int i=1;i<=w;i++){
        int j=1;
        for(j=1;j<=B[i];j++){
            C[j][i]=1;
        }
        C[j][i]=1;
    }

    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            if(C[i][j]!=1)cntr++;
        }
    }

    for(int i=1;i<=cntr;i++){
        ans*=2;
        ans=ans%MOD;
    }
    if(cntr)cout<<ans<<endl;
    else cout<<1<<endl;

    return 0;
}
