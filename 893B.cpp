#include <bits/stdc++.h>
using namespace std ;

#define     pb               push_back
#define     popb             pop_back
#define     ll               long long int
#define     ull              unsigned long long int
#define     f                first
#define     s                second
#define     mem(a,v)         memset(a,v,sizeof(a))
#define     mp               make_pair
#define     p                push
#define     fnt              front
#define     pf               push_front
#define     vec1             vector < long int >
#define     vt               vector <long int >:: iterator
#define     list1            list < long int >
#define     lt               list <long int >:: iterator
#define     map1             map <long int,long int>
#define     mt               map <long int >:: iterator
#define     set1             set <long int >
#define     st               set <long int>::iterator
#define     que              queue <long int>
#define     qt               queue <long int>::iterator
#define     stk              stack <long int>
#define     sit              stack <long int>::iterator
#define     MAX              100006

void fastIO (){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}

int main ()
{

    ///freopen("output.txt","w",stdout);

    fastIO ();

    int n;
    int d;
    int k=0;
    int b;
    int arr[MAX];
    cin>>n;
    float total;
    int check=0;
    for (int i=1;i<=sqrt(n);i++){
        if (n%i==0){
            arr[k]=i;
            k++;
            arr[k]=(n/i);
            k++;
        }
    }
    sort(arr,arr+k);

    for (int i=k-1;i>=0;i--){
            if (check==1){
                break;
            }
        for (int j=1;j<=110;j++){
            total=(pow(2,j)-1)*(pow(2,j-1));

            if (arr[i]==total)
            {
                cout<<arr[i]<<endl;
                check=1;
                break;
            }
            if (total>arr[i]){
                break;
            }
        }
    }

    return 0;
}


