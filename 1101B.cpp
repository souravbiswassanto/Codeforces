#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    string S;

    cin>>S;
    int ans=4,f=-1,s=-1,t=-1,fo=-1;
    int len=S.length();

    for(int i=0;i<len;i++){if(S[i]=='['){f=i;break;}}

    for(int i=f+1;i<len;i++){ if(S[i]==':') {s=i; break;} }

    for(int i=len-1;i>s;i--){if(S[i]==']'){t=i; break;}}

    for(int i=t-1;i>s;i--){if(S[i]==':'){fo=i; break;}}

    if(f==-1 || s==-1 || t==-1 || fo==-1)
    {
        cout<<"-1"<<endl;
        return 0;
    }

    for(int i=s+1;i<fo;i++) if(S[i]=='|') ans++;

    cout<<ans<<endl;


    return 0;
}
