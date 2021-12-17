#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll sum,zero,one;
int color[500006];
vector<ll>graph[500006];

void DFS(int source,int par){

	for(int i=0;i<graph[source].size();i++){
		int v=graph[source][i];
		if(v==par)continue;
		color[v]=1-color[source];
		DFS(v,source);
	}
}

int main(){

	ll n,a,b;

	cin>>n;

	for(int i=1;i<n;i++){
		cin>>a>>b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	color[1]=1;
	DFS(1,0);

	for(int i=1;i<=n;i++){
		one+=color[i];
	}
	zero=n-one;
    //cout<<zero<<" "<<one<<endl;
	for(int i=1;i<=n;i++){
		if(color[i])sum+=(zero-graph[i].size());
		else sum+=(one-graph[i].size());
		//cout<<sum<<" "<<graph[i].size()<<endl;
	}
	cout<<sum/2<<endl;

	return 0;
}
