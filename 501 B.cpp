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
    int p=0,q,r;
    int cntr=0;
    int v=0;
    int check=0;
    int x,y,z;
    string s[1006],s1[1006];

    cin>>n;

    for (int i=1;i<=n;i++){
        cin>>s[i]>>s1[i];
    }

    for (int i=1;i<=n;i++){


        if (s[i]=="&&&"||s1[i]=="&&&")continue;
        p++;

        for (int j=1;j<=n;j++){

            if (s1[i]==s[j]){
                s1[i]=s1[j];
                s[j]="&&&";
                j=1;
            }
        }
    }


    cout<<p<<endl;
    for (int i=1;i<=n;i++){

        if (s[i]!="&&&")
        cout<<s[i]<<" "<<s1[i]<<endl;
    }

    return 0;
}



