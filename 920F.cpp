#include<bits/stdc++.h>
using namespace std;

#define MAX 1000006
#define ll    long long
#define Size  500006

bool mark[Size];
vector<ll>prime;
ll divisor[MAX];

void seive(ll n)
{
    ll limit = sqrt(n*1.0)+2;
    mark[1]=1;
    for (int i=4; i<=n; i+=2)mark[i]=1;
    prime.push_back(2);
    for (int i=3; i<=n; i+=2)
    {
        if(!mark[i])
        {
            prime.push_back(i);
            if(i<=limit)
            {
                for (int j=i*i; j<=n; j+=i*2)
                    mark[j]=1;
            }
        }
    }
}

ll fx(ll n){
    ll ans=1;
    for (int i = 0;; i++) {
        if (prime[i] * prime[i] * prime[i] > n)
            break;
        ll cnt = 1;
        while (n % prime[i] == 0)
        {
            n = n / prime[i];
            cnt = cnt + 1;
        }
        ans = ans * cnt;
    }
    if(mark[n]==0)ans*=2;
    else if(mark[(int)sqrt(n)]==0)ans*=3;
    else if(n!=1)ans*=4;
    return ans;
}

int A[MAX];
int tree[MAX*3];

void stree(int node,int b,int e){
    if(b==e){
        tree[node]=A[b];
        return;
    }

    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;

    stree(left,b,mid);
    stree(right,mid+1,e);
    tree[node]=tree[left]+tree[right];
}

void update_single(int node,int b,int e,int updatenode,int newvalue){

    if(updatenode<b||updatenode>e)return;
    if(b==updatenode){
        tree[node]=newvalue;
        return;
    }

    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;

    update_single(left,b,mid,updatenode,newvalue);
    update_single(right,mid+1,e,updatenode,newvalue);
    tree[node]=tree[left]+tree[right];

}

int query(int node,int b,int e,int i,int j){

    if(i<=b&&e<=j){
        return tree[node];
    }
    else if(i>e||b>j)return 0;
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;

    int c=query(left,b,mid,i,j);
    int d=query(right,mid+1,e,i,j);

    return c+d;
}

int main (){
    seive(1000001);

    for(int i=1;1<=1000000;i++){
        divisor[i]=fx(i);
        cout<<divisor[i]<<endl;
    }
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>A[i];
    }
    stree(1,1,n);
    cout<<query(1,1,n,2,5)<<endl;
    update_single(1,1,n,3,100);
    cout<<query(1,1,n,2,5)<<endl;;

    return 0;
}
