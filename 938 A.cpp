#include <bits/stdc++.h>
using namespace std ;

int main ()
{

    int cnt=0,cntr=0;
    string s,s1,s2,s3;

    cin>>n;
    cin>>s;

    for (int i=0;i<s.length();i++){
        if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'){
            cntr++;
            if (cntr>1){
                continue;
            }
            s1+=s[i];
        }
        else{
            cntr=0;
            s1+=s[i];
        }
    }

    cout<<s1<<endl;
    return 0;
}



