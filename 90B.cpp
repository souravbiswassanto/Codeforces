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

ll A[MAX];
ll B[MAX];
ll C[MAX];

int main ()
{

    fastIO();

    ll a,b,c,n,m,k,p,q,r;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0,check1=0;
    float x,y,z;
    ll Max=-1e18;
    unsigned long long Min = 1e20;
    string s[1000],s1="",s3,s4;

    cin>>n>>m;

    for(int i=0;i<n;i++){
        cin>>s[i];
    }

    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            check=0;
            check1=0;
            for(int k=0;k<n;k++){
                if(k==i)continue;
                if(s[i][j]==s[k][j]){
                    check=1;
                }
            }
            for(int k=0;k<m;k++){
                if(k==j)continue;
                if(s[i][j]==s[i][k]){
                    check1=1;
                }
            }
        if(!check&&!check1){
            s1+=s[i][j];
        }
        }
    }

    cout<<s1<<endl;
    return 0;
}
