#include <bits/stdc++.h>
using namespace std;

int A[100006];
map <int ,int> M;
map <int ,int>::iterator it;

set <int> S;
set <int>:: iterator it1;

int main (){

	int n,k;

	scanf("%d %d",&n,&k);

	for (int i=1;i<=n;i++){
		cin>>A[i];
		S.insert(A[i]);
	}

    if (S.size()==1){
        cout<<n<<" "<<A[1]<<endl;
        return 0;
    }

	sort (A,A+n+1);

	int l=2,r=n;
	int temp;

	while (l<=r){

		temp=k;
		int check=1;
		int chk=1;

		if (A[l-1]==A[l]){
			M[A[l-1]]++;
			check=0;
		}

		if (A[r-1]==A[r]){
			M[A[r]]++;
			chk=0;
		}

		if (l!=r&&chk){
			for (int i=r;temp>=0&&i>=1;i--){
				temp-=(A[r]-A[ i]);
				if (temp>=0){
					M[A[r]]++;
				}
			}
		}

		temp=k;

		if (check){
			for (int i=l;i>=1&&temp>=0;i--){
				temp-=(A[l]-A[i]);
				if (temp>=0){
					M[A[l]]++;
				}
			}
		}

		l++;
		r--;
	}

	int Max=0,cntr=0,value;

	for (it=M.begin();it!=M.end();it++){
		cntr++;
		if (it->second>Max){
			Max=it->second;
			value=it->first;
		}
	}

	cout<<Max<<" "<<value<<endl;

	return 0;
}
