#include <bits/stdc++.h>
using namespace std ;
#define ll long long
int main ()
{
    ll q,n;

    cin>>q;

    while(q--){

        cin>>n;
        ll cnt=0;
        set<ll>Set;
        Set.insert(cnt);
        for(ll i=1;i*i<=n;i++){
            Set.insert(i);
            Set.insert(n/i);
        }
        cout<<Set.size()<<endl;
        for(auto it:Set)cout<<it<<" ";
        cout<<endl;
        Set.clear();
    }

    return 0;
}
