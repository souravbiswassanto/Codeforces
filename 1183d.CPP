#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;
	map<int,int>M;
	int A[n+3],B[n+3]={0};
	for(int i=1;i<=n;i++){
		cin>>A[i];
		M[A[i]]++;
	}
	for(auto it:M){
		B[it.second]++;
	}
	int res=0;
	for(int i=n;i>=1;i--){
		if(B[n]){
			sum+=i;
			rest+=(B[n]-1);
		}
		else if(res){
			sum+=i;res--;
		}
	}
	cout<<sum<<endl;
}