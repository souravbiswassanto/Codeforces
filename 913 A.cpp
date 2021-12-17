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

int A[MAX];
int B[MAX];
int C[MAX];

int main ()
{
    fastIO();

    int m,n;
    int a,b,c;
    int p=1,q,r;
    int x,y,z;
    int cnt=0;
    int cntr=0;
    int v=0;
    int check=0;

    string s,s1,s2;

    cin>>n>>m;

    if (n>=31){
        cout<<m<<endl;
    }
    else {
        for (int i=1;i<=n;i++)
            p*=2;
        cout<<m%p<<endl;
    }

    return 0;
}



