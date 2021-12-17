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

    p=s.length();

    for (int i=0;i<s.length();i++){
        if (s[i]<=90){
            s[i]=s[i]+32;
            q=s[i]-96;
            a[q]=-1;;
            //cout<<a[q]<<endl;
        }
        else {
            q=s[i]-96;
            a[q]=-1;
            ///cout<<"JJH "<<a[q]<<endl;
        }
    }

    for (int i=1;i<=26;i++){
        //cout<<a[i]<<endl;
        if (a[i]==0){
            check=1;
            break;
        }
    }

    if (check==1){
        cout<<"NO"<<endl;
    }
    else
        cout<<"YES"<<endl;

    return 0;
}



