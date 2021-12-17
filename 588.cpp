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

    string s;
    int check=0;
    cin>>s;
    int l=s.length();
    for (int i=0;i<l;i++){
        if (s[i]=='h'){
            for (int j=i+1;j<l;j++){
                if (s[j]=='e'){
                for (int k=j+1;k<l;k++){
                    if (s[k]=='l'){
                        for (int m=k+1;m<l;m++){
                            if (s[m]=='l'){
                                for (int n=m+1;n<l;n++){
                                    if (s[n]=='o'){
                                        check=1;
                                    }
                                }
                            }
                        }
                    }
                }
                }
            }
        }
    }

    if (check==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}


