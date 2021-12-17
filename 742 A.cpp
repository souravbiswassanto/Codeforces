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
    string s,s1,s2;

    cin>>n;

    if (n==0){
        cout<<1<<endl;
        return 0;
    }

    if (n%4==1)
        cout<<"8"<<endl;
    if (n%4==2)
        cout<<"4"<<endl;
    if (n%4==3)
        cout<<"2"<<endl;
    if (n%4==0)
        cout<<"6"<<endl;


    return 0;
}



