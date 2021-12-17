#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  500006
#define  MAX1  10000008
#define  mem(a,v)   memset(a,v,sizeof(a))

int main ()
{

    ll B[5];

    cin>>B[1]>>B[2]>>B[3]>>B[4];

    sort(B+1,B+5);

    if(B[1]+B[2]+B[3]==B[4]){
        cout<<"YES"<<endl;
    }
    else if(B[1]+B[2]==B[3]+B[4]){
        cout<<"YES"<<endl;
    }
    else if(B[1]+B[3]==B[2]+B[4]){
        cout<<"YES"<<endl;
    }
    else if((B[2]+B[3])==B[1]+B[4]){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

    return 0;
}
