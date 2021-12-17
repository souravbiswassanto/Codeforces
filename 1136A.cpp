#include <bits/stdc++.h>
using namespace std ;
#define  ll long long
int main ()
{
    ll a,b,c,n,m,k,p,q,r;
    map<ll,ll>M;
    map<ll,ll>::iterator it;

    cin>>n>>q;

    for (int i=0;i<n;i++){
        cin>>a;
        M[a]++;
    }

    for(int i=0;i<q;i++){
        cin>>a;
        if (a==1){
            cin>>b>>c;
            M[c]+=M[b];
            M[b]=0;
        }
        else {
            cin>>p;
            cout<<M[p]<<endl;
        }
    }
    return 0;
}
