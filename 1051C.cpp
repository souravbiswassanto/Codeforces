#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;

	for(int i=0;i<n;i++){
		cin>>A[i];
		M[A[i]]++;
		S.insert(A[i]);
	}
	for(auto it:M){
		if(it.second==2){
			val=it.first;
			check=1;
			break;
		}
	}
	if(S.size()%2&&!check){
		cout<<"NO"<<endl;return 0;
	}

	if(S.size()%2==0){
		for(auto it:)
		for(int i=0;i<n;i++){
			if()
		}
	}
}