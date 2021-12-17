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

    int a;
    int b;
    int c;
    int rem;
    int digit=0;
    int v=0;
    int arr[3000];
    int position;
    int check=0;

    cin>>a>>b>>c;
    while (a<b){
        a=a*10;
        if (a>=b)
            break;
    ///cout<<v<<" v"<<endl;
    arr[v++]=0;
    }

    ///cout<<a<<endl;
    for (int i=0;i<=2500;i++){
        rem=a%b;
        a=a/b;
        arr[v++]=a;
        //cout<<a<<" a"<<endl;
        //cout<<arr[v-1]<<endl;
        a=rem*10;

    }

    for (int i=0;i<v;i++){
            //cout<<arr[i]<<" h"<<endl;
        if (arr[i]==c){
            ///position=i;
            cout<<i+1<<endl;
            check=1;
            break;
        }
    }
    if (check==0){
        cout<<"-1"<<endl;
    }

    return 0;
}


