#include <bits/stdc++.h>
using namespace std;

int len (int n){
	int l=0;
	for (int i=0;n!=0;i++){
		n/=10;
		l++;
	}
	return l;
}

int d_generator(int length){
	int digit=0;
	for (int i=0;i<length;i++){
		digit=digit*10+1;
	}
	return digit;
}

bool Find (int n){

	int rem;
	for (int i=0;n!=0;i++){
		rem=n%10;
		n/=10;
		if (rem!=0&&rem!=1)return 0;
	}
	return 1;
}

int main (){

	int n;
	int sum=0;

	cin>>n;


	int length1=len(n);

	int size1=d_generator(length1);

	for (int i=1;i<=length1-1;i++){
		sum+=(1<<i-1);
	}

	double size2=pow(10,length1-1);

	for (int i=size2;i<=min(n,size1);i++){
		if (Find(i))sum++;
	}

	cout<<sum<<endl;

	return 0;
}
