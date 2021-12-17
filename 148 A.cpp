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

        int a[MAX];
        mem (a,-1);
        int j,k,l,m,n,d;
        int cnt=0;

        cin>>k>>l>>m>>n>>d;
        int x[11];
        x[0]=k;
        x[1]=l;
        x[2]=m;
        x[3]=n;

        for (int i=0;i<4;i++){
            for (j=x[i];j<=d;j+=x[i]){
                a[j]=0;
            }
        }
        for (int i=1;i<=d;i++){
            if (a[i]==-1){
                cnt++;
            }
        }
        cout<<d-cnt;

    return 0;
}


