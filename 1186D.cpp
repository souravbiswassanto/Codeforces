#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  300006
#define  mem(a,v)   memset(a,v,sizeof(a))
const double eps=1e-9;
void fastIO (){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}

ll A[MAX];
ll B[MAX];
ll C[MAX];
vector<double>V;
vector<int>ANS;

int main ()
{

    fastIO();

    ll a,b,c,n,m,k,p,q,r;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    float x,y,z;
    ll Max=-1e18;
    string s,s1,s3,s4;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>x;
        V.pb(x);
        sum+=(ll)x;
    }

    while(cntr<n){

        a=(int)V[cntr];
        double sqr,sqr1;
        //sqr=V[cntr];
        sqr1=a*1.0;
        //if(n==541)cout<<V[cntr]<<" s "<<sqr1<<" a "<<a<<endl;
        if(V[cntr]==sqr1){ANS.pb(a);cntr++;continue;}
//        if(sqr-sqr1<=eps){
//            ANS.pb(a); cntr++; continue;
//        }

        if(sum>0&&a<0){ANS.pb(a-1);sum--;}
        else if(sum<0&&a>0){ANS.pb(a+1);sum++;}
        else if(sum==0)ANS.pb(a);
        else ANS.pb(a);
        cntr++;
//        if(n==541){
//            for(int j=0;j<ANS.size();j++)cout<<ANS[j]<<" ";
//            cout<<endl<<sum<<" "<<cntr<<endl;
//        }
    }

    for(int i=0;i<ANS.size();i++)cout<<ANS[i]<<endl;

    return 0;
}
