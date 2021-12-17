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

int fun (int key,int n,int m){

    int Counter=n;
    if(A[n]+key>=m)B[Counter--]=m-1;
    else B[Counter--]=A[n]+key;

    for(int i=n-1;i>=1;i--){
        if(A[i]<B[i+1]){
            if(A[i]+key>=B[i+1])B[i]=B[i+1];
            else B[i]=A[i]+key;
        }
        else if(A[i]>B[i+1]){
            if(A[i]+key<m)return 0;
            else B[i]=min((A[i]+key)%m,B[i+1]);
        }
        else B[i]=A[i];
    }

    for(int i=1;i<n;i++){
        if(B[i]>B[i+1])return 0;
    }
    return 1;

}

int main ()
{

    fastIO();

    ll a,b,c,n,m,k,p,q,r,l;
    ll cnt=0,cntr=0,sum=0,ans=0,check=0;
    float x,y,z;
    ll Max=-1e18;
    unsigned long long Min = 1e20;
    string s,s1,s3,s4;

    cin>>n>>m;

    for(int i=1;i<=n;i++){
        cin>>A[i];
    }


    l=0,r=m;

    while(l<=r){
        mem(B,0);
        k=(l+r)/2;

        if(fun(k,n,m)){
            ans=k;
            r=k-1;
        }
        else l=k+1;
    }

    cout<<ans<<endl;

    return 0;
}
