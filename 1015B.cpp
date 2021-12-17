#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  100006
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
ll B[MAX];
ll C[MAX];

ll rev (ll a,ll b){

    return a>b;
}

bool check(string S1,string S2)
{
    int len=S1.length();

    sort(S1.begin(),S1.end());
    sort(S2.begin(),S2.end());

    if(S1==S2) return true;
    else return false;

}
int main ()
{

    fastIO();
    set<char>S;
    set<char>::iterator it;
    set<char>S1;
    set<char>::iterator it1;

    ll a,b,c;
    ll n,m;
    ll cnt=0,cntr=0,sum=0,ans=1;
    ll p,q,r;
    ll v=1;
    ll x,y,z;
    ll Max=0,Min=INT_MAX;
    string t,s,s1[MAX],s2[MAX],s3,s4;

    cin>>n;

    cin>>s>>t;

    if (!check(s,t)){
        cout<<-1<<endl;
        return 0;
    }

    for (int i=0;i<n;i++){
        if (s[i]==t[i])continue;

        for (int j=i;j<n;j++){
            if (s[j]==t[i]){
                x=j;
                break;
            }
        }
        for (int j=x;j>=i;j--){
            swap(s[j],s[j-1]);
        }
        for (int j=x-1;j>=i;j--){
            A[cnt++]=j+1;
        }
        cntr+=(x-i);

    }

    cout<<cntr<<endl;
    for (int i=0;i<cnt;i++){
        cout<<A[i]<<" ";
    }

    return 0;
}
