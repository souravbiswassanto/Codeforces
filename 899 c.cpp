#include <bits/stdc++.h>
using namespace std ;

#define     pb               push_back
#define     popb             pop_back
#define     ll               long long int
#define     ull              unsigned long long int
#define     fst                first
#define     sec                second
#define     mem(a,v)         memset(a,v,sizeof(a))
#define     mp               make_pair
#define     ps                push
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
#define     pii              pair <int,int>
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
    int a[MAX];
    int b[MAX];
    int mid;
    int v=0;
    int sum=0;

    cin>>n;

    sum=(n*(n+1))/2;

    if (sum%2==0)
        mid=sum/2;
    else
        mid=sum/2+1;

    if (sum%2==0){
        cout<<"0"<<endl;
        for (int i=1;i<=n;i++){
                a[v]=i;
            for (int j=i+1;j<=n;j++){
                a[v]=j;
                sum1=a[i]+a[j];
                for (int k=j+1;k<=n;k++){
                    sum1=sum1+a[k];
                    i
                }
            }
        }
    }

    return 0;
}


