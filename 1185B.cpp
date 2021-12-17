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

ll A[27];
ll B[27];
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

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>s>>s1;

        check=0;
        ll ptr=1;
        cntr=1;
        a=s.size();
        b=s1.size();

        if(b<a){
            cout<<"NO"<<endl;
            continue;
        }

        if(s[0]==s1[0])
        {
            while(1){
                //cout<<a<<" "<<b<<" "<<ptr<<" "<<cntr<<endl;
                if(ptr>=a||cntr>=b)break;
                if(s[ptr]==s1[cntr]){
                    ptr++,cntr++;
                }
                else if(s[ptr]!=s1[cntr]&&s[ptr-1]==s1[cntr])cntr++;
                else if(s[ptr]!=s1[cntr]){check=1;break;}
            }
        }
        else check=1;
        if(cntr>ptr)check=1;
        if(!check)for(int j=cntr;j<b;j++)if(s1[j]!=s[a-1]){check=1;break;}

        if(check)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}
