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
map<ll,ll>C;

int main ()
{

    fastIO();

    ll a,b,c,n,m,k,p,q,r;
    ll cnt=0,cntr=0,sum=1,ans=1,check=0;
    float x,y,z;
    ll Max=-1e18;
    unsigned long long Min = 1e20;
    string s,s1,s3,s4;

    cin>>n;
    C[0]=1;

    for (int i=0;i<n;i++){
        cin>>A[i]>>B[i];

        if(A[i]==B[i]&&A[i]!=A[i-1]&&A[i]!=0){sum++;C[A[i]]=1;}
    }

    a=0,b=0;
    ll ptr=0;
    ll Value=0,Value1=0;
    for (int i=0;i<n;i++){
        if (A[i]>B[i]){
            ptr=1;
            cntr++;
            Value=A[i];
            cnt=0;
        }
        else if(A[i]<B[i]){
            ptr=2;
            Value1=B[i];
            cnt++;
            cntr=0;
        }
        if (ptr==1&&cntr==1){
            if (C[B[i]]==0){sum++;C[B[i]]=1;}
            if (C[Value1]==0){sum++;C[Value1]=1;}
            if (Value1!=B[i])sum+=(B[i]-Value1-1);

        }
        if(ptr==2&&cnt==1){
            if (C[A[i]]==0){sum++;C[A[i]]=1;}
            if (C[Value]==0){sum++;C[Value]=1;}
            if (Value!=A[i])sum+=(A[i]-Value-1);
        }
        //cout<<sum<<endl;
    }

    cout<<sum<<endl;

    return 0;
}
