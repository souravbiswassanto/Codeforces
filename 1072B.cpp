#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  200006
#define  Max(a,b,c) max(a,max(b,c))
#define  Min(a,b,c) min(a,min(b,c))

ll A[MAX];
ll B[MAX];
ll C[MAX];

int find_common(int a,int b,int c,int d){

    if(a==c||a==d)return a;
    else if(b==c||b==d)return b;
    else return -1;
}

int main ()
{
    vector<ll> V;
    set<ll>S;
    set<ll>::iterator it;

    ll a,b,c;
    ll n,m;
    ll cnt=0,cntr=0,sum=0,ans=1;
    ll p,q,r;
    ll v=1;
    ll check=0;
    ll x,y,z;
    ll Max=0,Min=INT_MAX;
    string s,s1,s3,s4;

    cin>>n;

    for (int i=1;i<n;i++){
        cin>>A[i];
        S.insert(A[i]);

    }

    for (int i=1;i<n;i++){
        cin>>B[i];
        S.insert(B[i]);
    }

    for (int i=1;i<n;i++){
        if ((A[i]==1&&B[i]==0)||(A[i]==2&&B[i]==0)||(A[i]==3&&B[i]==1)||(A[i]==3&&B[i]==2)||(A[i]==0&&B[i]==0)||(A[i]==1&&B[i]==1)||(A[i]==2&&B[i]==2)||(A[i]==3&&B[i]==3)){

        }
        else {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    int ss=find_common(A[1],B[1],A[2],B[2]);
    int pp;
    for (int i=1;i<=n-2;i++){

        pp=find_common(A[i],B[i],A[i+1],B[i+1]);
        C[i]=pp;
        if (pp==-1){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;

    if (n==2){
        cout<<A[1]<<" "<<B[1]<<endl;
        return 0;
    }
    if (S.size()==2){
        while(n--){
            if (n%2)cout<<A[1]<<" ";
            else cout<<B[1]<<" ";
        }
        return 0;
    }
    if (ss==A[1])cout<<B[1]<<" ";
    else cout<<A[1]<<  " ";

    for (int i=1;i<=n-2;i++)cout<<C[i]<<" ";

    ss=pp;

    if (ss==A[n-1])cout<<B[n-1]<<" ";
    else cout<<A[n-1]<<  " ";

    return 0;
}
