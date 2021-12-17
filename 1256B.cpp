#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        k=n-1;
        int A[n+5],B[n+5],V[n+5]={0};
        for(int i=1;i<=n;i++){
            cin>>A[i];
        }
        for(int i=1;i<=n;i++){
            if(!k)break;
            int pos;
            for(int j=1;j<=n;j++){
                if(A[j]==i){
                    pos=j;break;
                }
            }
            for(int j=pos;j>i;j--){
                if(V[j-1])break;
                if(!k)break;
                k--;
                V[j-1]=1;
                swap(A[j],A[j-1]);
            }
        }
        for(int i=1;i<=n;i++){
            cout<<A[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
