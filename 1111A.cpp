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
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    float x,y,z;
    ll Max=-1e18;
    unsigned long long Min = 1e20;
    string s,s1,s3,s4;

    s3={'a','e','i','o','u'};

    cin>>s>>s1;

    a=s.length();
    b=s1.length();

    if (a!=b){cout<<"NO"<<endl;return 0;}

    for (int i=0;i<min(a,b);i++){

        int flag=0;
        int fl=0;
        for (int j=0;j<5;j++){
            if (s[i]==s3[j]){
                flag = 1;
            }
            if (s1[i]==s3[j]){
                fl=1;
            }
        }

        if ((flag==0&&fl==1)||(flag==1&&fl==0)){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;


    return 0;
}
