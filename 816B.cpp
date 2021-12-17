#include<bits/stdc++.h>
using namespace std;

int A[200006];



int main(){
	int n,m,k,a,b;
	scanf("%d %d %d",&n,&k,&m);
	for(int i=1;i<=n;i++){

		scanf("%d %d",&a,&b);
		A[a]++;A[b+1]--;
	}
	for(int i=1;i<=200006;i++){
		A[i]+=A[i-1];
	}
	for(int i=1;i<=200006;i++){
		if(A[i]>=k)A[i]=1;
		else A[i]=0;
	}
	for(int i=1;i<=200006;i++)A[i]+=A[i-1];

	for(int i=1;i<=m;i++){
		cin>>a>>b;
		printf("%d\n",A[b]-A[a-1]);
	}
	return 0;
}