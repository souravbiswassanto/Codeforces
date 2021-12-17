#include<bits/stdc++.h>
using namespace std;

int parent[500006];
int A[500006];
int Count[500006];

int findparent(int r){
    if (parent[r]==r)return r;
    else return parent[r]=findparent(parent[r]);
}


int main(){

    int n,a,m;

    cin>>n>>m;
    for(int i=1;i<=500004;i++)Count[i]=1;
    for(int i=0;i<=n;i++)parent[i]=i;
    for(int i=1;i<=m;i++){
        cin>>a;
        for(int j=1;j<=a;j++){
            cin>>A[j];
        }
        for(int j=1;j<a;j++){
            int parenta=findparent(A[j]);
            int parentb=findparent(A[j+1]);
            if(parenta!=parentb){
                parent[parentb]=parenta;
                Count[parenta]+=Count[parentb];
                //cout<<Count[parenta]<<" "<<Count[parentb]<<endl;
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<Count[findparent(i)]<<" ";
    }

}
