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

    int a,b,c;
    int a1,a2,a3,a4,a5,a6,a7,a8;
    int b1,b2,b3,b4,b5;
    int maxx=0;

    cin>>a>>b>>c;

    a1=a*b*c;
    maxx=max(maxx,a1);
    a2=a+b+c;
    maxx=max(maxx,a2);
    a3=a+b*c;
    maxx=max(maxx,a3);
    a4=a*b+c;
    maxx=max(maxx,a4);
    a5=(a+b)*c;
    maxx=max(maxx,a5);
    a6=a*(b+c);
    maxx=max(maxx,a6);

    cout<<maxx<<endl;

    return 0;
}


