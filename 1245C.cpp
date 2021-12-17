#include <bits/stdc++.h>
using namespace std;
int mod=1e9+7;
int main(){

	string s;

	cin>>s;

	int n=s.size();
	int A[n+5];
	A[0]=1;
	int cntr=1;

    if((s[0]=='m'||s[0]=='w')){
            cout<<0<<endl;return 0;
    }

	for(int i=1;i<n;i++){
        if((s[i]=='m'||s[i]=='w')||(s[0]=='m'||s[0]=='w')){
            cout<<0<<endl;return 0;
        }
		if(s[i]==s[i-1]&&(s[i]=='u'||s[i]=='n')){
			A[i]=++cntr;
		}
		else {cntr=1;A[i]=1;}
	}

	long long ans=1,cnt,a=1,b=1;
	for(int i=0;i<n;i++){
		if(A[i]==1){
            a=1;b=1;
            continue;
		}
		cnt=a+b;
		a=b;
		b=cnt;
		cnt%=mod;
		a%=mod;
		if(A[i+1]==1||i==n-1)A[i]=cnt;
		else A[i]=0;
	}
	for(int i=0;i<n;i++){
        if(A[i]){
            ans*=A[i];
            ans%=mod;
        }
	}
	cout<<ans<<endl;
	return 0;
}
