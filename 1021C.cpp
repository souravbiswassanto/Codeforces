#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  200006
#define  Max(a,b,c) max(a,max(b,c))
#define  Min(a,b,c) min(a,min(b,c))
#define  mem(a,v)   memset(a,v,sizeof(a))
#define  rep        for (int i=0;i<n;i++)
#define  Rep        for (int i=0;i<m;i++)

struct struct1 {

	int X;
	char ch;

	struct1 (char c,int x){
		X=x;
		ch=c;
	}
};

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

int main ()
{

    fastIO();

    ll a,b,c;
    ll n,m;
    ll cnt=0,cntr=0,sum=0,ans=1;
    ll p,q,r;
    ll v=1;
    ll check=0;
    ll x,y,z;
    ll Max=0,Min=INT_MAX;
    string s,s1,s3,s4;
    stack<struct1> S;
    cin>>n>>m;

    cin>>s;

    for (int i=0;i<n;i++){
        if (cntr==m)break;
        if (s[i]=='('){
                S.push(struct1(s[i],i));
            }
            else if (s[i]==')'&&!S.empty()){
                struct1 u=S.top();
                s1[u.X]='(';
                s1[i]=')';
                cout<<s1[u.X]<<" "<<u.X<<endl;
                cout<<s1[i]<<" "<<i<<endl;
                S.pop();
                cntr+=2;
            }
    }

    for (int i=0;cnt<m;i++){
        if (s1[i]=='('||s1[i]==')'){
            cout<<s1[i];
            cnt++;
            }
    }

    return 0;
}
