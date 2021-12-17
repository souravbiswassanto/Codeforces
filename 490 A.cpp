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
int d[MAX];

int main ()
{

    ///freopen("output.txt","w",stdout);

    fastIO();
    int n;
    int m;
    int cnt=0;
    int p=0,q=0,r=0;
    int cntr=0;
    int v=0;
    int check=0;
    int x,y,z;
    string s,s1,s2;

    cin>>n;

    for (int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]==1){p++;b[v++]=i;}
        if(a[i]==2){q++;c[cntr++]=i;}
        if(a[i]==3){r++;d[cnt++]=i;}
    }

    x=min(p,min(q,r));

    cout<<x<<endl;

    for (int i=1;i<=x;i++){
        cout<<b[i-1]<<" "<<c[i-1]<<" "<<d[i-1]<<endl;
    }

    return 0;
}



