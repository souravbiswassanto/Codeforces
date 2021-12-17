#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  1000006

void fastIO (){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}

int a[MAX];
int b[MAX];
int c[MAX];

int main ()
{

    ///freopen("output.txt","w",stdout);

    fastIO();
    int n;
    int m;
    int cnt=0;
    int p,q,r;
    int cntr=0;
    int v=0;
    int check=0;
    int x,y,z;
    int i;
    string s,s1,s2;

    cin>>n;

    a[0]=0;
    a[1]=1;

    if (n==0){
        cout<<"0 0 0"<<endl;
        return 0;
    }
    if (n==1){
        cout<<"1 0 0"<<endl;
        return 0;
    }
    if (n==2){
        cout<<"0 1 1"<<endl;
        return 0;
    }

    for (i=2;;i++){
        a[i]=a[i-2]+a[i-1];
        if (a[i]>=n)
        break;

    }
    cout<<a[i-1]<<" "<<a[i-3]<<" "<<a[i-4]<<endl;


    return 0;
}



