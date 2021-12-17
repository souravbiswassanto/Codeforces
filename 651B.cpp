#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  300006
#define  Max(a,b,c) max(a,max(b,c))
#define  Min(a,b,c) min(a,min(b,c))
#define  mem(a,v)   memset(a,v,sizeof(a))
#define  rep        for (int i=0;i<n;i++)
#define  Rep        for (int i=0;i<m;i++)

void fastIO ()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}

ll A[MAX];
ll B[MAX];
ll C[MAX];

ll rev (ll a,ll b)
{

    return a>b;
}

int main ()
{

    fastIO();

    ll a,b,c;
    ll n,m;
    ll cnt=0,cntr=0,sum=0,ans=1;
    ll p,q,r;
    ll v=1;
    ll check=0;
    ll x,y,z;
    ll Max=0,Min=INT_MAX;
    string s,s1[10000],s2[10000],s3,s4;
    set<int> S;
    set<int>::iterator it;

    cin>>n;

    for (int i=0; i<n; i++)
    {
        cin>>a;
        A[a]++;
        Max=max(Max,A[a]);
        S.insert(a);
    }

    for (int i=1;i<=Max;i++){
        for (it=S.begin();it!=S.end();it++){
            if (A[*it]!=0){
                cntr++;
                A[*it]--;
            }
        }
        cnt+=(cntr-1);
        cntr=0;
    }

    cout<<cnt<<endl;
    return 0;
}
