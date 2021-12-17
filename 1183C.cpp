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
    ll cnt=0,cntr=0,sum=0,ans=0,check=0;
    float x,y,z;
    ll Max=-1e18;
    unsigned long long Min = 1e20;
    string s,s1,s3,s4;

    cin>>q;

    while(q--){
        cin>>k>>n>>a>>b;

        if(b*n>=k)cout<<-1<<endl;
        else{
            ll mid;
            ll l=0;r=1e9;ans=0;

            while(l<=r){
                mid=(l+r)/2;
                //cout<<l<<" "<<mid<<" "<<r<<endl;
                sum=(mid*a)+((n-mid)*b);
                if(k-sum>=1){
                    ans=mid;
                    //cout<<111111<<endl;
                    l=mid+1;
                }
                else {
                    r=mid-1;
                    //cout<<333<<endl;
                }
            }
            cout<<min(ans,n)<<endl;
        }
    }

    return 0;
}
