//#include <bits/stdc++.h>
//using namespace std ;
//
//#define  ll   long long
//#define  pb  push_back
//#define  mp  make_pair
//#define  MAX  300006
//#define  mem(a,v)   memset(a,v,sizeof(a))
//
//void fastIO (){
//
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
//    cout.precision(20);
//}
//
//ll A[MAX];
//ll B[MAX];
//ll C[MAX];
//
//int main ()
//{
//
//    fastIO();
//
//    ll a,b,c,n,m,k,p,q,r;
//    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
//    float x,y,z;
//    ll Max=-1e18;
//    unsigned long long Min = 1e20;
//    string s,s1,s3,s4;
//
//    cin>>n;
//
//    for (int i=0;i<n;i++){
//        cin>>A[i];
//    }
//
//    for (int i=1;i<n;i++){
//        if ((A[i]==3&&A[i-1]==2)||(A[i]==2&&A[i-1]==3)){
//            cout<<"Infinite"<<endl;
//            return 0;
//        }
//        sum+=(A[i]+A[i-1]);
//    }
//
//    cout<<"Finite"<<endl;
//    cout<<sum<<endl;
//
//    return 0;
#include<bits/stdc++.h>
using namespace std;

double logg[1000005];

int main()
{
    int t, n, b;
    for(int i=1;i<=1000000;i++)
        logg[i]=logg[i-1] + log10(i);
     scanf("%d", &t);
     for(int cas=1;cas<=t;cas++)
     {
        scanf("%d %d", &n, &b);
        long long cnt=logg[n]/log10(b) + 1;
        printf("Case %d: %lld\n", cas, cnt);
    }
    return 0;
}
//}
