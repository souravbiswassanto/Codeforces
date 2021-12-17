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
    int check=1;
    int x,y,z;
    string s,s1,s2;

    cin>>n>>m;

    if ((n==1&&m<10)||(n*9<m)||m==0){
        cout<<"-1 -1"<<endl;
        return 0;
    }

    for (int i=1;i<=n;i++){
        if ((i*9)<=m){
            s+='9';
            check=1;
            cntr=i*9;
            continue;
        }

        if (check==1){
            v=m-cntr;
            s+=(v+'0');
            check=0;
            continue;
        }
        s+='0';

    }

    if ()

    for (int i=1;i<n;i++){
        if ((i*9)<=m){
            s1+='9';
            check=1;
            cntr=i*9;
            continue;
        }
        s1+='0';
        if (i==n-1){
            v=m-cntr;
            s1+=(v+'0');
        }


    }
//    for (int i=s.length()-1;i>=0;i--){
////        if (s[i]!='0')
////            cnt=1;
////        if (cnt==0)continue;
//            cout<<s[i];
//
//    }
//    cout<<" ";

    cout<<s<<endl;



    return 0;
}



