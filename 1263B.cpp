#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  500006
#define  MAX1  10000008
#define  mem(a,v)   memset(a,v,sizeof(a))
void fastIO ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}


int main ()
{
    fastIO();
    ll a,b,c,n,m,r;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    string S[19];
    int q;
    cin>>q;

    while(q--)
    {
        cin>>n;
        ans=0;
        for(int i=0; i<n; i++)
        {
            cin>>S[i];
        }
        set<ll>Set;
        ll A[1006];
        ll B[1006];
        for(int i=0; i<n; i++)
            A[i]=0;


        for(int i=0; i<10; i++)
            B[i]=0;
        for(int i=0; i<n; i++)
        {
            a=S[i][0]-'0';
            B[a]=1;
        }
        for(int i=0; i<10; i++)
        {
            if(B[i]==0)Set.insert(i);
        }
        for(int i=0; i<n; i++)
        {
            if(A[i]==0)
            {
                for(int j=i+1; j<n; j++)
                {
                    if(S[i]==S[j])
                    {
                        A[j]=i+1;
                    }
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            if(A[i]!=0)
            {
                auto it=Set.begin();
                a=*it;
                Set.erase(a);
                S[i][0]='0'+a;
                ans++;
            }
        }
        cout<<ans<<endl;
        for(int i=0; i<n; i++)
            cout<<S[i]<<endl;
        ans=0;
        Set.clear();
    }

    return 0;
}
