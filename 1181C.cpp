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

deque<ll>dq;
vector<pair<int,int> >V;
vector<pair<int,int> >V2;

int main ()
{

    fastIO();

    ll a,b,c,n,m,k,p,q,r;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    float x,y,z;
    ll Max=0;
    unsigned long long Min = 1e20;
    string s,s1,s3,s4;

    cin>>n>>k;

    for(int i=0;i<n;i++){
        cin>>A[i];
        dq.push_back(A[i]);
        Max=max(Max,A[i]);
    }

    while(dq.front()!=Max){
        a=dq.front();
        dq.pop_front();
        b=dq.front();
        dq.pop_front();


        if(a>b){
            dq.pb(b);
            dq.push_front(a);
        }
        else {
            dq.pb(a);
            dq.push_front(b);
        }
        V.pb(mp(a,b));
        cntr++;
    }

    for (int i=0;i<n;i++){
        a=dq.front();
        dq.pop_front();
        b=dq.front();
        dq.pop_front();


        if(a>b){
            dq.pb(b);
            dq.push_front(a);
        }
        else {
            dq.pb(a);
            dq.push_front(b);
        }
        V2.pb(mp(a,b));
    }

    while(k--){
        cin>>a;

        if(a<=cntr){
            p=V[a-1].first;
            q=V[a-1].second;
            cout<<p<<" "<<q<<endl;
        }
        else {
            a-=cntr;a--;
            p=V2[a%(n-1)].first;
            q=V2[a%(n-1)].second;
            cout<<p<<" "<<q<<endl;
        }

    }

    return 0;
}
