
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
    string s[2006],s1[2006],s2;

    cin>>n;

    for (int i=0;i<n;i++){
        cin>>s[i];
        s2=s[i];

        if (check==1)continue;

        if (s2[0]=='O'&&s2[1]=='O'){
            check=1;
            s[i][0]='+';
            s[i][1]='+';
        }
        if (s2[3]=='O'&&s2[4]=='O'){
            check=1;
            s[i][3]='+';
            s[i][4]='+';
        }
    }

    if (check==1){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
        return 0;
    }

    for (int i=0;i<n;i++){
        cout<<s[i]<<endl;
    }

    return 0;
}



