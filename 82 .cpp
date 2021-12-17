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
    int b=1;
    int r=5;
    int total=0;
    int sum;
    int rem;
    int position;

    cin>>n;

    while (1){

        total=total+r;
        r=2*r;

        if (total>=n){
            break;
        }
        b=b*2;
    }
    //cout<<b<<endl;
    //cout<<total<<endl;
    rem=total-n;

    position=rem/b;

    if (position==0)
        cout<<"Howard"<<endl;
    if (position==1)
        cout<<"Rajesh"<<endl;
    if (position==2)
        cout<<"Penny"<<endl;
    if (position==3)
        cout<<"Leonard"<<endl;
    if (position==4)
        cout<<"Sheldon"<<endl;

    return 0;
}


