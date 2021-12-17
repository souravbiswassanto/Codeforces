#include<bits/stdc++.h>
using namespace std;

#define ll  long long
int main(){

    int q;
    cin>>q;
    start:
    while(q--){

        int n,k;
        cin>>n>>k;
        vector<ll>V;
        ll a;
        int taken[65]={0};
        for(int i=0;i<n;i++){
            cin>>a;
            V.push_back(a);
        }
        for(int i=0;i<n;i++){
            while(V[i]>0){
                int pos;
                ll lastpower=1;
                for(int j=0;j<63;j++){
                    double Power=pow(k,j);
                    if((ll)Power>V[i]){
                        pos=j-1;
                        if(!taken[pos])taken[pos]=1;
                        else {cout<<"NO"<<endl;goto start;}
                        V[i]-=lastpower;
                        break;
                    }
                    lastpower=(ll)Power;
                }
            }
        }
        cout<<"YES"<<endl;
    }

    return 0;

}
