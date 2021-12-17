#include <bits/stdc++.h>
using namespace std ;

#define long long    ll
#define push_back    pb
#define make_pair    mp
#define MAX          1000006

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
    int b;
    int cntr=0;
    int v=0;

    for (int i=0;i<4;i++)
    cin>>a[i];

    for (int i=0;i<4;i++){
        for (int j=i+1;j<4;j++){
            if (a[i]==a[j]&&(a[i]!=-1&&a[j]!=-1)){
                a[j]=-1;
                cnt++;
            }
        }
    }

    cout<<cnt<<endl;
    return 0;
}



