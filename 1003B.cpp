#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  100006
#define  Max(a,b,c) max(a,max(b,c))
#define  Min(a,b,c) min(a,min(b,c))
#define  mem(a,v)   memset(a,v,sizeof(a))
#define  rep        for (int i=0;i<n;i++)
#define  Rep        for (int i=0;i<m;i++)

ll n,m;

void Set (int a,int b){
    if (a>b){
        n=0;
        m=1;

    }
    else if (a<b){
        n=1;
        m=0;
    }
    else {
        n=0;
        m=1;
    }
}

int main ()
{
    ll a,b,c;

    ll cnt=0,cntr=0,sum=0,ans=1;
    ll p,q,r;
    ll v=1;
    ll check=0;
    ll x,y,z;
    ll Max=0,Min=INT_MAX;
    string s="",s1="",s2="",s3,s4;

    cin>>a>>b>>x;
    q=a;
    r=b;
    Set(a,b);

    p=ceil(x/2.0);

    if (x%2==0){
        s1+=(48+n);
        if (n==1)b--;
        if (n==0)a--;
    }

    for (int i=0;i<p;i++){
        s+=(48+m);
        s+=(48+n);
    }
    a-=p;
    b-=p;
    if (q==r){
        for (int i=1;i<=b;i++){
        s1+=(48+1);
        }
        for (int i=1;i<=a;i++){
            s2+=(48+0);
        }
    }
    else {
        for (int i=1;i<=min(a,b);i++){
            s1+=(48+m);
        }
        for (int i=1;i<=max(a,b);i++){
            s2+=(48+n);
        }
    }
    cout<<s1+s+s2<<endl;

    return 0;
}
