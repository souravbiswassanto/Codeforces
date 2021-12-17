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

int A[MAX];
int b[MAX];
int c[MAX];

int main ()
{

    ///freopen("output.txt","w",stdout);

    fastIO();
    int n;
    int m;
    int cnt=0;
    int a,b;
    int cntr=0;
    int v=0;
    int sum=1;
    int check=0;

    cin>>n>>m;

    for (int i=1;i<n;i++){
        cin>>A[i];
    }


    for (int i=sum;i<n;){

        cout<<A[i]<<" hi "<<i<<endl;
        sum=sum+A[i];
        i=sum;
        cout<<sum<<endl;
        if (sum==m){
            cout<<"YES"<<endl;
            check=1;
            break;
        }
    }

    if (check==0){
        cout<<"NO"<<endl;
    }

    return 0;
}




