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
#define     inf              1000006

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

    cin>>n;

    int a[MAX];
    int b[MAX];
    int c[MAX];
    int d[10000];
    int minimum=inf;
    int k=0;

    for (int i=0;i<n;i++){
        cin>>a[i];
    }

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (j!=i){
                int sum=a[i]+a[j];
            cout<<"sum "<<sum<<endl;
                b[k]=sum;
                k++;
                cout<<a[i]<<" "<<a[j]<<endl;
                cout<<"b k "<<b[k]<<endl;
            }
        }
    }
    int l=0;
    set <int > s(b,b+k);
    set <int>::iterator it;
    for (it=s.begin();it!=s.end();it++){
        c[l]=*it;
        cout<<"l "<<c[l]<<endl;
        l++;
    }
    for (int i=0;i<l;i++){
        minimum=c[i];
        for (int j=0;j<l;j++){
            for (int p=0;p<n;p++){
                if ((i!=j)&&(i!=p)){
                    if (abs(c[j]-c[p])<minimum){
                        cout<<"mn "<<minimum<<endl;
                         minimum=abs(c[j]-c[p]);
            }
                }
                }

        }
    }
    cout<<minimum<<endl;

    return 0;
}


