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

int main ()
{
    ll a,b,c;
    ll n,k,m;
    ll cnt=0,cntr=0,sum=0,ans=1;
    ll p,q,r;
    ll v=1;
    ll check=0;
    ll x,y,z;
    ll Max=0,Min=INT_MAX;
    string s,s2="abcdefghijklmnopqrstuvwxyz",s1,s3,s4;

    cin>>n>>k;
    cin>>s;


    for (int i=0;i<=25;i++){
        for (int j=0;j<n;j++){

            if (s[j]==s2[i]&&k--){
                if (k>=0)
                s[j]='*';
            }
        }
    }
    for (int i=0;i<n;i++){
        if (s[i]!='*')cout<<s[i];
    }
    cout<<endl;

    return 0;
}
