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
    float n;
    float m;
    int cnt=0;
    int p,q,r;
    int cntr=0;
    float v;
    int check=0;
    float x,y,z;
    float mini=356767368873993;
    string s,s1,s2;

    cin>>n>>m;

    for (int i=1;i<=n;i++){
        cin>>x>>y;

        v=(x/y)*m;

        if (v<mini){
            mini=v;
        }
    }
    printf("%f\n",mini);

    return 0;
}



