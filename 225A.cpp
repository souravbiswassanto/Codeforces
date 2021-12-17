#include<bits/stdc++.h>
using namespace std;

int main (){

    int n;
    int x;
    int a,b;
    int x_;
    int check=0;

    cin>>n>>x;

    x_=7-x;

    for (int i=1;i<=n;i++){
        cin>>a>>b;

        if (a==x||a==x_||b==x||b==x_||a+b==7){check=1;}
    }

    if (check)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

    return 0;
}
