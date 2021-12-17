#include<bits/stdc++.h>
using  namespace std;

int A[106];
int index[106];

int main(){

    int n;
    int cntr=0;
    int sum=0;

    cin>>n;

    for (int i=0;i<n;i++){
        cin>>A[i];
        index[A[i]]++;
    }

    for (int i=0;i<=100;i++){
        int value = 0;
        value=index[i]/4;
        sum+=value;
        index[i]=index[i]%4;
    }

    for (int i=0;i<=100;i++){
        if (index[i]>=2)cntr++;
    }

    cout<<sum+(cntr/2)<<endl;

    return 0;
}
