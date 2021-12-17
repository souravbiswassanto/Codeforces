#include <bits/stdc++.h>
using namespace std ;

bool isprime (int n){

    int check=1;

    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0){
            check=0;
            break;
        }
    }

    if (check==0||n==1){
        return false;
    }

    else {
        return true;
    }
}



int main ()
{
    int n,b=0,d;
    int check;
    int subtract;
    int a[100000];
    int primes[30000];

        cin>>n;


        check=1;
        d=b;

        for (int i=3;i<=n/2;i++){
            if (isprime(i)){
                continue;
            }
            subtract=n-i;
            if (isprime(subtract))
                continue;
            printf("%d %d\n",i,subtract);
            break;
        }


    return 0;
}

