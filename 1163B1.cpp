#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  300006
#define  mem(a,v)   memset(a,v,sizeof(a))

void fastIO ()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}

ll A[MAX];
ll B[MAX];
ll C[MAX];
ll D[MAX];
set<int>V;
set<int>::iterator it;
set<int>S;
int main ()
{

    fastIO();

    ll a,b=0,c=0,n,m,k,p,q,r;
    ll cnt,cntr=0,sum=0,ans=1,check=0;
    float x,y,z;
    ll Max=-1e18;
    unsigned long long Min = 1e20;
    string s,s1,s3,s4;

    cin>>n;

    for (int i=1; i<=n; i++)
    {
        cin>>A[i];
        B[A[i]]++;
        C[A[i]]++;
    }

    cnt=n;
    for(int i=1; i<=n; i++)
    {
        it=V.begin();
        cout<<i<<" 1 "<<A[i]<<endl;

        for (int j=1; j<=10; j++)
        {
            if(C[j]<=0)
                continue;
            V.insert(C[j]);
            if(C[j]==1)S.insert(j);
            D[C[j]]++;
        }
        if(S.size()==1){
            b=n-i+1;
            break;
        }
        if(S.size()==n-i+1){
            b=n-i+1;
            break;
        }
        if(V.size()==1){
            it=V.begin();

            p=*it;
            b=n-i+1-p;break;
        }
        if(V.size()==2){
            it=V.begin();

            p=*it;
            *it++;
            q=*it;

            if(p==1&&S.size()==1){
                b=n-i+1;
                break;
            }
            else if(abs(p-q)==1&&(D[p]==1||D[q]==1)){
                b=n-i+1;
                break;
            }
        }
        C[A[i]]--;
        V.clear();S.clear();mem(D,0);
    }

    for(int i=n; i>=1; i--)
    {
        it=V.begin();

        cout<<i<<" 2 "<<A[i]<<endl;

        for (int j=1; j<=10; j++)
        {
            if(B[j]<=0)
                continue;
            V.insert(B[j]);
            if(B[j]==1)S.insert(j);
            D[B[j]]++;
        }
        if(S.size()==1&&V.size()==1){
            c=i;
            cout<<111<<endl;
            break;
        }
        if(S.size()==i){
            c=i;
            cout<<1111<<endl;
            break;
        }
        if(V.size()==1){
            it=V.begin();

            p=*it;
            c=i-p;
            cout<<2222<<endl;
            break;
        }
        if(V.size()==2){
            it=V.begin();

            p=*it;
            *it++;
            q=*it;

            if(p==1&&S.size()==1){
                c=i;
                cout<<33<<endl;
                break;
            }
            else if(abs(p-q)==1&&(D[p]==1||D[q]==1)){
                c=i;
                cout<<1212<<endl;
                break;
            }
        }
        B[A[i]]--;
        V.clear();
        S.clear();mem(D,0);
    }
    cout<<b<<" "<<c<<endl;
    cout<<max(c,b)<<endl;
    return 0;
}
