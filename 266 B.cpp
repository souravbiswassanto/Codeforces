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

    cin>>n>>m;
    cin>>s;

    for (int i=0;i<s.length();i++){
        if (s[i]=='B'){
            a[i]=1;
        }

        if (s[i]=='G'){
            a[i]=2;
        }
    }

    while (m--){
        for (int i=0;i<n-1;i++){
            if (a[i]<a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                i++;
            }
        }
    }
    for (int i=0;i<n;i++){
        if(a[i]==1){
            cout<<"B";
        }
        if(a[i]==2){
            cout<<"G";
        }
    }
    cout<<endl;

    return 0;
}



