#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    ///use always ll instead of int
    //sieve();

    ll a,b,c,d;

    ll avg;

    scanf("%lld:%lld",&a,&b);
    scanf("%lld:%lld",&c,&d);

    ll sum1=a*60+b;
    ll sum2=c*60+d;
    ll ans=(sum1+sum2)/2;
    ll a1=ans/60; ll a2=ans%60;
    if(a1/10!=0 && a2/10!=0) printf("%lld:%lld\n",a1,a2);
    else if(a1/10==0 && a2/10!=0) printf("0%lld:%lld\n",a1,a2);
    else if(a1/10!=0 && a2/10==0) printf("%lld:0%lld\n",a1,a2);
    else printf("0%lld:0%lld\n",a1,a2);

    return 0;
}
