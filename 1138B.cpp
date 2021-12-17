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
    ll cnt=0,cntr=0,sum=0,ans=1,check=0,common=0,total=0;
    float x,y,z;
    ll Max=-1e18;
    unsigned long long Min = 1e20;
    string s,s1,s3,s4;

    cin>>n;

    cin>>s;
    cin>>s1;

    for (int i=0;i<n;i++){
        if (s[i]=='1')cntr++;
        if (s1[i]=='1')cnt++;
        if (s[i]=='1'&&s1[i]=='1')common++;
    }

    ll bad1,bad2;

    bad1 = cntr - common;
    bad2 = cnt - common;

    sum = bad1 + bad2 + common;

    ans = (sum/2)-bad1;
    cout<<bad1<<" "<<bad2<<" "<<common<<" "<<sum<<" "<<ans<<endl;

    if (sum%2){
        cout<<-1<<endl;
        return 0;
    }

    for (int i = 0 ;i<n;i++){
        if (s[i]=='1'&&s1[i]=='0'&&bad1>0){
            cout<<i+1<<" ";
            bad1--;
            total++;
        }
        else if(s[i]=='1'&&s1[i]=='1'&&ans>0){
            cout<<i+1<<" ";
            ans--;
            total++;
        }
    }

    for (int i = 0 ;total<n/2 ; i++){
        if (i==n)break;
        if (s[i]=='0'&&s1[i]=='0')
        {
            cout<<i+1<<" ";
        total++;
        }
    }

    return 0;
}
