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
    int cntr=2;
    int v=0;
    int check=0;
    int x,y,z;
    string s,s1,s2;

    cin>>n;


    a[0]=1;
    a[1]=1;

    cout<<"O";

    for (int i=0;i<500;i++){
        a[i+2]=a[i]+a[i+1];
        //cout<<a[i]<<endl;
    }

    for (int i=2;i<=n;i++){
        if (a[cntr]==i){
            cout<<"O";
            cntr++;
        }
        else
            cout<<"o";
    }

    cout<<endl;
    return 0;
}



