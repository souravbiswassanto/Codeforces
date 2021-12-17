#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<ll,int>M;
map<ll,int>M1;
int main(){

	ll n,sum=0,val;
	cin>>n;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		val=0;
		long long Min=1000000;
		for(auto c:s){
			val+=(c == '(' ? +1 : -1);

		}
		int pre=0,check=0;
		for(auto c:s){
			pre+=(c == '(' ? +1 : -1);
			if(pre<min(val,0LL)){
                check=1;break;
			}
		}
		if(check){
			continue;
		}
        if (M[-val] > 0) {
			M[-val] --;
			sum++;
		} else {
			M[val]++;
		}
	}

	cout<<sum<<endl;
}
