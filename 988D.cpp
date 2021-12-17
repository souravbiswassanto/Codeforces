#include <bits/stdc++.h>
using namespace std;

int A[100006];
map <int ,int> M;
map <int ,int>::iterator it;

int main (){

	int n,k;

	scanf("%d %d",&n,&k);

	for (int i=1;i<=n;i++){
		cin>>A[i];
	}

	sort (A,A+n+1);

	int l=1,r=n;
	int temp;

	while (l<=r){

		temp=k;
		int check=1;
		int chk=1;

		if (A[l-1]==A[l]){
			M[A[l]]++;
			//check=0;
			l++;
			continue;
		}

		if (A[r-1]==A[r]){
			M[A[r]]++;
			//chk=0;
			r--;
			continue;
		}

		if (l!=r){
			for (int i=r;temp>=0&&i>=1;i--){
				temp-=(A[r]-A[ i]);
				if (temp>=0){
					M[A[r]]++;
				}
			}
		}

		temp=k;

        for (int i=l;i>=1&&temp>=0;i--){
            temp-=(A[l]-A[i]);
            if (temp>=0){
                M[A[l]]++;
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
