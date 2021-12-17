#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  rep        for (int i=0;i<n;i++)

int main ()
{
    ll n,m,cnt=0,cntr=0;
    ll check=0,ck=0;
    ll x=0,y=0;
    string s,s1,s2,s3;

    cin>>n;
    cin>>s;

    rep {
        if (s[i]=='R')x++;
        if (s[i]=='U')y++;

        if (x>y&&check==0){
            cntr++;
            check=1;
            ck=2;
        }
        else if (y>x&&(check==1||ck==0)){
            cntr++;
            ck=3;
            check=0;
        }
    }

    cout<<cntr-1<<endl;

    return 0;
}



