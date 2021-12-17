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

int counter [100];

int main ()
{

    ///freopen("output.txt","w",stdout);

    fastIO ();

    int y;
    int n;
    int a[5];
    int check=1;

    cin>>y;

    for (int i=y+1;i<=9012;i++){
            n=i;
        for (int j=0;n!=0;j++){
            int rem=n%10;
            n=n/10;
            a[j]=rem;
        }
        check=1;
        for (int j=0;j<3;j++){
            if (check==0)
            {

                break;
            }
            for (int k=j+1;k<4;k++){
                if (a[j]==a[k]){
                    check=0;
                    break;
                }
            }
        }

        if (check==0){
            continue;
        }
        else {
            printf("%d\n",i);
            break;

        }

    }

    return 0;
}


