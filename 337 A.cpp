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
    int l;
    int a[MAX];
    int sum=0;
    int v=0;
    int minn=214748358;

    cin>>n>>l;

    for (int i=0;i<l;i++){
        cin>>a[i];
    }

    sort (a,a+l);

    for (int i=0;i<l-n+1;i++){///cout<<i<<endl;
        for (int j=i;j<i+n-1;j++){
//            if (v>n){
//                v=0;
//                break;
//            }
//            v++;
            sum+=(a[j+1]-a[j]);
            ///cout<<sum<<" "<<a[j+1]<<" "<<a[j]<<endl;
        }
        if(sum<minn){
            minn=sum;
        }
        sum=0;
    }
    cout<<minn<<endl;

    return 0;
}


