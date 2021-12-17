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

int main ()
{

    fastIO();

    ll a,b,c,n,m,k,p,q,r;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    float x,y,z;
    ll Max=-1e18;
    long long Min = 0;
    string s="",s1,s3,s4;

    cin>>n;

    for (int i=0;i<n;i++){
        cin>>A[i];
    }
    int left=0,right=n-1;
    while(right>left){
        cout<<left<<" "<<right<<endl;
        if (A[left]<=A[right]){
            if(A[left]<Min&&A[right]<Min)break;
            if (A[left]<Min){
                s+='R';
                Min=A[right];
                right--;
            }
            else {
                s+='L';
                Min=A[left];
                left++;

            }


        }
        else if (A[left]>=A[right]){
            if(A[left]<Min&&A[right]<Min)break;
             if (A[right]<Min){
                s+='L';
                Min=A[left];
                left++;
            }
            else {
                s+='R';
                Min=A[right];
                right--;
            }
        }

    }
    if (A[left]>Min){
    cout<<s.size()+1<<endl;
    s+='L';
    cout<<s<<endl;
    }
    else {
        cout<<s.size()<<endl;
        cout<<s<<endl;
    }

    return 0;
}
