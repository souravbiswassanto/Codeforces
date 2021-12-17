#include <bits/stdc++.h>
using namespace std;

int main(){


	int n;
	scanf("%d",&n);

	int A[n+7];
	int cntr=0,sum=0;
	for(int i=0;i<n;i++){
		scanf("%d",&A[i]);
	}

	sort(A,A+n);

	for(int i=0;i<n;i++){

		if(A[i]<sum){cntr++;continue;}
		sum+=A[i];
	}
	cout<<n-cntr<<endl;
	return 0;
}
