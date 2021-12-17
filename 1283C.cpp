#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 500006

template <typename T>
T mymax (T a,T b){return (a>b)?a:b;}
template <typename T>
T mymin (T a,T b){return (a<b)?a:b;}
template <typename T>
T myabs (T a){return (a<0)?(-1*a):a;}


ll A[MAX];
ll B[MAX];
set<ll>S;
int main () {

    ll n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>A[i];
        B[A[i]]=1;
    }
    for(int i=1;i<=n;i++){
        if(B[i]==0)S.insert(i);
    }

    for(int i=1;i<=n;i++){
        if(B[i]==0&&A[i]==0){
            for(auto it:S){
                if(it!=i){
                    B[it]=1;
                    A[i]=it;
                    S.erase(it);break;
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(B[i]==0)S.insert(i);
    }

    for(int i=1;i<=n;i++){
        if(A[i]==0){
            auto it=S.begin();
            cout<<*it<<" ";
            S.erase(*it);
        }
        else cout<<A[i]<<" ";
    }

return 0;
}
