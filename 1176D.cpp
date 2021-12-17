#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  300006
#define  mem(a,v)   memset(a,v,sizeof(a))

vector<int >prime;
vector<int>V;map<int,int>M;
vector<int>ANS;
bool mark[30000001];
int len;
void seive (){

    int n = 30000000;
    int Number=1;
    int limit = sqrt(n*1.0)+2;
    mark[1]=1;

    for (int i=4;i<=n;i+=2)mark[i]=1;

    prime.push_back(2);

    for (int i=3;i<=n;i+=2){
        if(!mark[i]){
            prime.push_back(i);

            if(i<=limit){
                for (int j=i*i;j<=n;j+=i*2)mark[j]=1;
            }
        }
    }

}


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
    string s,s1,s3,s4;

    seive();

    cin>>n;

    len=prime.size();
    for(int i=1;i<=2*n;i++){
        cin>>a;
        V.pb(a);
        M[a]++;
    }

    sort(V.begin(),V.end());

    int length=V.size();
    for(int i=2*n-1;i>=0;i--){

        if(!mark[V[i]]&&M[V[i]]>0){
            int left=0;
            int right=length-1;
            int mid;
            int key;
            if(V[i]<=200000)key=prime[V[i]-1];
            else continue;
            if(M[key]<=0)continue;
            while(left<=right){
                mid=(left+right)/2;
                if(V[mid]==key){
                    M[key]--;
                    M[V[i]]--;
                    ANS.pb(V[i]);
                    break;
                }
                else if(V[mid]>key)right=mid-1;
                else if(V[mid]<key)left=mid+1;
            }
        }
        else if (mark[V[i]]&&M[V[i]]>0){
            for(int j=0;prime[j]*prime[j]<=V[i];j++){
                if(V[i]%prime[j]==0){
                    ANS.pb(V[i]);
                    M[V[i]/prime[j]]--;
                    M[V[i]]--;
                    break;
                }
            }
        }
    }

    for(int i=0;i<ANS.size();i++)cout<<ANS[i]<<" ";

    return 0;
}
