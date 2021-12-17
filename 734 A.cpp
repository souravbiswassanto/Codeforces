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
    int p,q,r;
    int cntr=0;
    int v=0;
    int check=0;
    int x,y,z;
    string s,s1,s2;

    cin>>n;

    cin>>s;

    for (int i=0;i<n;i++){
        if (s[i]=='D'){
            cnt++;
        }
        if (s[i]=='A'){
            cntr++;
        }
    }
    if (cnt>cntr){
        cout<<"Danik"<<endl;
    }
    else if (cnt<cntr){
        cout<<"Anton"<<endl;
    }
    else if (cnt==cntr){
        cout<<"Friendship"<<endl;
    }

    return 0;
}



