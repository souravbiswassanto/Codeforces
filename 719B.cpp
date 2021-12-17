#include <bits/stdc++.h>
using namespace std;

int main(){


	int n,cntb=0,cntr=0;
	cin>>n;
	string b="",r="",s;
	cin>>s;

	for(int i=0;i<n;i++){
		if(i%2)b+='r';
		else b+='b';
	}

	for(int i=0;i<n;i++){
		if(i%2)r+='b';
		else r+='r';
	}

	for(int i=0;i<n;i++){
		if(s[i]==b[i])continue;
		if(s[i]=='b')cntb++;
		else cntr++;
	}
	int ans1=max(cntr,cntb);
	cntb=0;cntr=0;

	for(int i=0;i<n;i++){
		if(s[i]==r[i])continue;
		if(s[i]=='b')cntb++;
		else cntr++;
	}
	int ans2=max(cntr,cntb);
	cout<<min(ans1,ans2)<<endl;

	return 0;
}
