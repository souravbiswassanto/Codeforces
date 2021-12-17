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

    cin>>s>>s1>>s2;

    p=s.length();
    q=s1.length();
    r=s2.length();

    if (p+q!=r){
        cout<<"NO"<<endl;
    }
    else {
        for (int i=0;i<s.length();i++){
            for (int j=0;j<s2.length();j++){
                if (s[i]==s2[j]){
                    s2[j]='*';
                    cnt++;
                    break;
                }
            }
        }
        for (int i=0;i<s1.length();i++){
            for (int j=0;j<s2.length();j++){
                if (s1[i]==s2[j]){
                    s2[j]='*';
                    cntr++;
                    break;
                }
            }
        }

        if (cntr==q&&cnt==p)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }


    return 0;
}



