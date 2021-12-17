#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  500006
#define  mem(a,v)   memset(a,v,sizeof(a))

void fastIO (){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}

ll A[MAX];
ll B[MAX];
ll C[MAX];
map<ll,ll>M;

int main ()
{

    fastIO();

    ll a,b,c,n,m,k,p,q,r;
    ll cnt=0,cntr=1,sum=0,ans=1e17,check=0;
    float x,y,z;
    ll Max=-1e18;
    unsigned long long Min = 1e20;
    string s,s1,s3,s4;

    cin>>n>>m;

    for(int i=1;i<=n;i++){
        cin>>a;
        M[a]++;
    }

    a=m*8;

    for(int i=1;i<=n;i++){
        b=ceil(log2(i));
        c=b*n;
        p=i;
        if(c>a)break;
    }
    if(c>a)p--;
    if(p>=M.size()){
        cout<<0<<endl;
        return 0;
    }
    for(auto it=M.begin();it!=M.end();it++){
        A[cntr++]=it->second;
    }

    for(int i=1;i<cntr;i++){
        B[i]=B[i-1]+A[i];
        //cout<<B[i]<<endl;
    }
    //cout<<p<<" p "<<endl;

    for(int i=1;i<cntr;i++){
        if(i+p>cntr)break;
        q=B[i]-A[i];
        r=B[cntr-1]-B[i+p-1];

        ans=min(ans,q+r);
        //cout<<i<<" "<<q<<" "<<r<<" "<<ans<<endl;
    }
    cout<<ans<<endl;
    return 0;
}
