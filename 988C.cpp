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
string Rev (string s){

    string s1="";

    for (int i=s.length()-1;i>=0;i--)s1+=s[i];
    return s1;
}
int main ()
{

    fastIO();
    vector<ll> V;
    set<ll>S;
    set<ll>::iterator it;
    map<string,ll> M;
    map<string,ll>::iterator it1;

    ll a,b,c;
    ll n,m;
    ll cnt=0,cntr=0,sum=0,ans=1;
    ll p,q,r;
    ll v=1;
    ll check=0,ck=0,ckk=0,ck1=0;
    ll x,y,z;
    ll Max=0,Min=INT_MAX;
    string s,s1[MAX],s2[MAX],s3,s4;
    int pos1=0,pos2=0,pos3=0,pos4=0,Pos=0,Pos1=0;

    cin>>s;

    int len=s.size();
    s=Rev(s);

    for (int i=0;i<len;i++){
    	if (s[i]=='0'||s[i]=='5')check=1;
    }
    if (check){
    	for (int i=0;i<len;i++){
    		if (s[i]=='0'&&cnt==0){
    			pos1=i;
    			cnt=1;
    			//s[i]='*';
    			cout<<pos1<<" poss1"<<endl;
    			//break;
    		}
    		if (s[i]=='5'&&cntr==0){
    			pos2=i;cout<<pos2<<" pos2 "<<endl;
    			//break;s[i]='*';
    			//s[i]='*';
    			cntr=1;
    		}
    	}

    	if (cnt==1){
    		for (int i=0;i<len;i++){
                if (i==pos1)continue;
    			if (s[i]=='5'||s[i]=='0'){
    				pos3=i;cout<<pos3<<" pos3 "<<endl;
    				ckk=1;
    				break;
    			}
    		}
    		if (pos1>pos3)
                Pos=pos1+pos3;
            else Pos=pos1+pos3-1;
    	}
    	if (cntr==1){
    		for (int i=0;i<len;i++){
                if (i==pos2)continue;
    			if (s[i]=='2'||s[i]=='7'){
    				pos4=i;cout<<pos4<<" pos4 "<<endl;
    				ckk=1;
    				break;
    			}
    		}
    		if (pos2>pos4)
                Pos1=pos2+pos4;
            else Pos1=pos2+pos4-1;
    	}
    	if (ckk)cout<<min(Pos1,Pos)<<endl;
    	else cout<<-1<<endl;

    }
    else cout<<-1<<endl;

    return 0;
}
