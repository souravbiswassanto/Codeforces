#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 999999999999999999
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 999999999999999999
#define pb push_back
#define Max 300006
#define mp make_pair

ll A[Max];
ll sum[3000];
ll C[Max];

int main()
{
    ll n;
    ll k;
    ll a,b;
    ll cntr = 0,ans=0;

    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }
    sort(A,A+n);

    for(int i=0; i<n; i++)
    {
        a=A[i]+5;
        b=upper_bound(A+i+1,A+n,a)-A;
        ans=max(ans,b-i);
    }

    cout<<ans<<endl;

    return 0;
}
