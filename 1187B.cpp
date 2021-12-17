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
vector<int>V[27];
map<int,int>M;

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

    cin>>s;

    for(int i=0;i<n;i++){
        a=s[i]-96;
        V[a].pb(i+1);
    }

    cin>>m;

    while(m--){
        cin>>s1;
        int length=s1.size();
        ans=0;
        for(int i=0;i<length;i++){
            a=s1[i]-96;
            M[a]++;
        }

        for(auto it=M.begin();it!=M.end();it++){
            int xx=it->first;
            int xy=it->second;
            //cout<<xx<<" "<<xy<<" "<<V[xx][xy-1]<<endl;
            if(V[xx][xy-1]>ans){
                ans=V[xx][xy-1];
            }
        }
        cout<<ans<<endl;
        M.clear();
        for(int i =1;i<=26;i++)V[i].clear();
    }

    return 0;
}
