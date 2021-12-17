#include <bits/stdc++.h>
using namespace std ;

#define long long     ll
#define unsigned long long   ull

void fastIO (){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}

int main ()
{

    ///freopen("output.txt","w",stdout);

    fastIO();
    int count1=0;
    int count2=0;
    int check=0;

    string s,rev;

    cin>>s;

    int j=0;

    rev="";

    for (int i=0;i<s.length();i++){
        if (s[i]=='0'){
            count1++;
        }
    }
    for (int i=s.length()-1;i>=0;i-- ){
        rev+=s[i];
        j++;

    }
    for (int i=0;i<rev.length();i++){
        if (rev[i+6]=='1'){
            count2++;
        }

    }
    for (int i=0;i<6;i++){
        if (rev[i]=='1')
            check=1;
    }
//    cout<<rev<<endl;
//    cout<<count1<<" "<<count2<<endl;
    if (count1>=6&&count2>=1&&check==0){
        cout<<"yes"<<endl;
    }
    else {
        cout<<"no"<<endl;
    }


    return 0;
}



