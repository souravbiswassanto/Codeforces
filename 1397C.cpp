#include<bits/stdc++.h>
using namespace std;

#define ll       long long
#define pb push_back

int main()
{
    ll n;
    cin>>n;
    ll A[n+6];
    vector<ll>Ans;
    for(int i=1; i<=n; i++)
    {
        cin>>A[i];
    }

    if(n==1){
        cout<<1<<" "<<1<<endl;
        cout<<-1*A[1]<<endl;
        cout<<1<<" "<<1<<endl;
        cout<<0<<endl;
        cout<<1<<" "<<1<<endl;
        cout<<0<<endl;return 0;
    }

    cout<<1<<" "<<1<<endl;
    cout<<-1*A[1]<<" ";
    cout<<endl;
    cout<<2<<" "<<n<<endl;
    for(int i=2; i<=n; i++)
    {
        Ans.pb(A[i]*(n-1)+A[i]);
        cout<<A[i]*(n-1)<<" ";
    }
    cout<<endl;
    cout<<1<<" "<<n<<endl;
    cout<<0<<" ";
    for(int i=0; i<Ans.size(); i++)
    {
        cout<<Ans[i]*-1<<" ";
    }
    cout<<endl;

    return 0;
}
