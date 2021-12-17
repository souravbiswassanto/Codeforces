#include <bits/stdc++.h>
using namespace std;

int main(){

	long long n,d,b,idx,sum=0,a;
	vector<long long>V;

	cin>>n>>d;

	for(int i=1;i<=n;i++){
		cin>>a;
		V.push_back(a);
	}

	for(int i=0;i<n;i++){
		a=V[i]+d;
		auto it=upper_bound(V.begin(),V.end(),a);
		if(it==V.end())idx=n-1;
		else idx=it-V.begin()-1;

		b=idx-i-1;
		if(b<0)b=0;
		sum+=(b*(b+1))/2;
	}
	cout<<sum<<endl;

	return 0;
}
