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

ll rev (ll a,ll b){

    return a>b;
}

int main ()
{
    fastIO();
    ll a,b,c;
    ll check=0;
    ll v=0;
    string s,s1;

    cin>>s;
    char sk=97;

    for (int i=0;i<s.length();i++){
        if (s[i]<=sk&&v<=25){
            s[i]=sk++;
            v++;
        }
    }
    if (v>25)
    cout<<s<<endl;

    else cout<<"-1"<<endl;

    return 0;
}



