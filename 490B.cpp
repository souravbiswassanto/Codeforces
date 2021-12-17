#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  1000006
#define  Max(a,b,c) max(a,max(b,c))
#define  Min(a,b,c) min(a,min(b,c))
#define  mem(a,v)   memset(a,v,sizeof(a))
#define  rep        for (int i=0;i<n;i++)
#define  Rep        for (int i=0;i<m;i++)

void fastIO (){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}

ll A[MAX];
ll B[MAX];
ll C[MAX];

ll rev (ll a,ll b){

    return a>b;
}

int main ()
{

    fastIO();
    vector<ll> V;
    set<ll>S;
    set<ll>::iterator it;

    ll a,b,c;
    ll n,m,End,B_end;
    ll cnt=0,cntr=0,sum=0,ans=1;
    ll p,q,r;
    ll v=1;
    ll check=0;
    ll x,y,z;
    ll Max=0,Min=INT_MAX;
    string s,s1,s3,s4;
    mem(A,-1);

    cin>>n;

    m=n;
    for (int i=0;i<n;i++){
        cin>>x>>y;
        A[x]=y;B[y]=x;
        if (x!=0)S.insert(x);
        if (y!=0)S.insert(y);
    }
    for (it=S.begin();it!=S.end();it++){
        //cout<<*it<<" "<<A[*it]<<endl;
        if (A[*it]==0)B_end=*it;
        if (A[*it]==-1)End=*it;
    }
    //cout<<B_end<<" end "<<End<<endl;
    for (int i=1;i<=ceil(m/2.0);i++){
        C[n--]=End;
        if (i<=m/2)C[n--]=B_end;
        End=B[End];
        B_end=B[B_end];
    }

    for (int i=1;i<=m;i++)cout<<C[i]<<" ";
    return 0;
}
