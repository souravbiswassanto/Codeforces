#include<bits/stdc++.h>
using namespace std;

int main(){

	int n,k,Max=0,Maxx=0,A[100006];

	scanf("%d %d",&n,&k);

	for(int i=1;i<=n;i++){
		scanf("%d",&A[i]);
		Max=max(A[i],Max);
	}
	k=n-k;
	int cntr=k*2;
	for(int i=1;i<=k;i++){
		Maxx=max(A[i]+A[cntr--],Maxx);
	}
	printf("%d\n",max(Maxx,Max));

	return 0;
}