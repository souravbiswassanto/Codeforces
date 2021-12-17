#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int n,m;
    int cntr=0;

    cin>>n>>m;

    if (n==m){
        cout<<"0"<<endl;
        return 0;
    }

    else if (n>m){
        cout<<n-m<<endl;
        return 0;
    }
    else {

        while (m>=n){

            if (m%2==0){
                m=m/2;
                cntr++;
            }
            else{
                m=m+1;
                cntr++;
            }
            if (m==n)
                break;
        }
        cout<<cntr+(n-m)<<endl;
    }

    return 0;
}



