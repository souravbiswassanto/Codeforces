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

    cin>>n>>m>>x>>y;

    if (m*x>y){
        if(n%m==0){
            cout<<n/m*y<<endl;
        }
        else {
            p=n%m;
            q=p*x;
            r=min(q,y);
            cout<<(n/m)*y+r<<endl;
        }
    }
    else {
        cout<<n*x<<endl;
    }

    //cout<<p<<endl;

    return 0;
}



