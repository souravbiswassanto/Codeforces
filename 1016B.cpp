#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  200006
#define  Max(a,b,c) max(a,max(b,c))
#define  Min(a,b,c) min(a,min(b,c))
#define  mem(a,v)   memset(a,v,sizeof(a))
#define  rep        for (int i=0;i<n;i++)
#define  Rep        for (int i=0;i<m;i++)

void fastIO (){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}

ll A[MAX];
int B[1006][1006];
ll C[MAX];

int main ()
{

    fastIO();

    ll a,b,c;
    ll n,m,q;
    ll x,y,z;
    ll Max=0,Min=INT_MAX,cntr=0;
    string s,s1,s3,s4;

    cin>>n>>m>>q;

    cin>>s>>s1;

    for (int i=0;i<=n-m;i++){
        s3="";
        for (int j=i;j<i+m;j++){
            s3+=s[j];
        }
        if (s3==s1){
            A[i+m-1]=++cntr;
        }
    }
    int ss=A[0];

    for (int i=0;i<n;i++){
        if (A[i]!=0)ss=A[i];
        A[i]=ss;
    }

    for (int i=0;i<n;i++){
        for (int j=i;j<n;j++){
            if (m>1)B[i][j]=abs(A[j]-A[i]);
            else {
                if (s[i]==s1[0])B[i][j]=abs(A[j]-A[i])+1;
                else B[i][j]=abs(A[j]-A[i]);
            }
        }
    }

    for (int i=0;i<q;i++){
        cin>>a>>b;

        cout<<B[a-1][b-1]<<endl;
    }

    return 0;
}
