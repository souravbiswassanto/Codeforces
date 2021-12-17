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
int pos[6];
vector< int >V[6];

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

    for(int i=1;i<=n;i++){
        cin>>a;
        if(a==4)V[0].pb(i);
        if(a==8)V[1].pb(i);
        if(a==15)V[2].pb(i);
        if(a==16)V[3].pb(i);
        if(a==23)V[4].pb(i);
        if(a==42)V[5].pb(i);
    }
    for(int i=0;i<6;i++)B[i]=V[i].size();
    while(1){
        if(cntr<B[0])a=V[0][cntr++];
        else break;
        for(int i=1;i<6;i++){
            check=0;
            for (int j=pos[i];j<B[i];j++){
                if(V[i][j]>a){
                    pos[i]=j+1;
                    a=V[i][j];
                    check=1;
                    break;
                }
            }
            if(check==0){
                cout<<n-((cntr-1)*6)<<endl;
                return 0;
            }
        }
    }

    cout<<n-(cntr*6)<<endl;

    return 0;
}
