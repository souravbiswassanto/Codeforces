#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  100006

void fastIO (){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}

int a[MAX];
int b[MAX];
int c[MAX];
int v=0;

void seive (){

    a[v]=2;
    v++;

    for (int i=2;i<=MAX;i+=2){
        b[i]=1;
    }
    for (int i=3;i<=MAX;i+=2){
        if (b[i]==0){
            a[v++]=i;//cout<<a[v-1]<<endl;
            for (int j=i*2;j<=MAX;j+=i){
                b[j]=1;
            }
        }
    }

}

int ans (int n){

    int C=0;

    for (int i=0;a[i]*a[i]<=n;i++){
        if (n%a[i])
            continue;
        C++;
        while (n%a[i]==0){
            n=n/a[i];
        }
    }
    if (n!=1){
        C++;
    }

    return C;

}

int main ()
{

    ///freopen("output.txt","w",stdout);

    fastIO();
    seive();
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

    for (int i=1;i<=n;i++){
        if (ans(i)==2){
            cnt++;
        }
    }
    cout<<cnt<<endl;

    return 0;
}



