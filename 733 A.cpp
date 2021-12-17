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
    int cntr=1;
    int v=0;
    int check=0;
    int x,y,z;
    string s,s1,s2;

    cin>>s;

    p=s.length();

    for (int i=0;i<p;i++){
        if (s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y'){
            cntr=0;

        }
        //else {

            cntr++;
            cnt=max(cntr,cnt);

    }

    cout<<cnt<<endl;

    return 0;
}



