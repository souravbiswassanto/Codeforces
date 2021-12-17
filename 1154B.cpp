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
    string s,s1,s3,s4;
    set<ll>S;

    cin>>n;

    for (int i=0;i<n;i++){
        cin>>A[i];
        S.insert(A[i]);
    }
    sort(A,A+n);

    a=S.size();

    if (a==1){
        cout<<0<<endl;
        return 0;
    }
    if(a==2){
        if ((A[n-1]+A[0])%2)
            cout<<A[n-1]-A[0];
        else cout<<A[n-1]-(A[n-1]+A[0])/2;
        return 0;
    }

    sum=(A[n-1]+A[0]);

    if(sum%2){
        cout<<-1;
        return 0;
    }

    sum/=2;
    ans=sum-A[0];

    for (int i=0;i<n;i++){
        if(A[i]==sum)continue;
        if(A[i]+ans==sum||A[i]-ans==sum){
            check=1;
        }
        else {
            cout<<-1<<endl;
            return 0;
        }
    }

    cout<<ans<<endl;

    return 0;
}
