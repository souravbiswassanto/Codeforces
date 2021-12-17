#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  300006
#define  mem(a,v)   memset(a,v,sizeof(a))

void fastIO (){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}

ll A[56][56];
ll B[56][56];
ll C[MAX];

int main ()
{

    fastIO();

    ll a,b,c,n,m,k,p,q,r;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    float x,y,z;
    ll Max=-1e18;
    unsigned long long Min = 1e20;
    string s,s1,s3,s4;

    cin>>n;

    for (int i=1;i<=n;i++){
        cin>>s;
        for (int j=1;j<=n;j++){
            if (s[j-1]=='.')A[i][j]=1;
            else A[i][j]=2;
        }
    }

    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if(A[i][j]==1){
                if (A[i+1][j]==1&&A[i+2][j]==1&&A[i+1][j-1]==1&&A[i+1][j+1]==1){
                    A[i+2][j]=3;
                    A[i+1][j]=3;
                    A[i+1][j+1]=3;
                    A[i+1][j-1]=3;
                    A[i][j]=3;
                }
            }
        }
    }

    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if(A[i][j]==1){
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
