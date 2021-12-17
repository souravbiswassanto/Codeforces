#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  500006
#define  MAX1  10000008
#define  mem(a,v)   memset(a,v,sizeof(a))

void fastIO ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}

ll rev (int a,int b)
{
    return a>b;
}
int main ()
{
    fastIO();
    ll a,b,c,n,m,k,p,q,r;
    ll cnt=0,ans=1;
    ll x,y,z;
    ll Max= 0,Max1=-1e18+1;
    ll Min = 1e18;
    string s,s1,s3,s4;

    cin>>q;
    while(q--){
        cin>>n;
        ll A[n+2];
        for(int i=1; i<=n; i++)cin>>A[i];
        cin>>x>>a;
        cin>>y>>b>>k;

        if(x<y){
            int temp,Temp;
            temp=x;Temp=a;
            x=y;a=b;
            y=temp;b=Temp;
        }
        else if(x==y){
            if(a>b){int temp=a;a=b;b=temp;}
        }
        sort(A+1,A+n+1,rev);
        ll left=1,right=n,sum=0,cntr=0,mid,check=0;
        ans=n;
        while(left<=right)
        {
            mid=(left+right)/2;
            sum=0,cntr=1;
            if(a!=b)
            {
                for(int i=a*b; i<=mid; i+=(a*b))sum=sum+((A[cntr++]/100)*(x+y));
                for(int i=a; i<=mid; i+=a){
                    if(i%a==0&&i%b==0)continue;
                    sum=sum+((A[cntr++]/100)*x);
                }
                for(int i=b; i<=mid; i+=b){
                    if(i%a==0&&i%b==0)continue;
                    sum=sum+((A[cntr++]/100)*y);
                }
            }
            else for(int i=a; i<=mid; i+=a)sum=sum+((A[cntr++]/100)*(x+y));

            if(sum>=k)check=1;
            if(sum<k)
            {
                left=mid+1;
                ans=left;
            }
            else if(sum>k)
            {
                right=mid-1;
                ans=mid;
            }
            else
            {
                ans=mid;
                break;
            }
        }
        if(check)cout<<ans<<endl;
        else cout<<-1<<endl;
    }

    return 0;
}

