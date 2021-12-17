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

    cin>>s;

    for (int i=0;i<s.length();i++){
        if(s[i]=='B'&&s[i+1]=='W'){
            cntr++;
        }
        if (s[i]!='W'){
            cnt++;
        }
        if (s[i]=='W'){
            if (cnt!=0)a[v++]=cnt;
            cnt=0;

        }
    }
    if (s[n-1]=='B')cntr++;

    if (cnt!=0)a[v++]=cnt;

    cout<<cntr<<endl;
    for (int i=0;i<v;i++){
        cout<<a[i]<<" ";
    }


    return 0;
}



