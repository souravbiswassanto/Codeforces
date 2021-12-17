#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  100006
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



struct stkcr {

    int a,b,c;

    stkcr (int x,int y,int z){

        a=x;
        b=y;
        c=z;
    }

};

bool rev (stkcr a,stkcr b){

    return a.a<b.a;
}

int main ()
{

    fastIO();
    vector<stkcr> V;
    //vector<> V;
    set<ll>S;
    set<ll>::iterator it;
    map<string,ll> M;
    map<string,ll>::iterator it1;

    ll a,b,c;
    ll n,m;
    ll cnt=0,cntr=0,sum=0,ans=1;
    ll p,q,r;
    ll v=1;
    ll check=0;
    ll x,y,z;
    ll Max=0,Min=INT_MAX;
    string s,s1[MAX],s2[MAX],s3,s4;

    cin>>n;

    for (int i=0;i<n;i++){
        cin>>x>>y;
        V.pb(stkcr(x,y,i));
    }

    sort (V.begin(),V.end(),rev);

    for (int i=0;i<n-1;i++){
        //cout<<V[i].a<<" "<<V[i].b<<" "<<V[i].c<<endl;
        if (V[i].a==V[i+1].a){
            if (V[i].b>V[i+1].b){

                cout<<V[i+1].c+1<<" "<<V[i].c+1<<endl;
                return 0;
            }
            cout<<V[i].c+1<<" "<<V[i+1].c+1<<endl;
            return 0;
        }

        if (V[i+1].b<=V[i].b){
            cout<<V[i+1].c+1<<" "<<V[i].c+1<<endl;
            return 0;
        }
    }

    cout<<"-1 -1"<<endl;

    return 0;
}
