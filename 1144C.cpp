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
ll D[MAX];

int main ()
{

    fastIO();

    ll a,b,c,n,m,k,p,q,r;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    float x,y,z;
    ll Max= -1;
    unsigned long long Min = 1e20;
    string s,s1,s3,s4;

    cin>>n;

    for (int i=0;i<n;i++){
        cin>>A[i];
        B[A[i]]++;
        Max=max(A[i],Max);
    }

    for(int i=0;i<=Max;i++){
        if (B[i]>2){
            cout<<"NO"<<endl;
            return 0;
        }
    }

    for (int i=0;i<=Max;i++){
        if(B[i]==2){
            C[cntr++]=i;
            D[cnt++]=i;
        }
        else if (B[i]==1){
            C[cntr++]=i;
        }
    }

    cout<<cntr<<endl;

    for (int i=0;i<cntr;i++){
        cout<<C[i]<<" ";
    }
    cout<<endl<<cnt<<endl;



    for (int i=cnt-1;i>=0;i--){
        cout<<D[i]<<" ";
    }
    cout<<endl;

    return 0;
}
