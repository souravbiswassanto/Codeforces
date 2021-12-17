#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  500006
#define  MAX1  100008
#define  mem(a,v)   memset(a,v,sizeof(a))

void fastIO (){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}

ll A[MAX];
ll B[MAX];
ll C[MAX];
vector< ll >V[2];
vector< ll >Ans;
vector< pair<ll,ll> >VP;
map< ll,ll >M;
vector<ll>prime;
bool mark[MAX1];
ll N=1e5+6;

//void seive (){int limit = sqrt(N*1.0)+2;mark[1]=1;for (int i=4;i<=N;i+=2)mark[i]=1;prime.push_back(2);for (int i=3;i<=N;i+=2){if(!mark[i]){prime.push_back(i);if(i<=limit){for (int j=i*i;j<=N;j+=i*2)mark[j]=1;}}}}

int main ()
{
    fastIO();
    ll a,b,c,n,m,k,p,q,r;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    float x,y,z;
    ll Max= 0,Max1=-1e18+1;
    ll Min = 1e18;
    string s,s1,s3,s4;

    cin>>A[0]>>A[1];
    ll gcd=__gcd(A[0],A[1]);
    A[0]/=gcd;
    A[1]/=gcd;
    B[0]=2;
    B[1]=3;
    B[2]=5;

    for(int i=0;i<2;i++){
        a=A[i];
        for(int j=0;B[j]*B[j]<=a&&j<3;j++){
            if(a%B[j]==0){
                while(a%B[j]==0){
                    a/=B[j];
                    cntr++;
                }
            }
        }
        if(a==2||a==3||a==5||a==1){if(a!=1)cntr++;}
        else {cout<<-1<<endl;return 0;}
    }
    cout<<cntr<<endl;

    return 0;
}
