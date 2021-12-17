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

    vector <int> V;

    for (int i=1;i<=sqrt(m);i++){
        if (m%i==0){
            V.pb(i);
            if (m!=1&&i!=(m/i))
                V.pb(m/i);
        }
    }

    sort(V.begin(),V.end());
    for (int i=0;i<V.size();i++){
        if (V[i]>n)break;
        if ((m/V[i])<=n){
            cntr++;
        }
    }

    cout<<cntr<<endl;

    return 0;
}



