#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    ll _ = 1;
    cin>>_;
    while(_--) {
        ll n;
        cin>>n;
        pair<ll,ll> a[n];
        map<ll, vector<ll>> mm;
        for(int i=0;i<n;i++) {
            cin>>a[i].first;
            cin>>a[i].second;
            if(a[i].first>a[i].second) {
                swap(a[i].first, a[i].second);
            }
            mm[a[i].first].push_back(i);
        }
        ll res[n];
        ll w = INT_MAX;
        ll idx;
        for(auto it: mm) {
            for(ll i: it.second) {
                if(a[i].second>w) {
                    res[i] = idx+1;
                }
                else {
                    res[i] = -1;
                }
            }
            for(ll i: it.second) {
                if(a[i].second<w) {
                    w = a[i].second;
                    idx = i;
                }
            }
        }
        for(int i=0;i<n;i++) {
            cout<<res[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
