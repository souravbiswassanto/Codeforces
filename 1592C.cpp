#include <bits/stdc++.h>
using namespace std ;

#define   Pi     2*acos(0.0)
#define   ll     long long
#define   pb     push_back
#define   mp     make_pair
#define   MAX    200006
#define yes   cout<<"YES"<<endl
#define no   cout<<"NO"<<endl
void fastIO (){ios_base::sync_with_stdio(false);cin.tie(0); cout.precision(20);}

ll A[MAX], B[MAX], C[MAX];
ll Xor, Counter;
vector<ll> g[MAX];

ll dfs(int source, int par){
    ll xxor = A[source];
    for(int i = 0; i <  g[source].size(); i++){
        int v = g[source][i];
        if(v == par)continue;
        xxor ^= dfs(v, source);
    }
    if(Xor == xxor and  Counter <= 3)Counter++;
    if(xxor == Xor)return 0;
    return xxor;
}
int main ()
{
    fastIO();
    int a, b, n, k, t;
    cin >> t;
    while(t--){
        cin >> n >> k; 
        Xor = 0; Counter = 0; 
        
        for(int i = 1; i <= n; i++){
            cin >> A[i];
            Xor ^= A[i];
        }
        
        for(int i = 1; i < n; i++){
            cin >> a >> b;
            g[a].pb(b);
            g[b].pb(a);
        }
        a = dfs(1, -1);
        for(int i = 0; i <= n; i++){
            g[i].clear();
        }
        if(Xor == 0){
            cout <<"YES" << endl; continue;
        }
        if(Xor != 0 and k <= 2){
            cout << "NO"<<endl; continue;
        }
        if ((Counter >= 3)){
            yes;
        }
        else no;

    }
    return 0;
}
