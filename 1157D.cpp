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
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    float x,y,z;
    ll Max=-1e18;
    unsigned long long Min = 1e20;

    cin>>n>>k;

    ll first=1,last=n;

    while(first<last){

        ll mid=(first+last)/2;
        ll sum1=0;
        sum=((mid+k-1)*(mid+k))/2;
        sum1=((mid+1)*mid)/2;
        ans = sum-sum1;
        //cout<<first<<" "<<mid<<" "<<last<<" "<<sum<<" "<<sum1<<" "<<ans<<endl;

        if (n-ans<=mid+k-3&&n-ans>=0){
            cout<<"YES"<<endl;
            for (int i=mid;i<mid+k;i++){
                if(i==mid+k-1){
                    cout<<mid+k-1+(n-ans)<<endl;
                    return 0;
                }
                cout<<i<<" ";
            }
        }

        if (ans>n)last=mid;
        else if(ans<n)first=mid;

    }

    return 0;
}
