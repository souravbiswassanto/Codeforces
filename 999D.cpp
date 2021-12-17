#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  200006

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
    //freopen("input.txt","r",stdin);
    fastIO();
    vector<ll> V[100006];
    map<ll,ll>M;
    map<ll,ll>::iterator it2;
    map<ll,ll>N;
    map<ll,ll>::iterator it1;

    ll a,b,c;
    ll n,m;
    ll cnt=0,cntr=0,sum=0,ans=0;
    ll p,q,r;
    ll v=1;
    ll check=0;
    ll x,y,z,j=0;

    cin>>n>>m;

    x=n/m;
    for (int i=0;i<n;i++){
        cin>>B[i];
        A[B[i]%m]++;
    }

    for (int i=0;i<m;i++){
        if (A[i]>x)M[i]=A[i];
        if (A[i]<x){N[i]=A[i];C[cntr++]=i;}
    }

    it2=M.begin();
    for (it1=N.begin();it1!=N.end();it1++){
        while (N[it1->first]!=x){
            if (M[it2->first]>x){
                if (it1->first>it2->first)sum+=(it1->first-it2->first);
                else sum+=(m-it2->first+it1->first);
                V[it2->first].pb(it1->first);
                M[it2->first]--;
                N[it1->first]++;
            }
            else it2++;
        }
    }

    cout<<sum<<endl;

    for (int i=0;i<n;i++){
        int rem=B[i]%m;
        if (A[rem]>x){
            int REM=V[rem].back();
            if (REM>rem)cout<<B[i]+(REM-rem)<<" ";
            else cout<<m-rem+REM+B[i]<<" ";
            V[rem].pop_back();
            A[rem]--;

        }
        else cout<<B[i]<<" ";
    }
    return 0;
}

