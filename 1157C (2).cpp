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
vector<ll>Vector;
vector<ll>V;
vector<ll>V1;
vector<ll>V2;

int main ()
{

    fastIO();

    ll a,b,c,n,m,k,p,q,r;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    float x,y,z;
    ll Max=-1e18;
    unsigned long long Min = 1e20;
    string s="",s1,s3,s4;

    cin>>n;

    for (int i=1;i<=n;i++){
        cin>>a;
        V.pb(a);
    }
    Vector.pb(0);
    ll left=0;ll right=n-1;

    while(left!=right&&V[left]!=V[right]){
        a=Vector.back();

        if (V[left]<V[right]){
            if(V[left]<=a&&V[right]<=a){cout<<Vector.size()-1<<endl;cout<<s<<endl;return 0;}
            if (a<V[left]){
                Vector.pb(V[left]);
                s+='L';
                left++;
            }
            else {
                Vector.pb(V[right]);
                s+='R';
                right--;
            }
        }
        if (V[left]>V[right]){
            if(V[left]<=a&&V[right]<=a){cout<<Vector.size()-1<<endl;cout<<s<<endl;return 0;}
            if(a<V[right]){
                Vector.pb(V[right]);
                s+='R';
                right--;
            }
            else {
                s+='L';
                Vector.pb(V[left]);
                left++;
            }
        }
    }

    //cout<<s<<endl;

    if (left!=right&&V[left]>Vector.back()){
        for (int i=left;i<=right;i++){
            V1.pb(V[i]);
            if (V[i]>=V[i+1])break;
        }
        for (int i=right;i>=left;i--){
            V2.pb(V[i]);
            if (V[i]>=V[i-1])break;
        }

        if (V1.size()>V2.size()){
            cout<<Vector.size()+V1.size()-1<<endl;
            cout<<s;for(int i=1;i<=V1.size();i++)cout<<'L';
            return 0;
        }
        else{
            cout<<Vector.size()+V2.size()-1<<endl;
            cout<<s;for(int i=1;i<=V2.size();i++)cout<<'R';
            return 0;
        }
    }

    if(Vector.back()<V[left]){
        cout<<Vector.size()<<endl;
        cout<<s<<'L';
    }
    else {
        cout<<Vector.size()-1<<endl;
        cout<<s<<endl;
    }

    return 0;
}
