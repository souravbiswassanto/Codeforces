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

    cin>>m;

    for (int i=1;i<=m;i++){
        cin>>n;
        check=0;
        cntr=0;

        if(!n%2||!n%3||!n%5){
            cout<<-1<<endl;
            continue;
        }

        while(n!=1){
            cntr++;
            if(n%2==0)n/=2;
            else if (n%3==0)n=(n*2)/3;
            else if (n%5==0)n=(n*4)/5;
            else {cout<<-1<<endl;check=1;break;}
        }
        if(!check)cout<<cntr<<endl;
    }



    return 0;
}
