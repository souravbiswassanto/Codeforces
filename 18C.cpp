#include <bits/stdc++.h>
using namespace std;

int A[100006];
int B[100006];

int main (){

	int n;

    cin>>n;

	for (int i=1;i<=n;i++){
		cin>>A[i];
		B[i]=B[i-1]+A[i];
	}

	int l=0;
	int r=n;
	int result=0;

	for (int i=1;i<n;i++){
		if (B[i]==(B[r]-B[i]))result++;
	}

	cout<<result<<endl;

	return 0;
}
