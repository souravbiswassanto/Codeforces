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
    int sum=0;
    string s,s1,s2;

    cin>>n;

    for (int i=0;i<=11;i++){
        cin>>a[i];
    }

    sort (a,a+12);

    for (int i=11;i>=0;i--){
        if (sum<n){
            sum+=a[i];
            cnt++;
        }
        else
            break;
    }
    if (sum>=n)
       cout<<cnt<<endl;
    else
        cout<<"-1"<<endl;

    return 0;
}



