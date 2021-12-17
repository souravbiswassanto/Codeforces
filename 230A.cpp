#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
///this code can be easily done with the help of pairs
ll A[MAX];
ll B[MAX];

int main ()
{
    ll n,m;
    ll check=0;
    int health;

    cin>>health>>n;

    for (int i=0;i<n;i++){
        cin>>A[i]>>B[i];
    }

    for (int i=0;i<n;i++){
        for (int j=0;j<n-i-1;j++){
            int temp,Temp;
            if (A[j]>=A[j+1]){
                temp=A[j+1];
                A[j+1]=A[j];
                A[j]=temp;
                Temp=B[j+1];
                B[j+1]=B[j];
                B[j]=Temp;
            }
        }
    }
    for (int i=0;i<n;i++){
        if (A[i]>=health){
            check=1;
            break;
        }
        health+=B[i];
    }

    if (check)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}



