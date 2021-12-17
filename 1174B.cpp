#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  300006
#define  mem(a,v)   memset(a,v,sizeof(a))

void fastIO (){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}

ll A[MAX];
ll B[MAX];
ll C[MAX];

multiset<int>odd;
multiset<int>::iterator Odd;
multiset<int>even;
multiset<int>::iterator Even;
vector<int>ANS;

int main ()
{

    fastIO();

    ll a,b,c,n,m,k,p,q,r;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    float x,y,z;
    ll Max=-1e18;
    unsigned long long Min = 1e20;
    string s,s1,s3,s4;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>A[i];
        if(A[i]%2)odd.insert(A[i]);
        else even.insert(A[i]);
    }

    for(int i=0;i<n;i++){

        for(int j=0;j<ANS.size();j++)cout<<ANS[j]<<"a  ";
    cout<<endl;
        if (A[i]%2){
            Even = even.begin();
            if(*Even<A[i]){
            ANS.pb(*Even);
            cout<<*Even<<" Even "<<endl;
            even.erase(Even);

            for (Even=even.begin();Even!=even.end();Even++){
                cout<<*Even<<" ";
            }
            cout<<endl;
            }
            else {ANS.pb(A[i]);odd.erase(A[i]);}
        }
        else {

            Odd=odd.begin();
            if(*Odd<A[i]){
                ANS.pb(*Odd);
                cout<<*Odd<<" ODD"<<endl;
                odd.erase(Odd);

                for (Odd=odd.begin();Odd!=odd.end();Odd++){
                    cout<<*Odd<<" ";
                }
                cout<<endl;
            }
            else  {ANS.pb(A[i]);even.erase(A[i]);}
        }
    }
    for(int i=0;i<n;i++){
        cout<<ANS[i]<<" ";
    }

    return 0;
}
