#include<bits/stdc++.h>
using namespace std;
#define inf 100000000
int ans;

vector<int>V[100006];
int A[100006];
int Findpos(int n,int i){
	vector<int>::iterator it=lower_bound(V[n].begin(),V[n].end(),i);
	if(it==V[n].end())return inf;
	return *it;
}

int main(){
	int n;
	scanf("%d",&n);

	for(int i=1;i<=n;i++){
		scanf("%d",&A[i]);
		V[A[i]].push_back(i);
	}

	for(int i=1;i<=n;i++){
		int pos=Findpos(A[i]+2,i);
		int pos1=inf;
		if(A[i]>2)pos1=Findpos(A[i]-2,i);
		if(pos==inf&&pos1==inf){
			cout<<n-i+1<<endl;return 0;
		}
		cout<<i<<" "<<pos<<" "<<pos1<<endl;
		pos-=i;
		pos1-=i;
		cout<<i<<" f "<<pos<<" "<<pos1<<endl;
		ans=max(ans,min(pos,pos1));
	}
	printf("%d\n",ans);
}