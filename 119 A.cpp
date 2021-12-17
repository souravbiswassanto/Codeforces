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
    fastIO();
    int n;
    int m;
    int cnt=0;
    int p,q,r;
    int cntr=0;
    int v=0;
    int check=0;
    int p1,q1;

    cin>>p>>q>>n;
    m=n;
    p1=p;
    q1=q;

    while (n!=0){
         if (check==0){
            while (p1!=0)
            {
                r=m%p1;
                m=p1;
                p1=r;
            }
            p1=p;
            check=1;
            n=n-m;
            m=n;
        }
        else {
            while (q1!=0)
            {
                r=m%q1;
                m=q1;
                q1=r;
            }
            q1=q;
            check=0;
            n=n-m;
            m=n;
        }
    }
    if (check==1){
        cout<<"0"<<endl;
    }
    else {
        cout<<"1"<<endl;
    }

    return 0;
}




