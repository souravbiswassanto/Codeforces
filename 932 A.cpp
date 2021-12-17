#include <bits/stdc++.h>
using namespace std ;

string rev (string s){
    string s1;
    for (int i=s.length()-1;i>=0;i--){
        s1+=s[i];
    }
    return s1;
}

int main ()
{

    string s,s1,s2,s3;

    cin>>s;

    s1=rev(s);
    s2=s+s1;

    cout<<s2<<endl;

    return 0;
}



