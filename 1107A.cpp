#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{


    ll T,N,M,X,Y,W,A,B;

    cin>>T;

    while(T--)
    {
        cin>>N;

        string S;

        cin>>S;

        A=S[0]-48;
        B=S[1]-48;

        if(N==2 && A>=B)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl<<2<<endl;


            cout<<S[0]<<" ";
            for(int i=1;i<N;i++) cout<<S[i]; cout<<endl;
        }

    }

    return 0;
}
