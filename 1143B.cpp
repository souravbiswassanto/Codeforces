#include<bits/stdc++.h>
using namespace std;
int main(){
int n,a,b,c[105],d[105],sum=0,i,j,di,temp,mx=0;
cin>>n>>a>>b;
for(i=1;i<=a;i++){
    cin>>c[i];
}
for(j=1;j<=b;j++){
    cin>>d[j];
}
for(i=1;i<=b;i++){
    for(j=1;j<=a;j++){
        if(d[i]==c[j]){
                sum++;
        }
    }
}
di=b-sum;
for(i=1;i<=a;i++) cout<<1<<" " ;
for(j=1;j<=di;j++) cout<<2<<" " ;
}
