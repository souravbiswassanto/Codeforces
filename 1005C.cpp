#include<bits/stdc++.h>
using namespace std;
map<long long,int>M;
int main(){
	int n,val,check=0,res=0;
	long long po2;
	vector<long long>V;
	scanf("%d",&n);

	for(int i=0;i<n;i++){
		scanf("%d",&val);
		V.push_back(val);
		M[val]++;
	}
	sort(V.begin(),V.end());

	for(int i=0;i<n;i++){
		check=0;
		for(long long j=0;j<=31;j++){
			po2=1LL<<j;
			
			if(V[i]==po2&&M[V[i]]>=2){
				check=1;
				break;
			}
			val=po2-V[i];
			if(po2<=V[i])continue;
			if(val==V[i]&&M[V[i]]<=1)continue;
			
			if(binary_search(V.begin(),V.end(),val)){check=1;break;}
		}
		if(!check)res++;
	}
	printf("%d\n",res);
	return 0;
}