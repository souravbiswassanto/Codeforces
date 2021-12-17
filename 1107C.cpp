#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back

ll A[300006];

struct sourav{
    char C;ll X;

    sourav(char a,ll b)
    {
        C=a; X=b;
    }
};

bool santo(sourav a, sourav b)
{
    return a.X>b.X;
}


int main()
{


    ll N,M,X,Y,W,Count=0,ans=0;
     string S;

    cin>>N>>M;

    for(int i=1;i<=N;i++) cin>>A[i];


    cin>>S;

    S+='2';

    vector < sourav > V;

    for(ll i=0;i<N;i++)
    {
        V.pb(sourav(S[i],A[i+1]));
    }

    V.pb(sourav('2',-1));

    int Start=0,End=0; char last=S[0];

    for(int i=1;i<=N;i++)
    {
        if(S[i]!=last)
        {
            End=i-1;
            sort(V.begin()+Start,V.begin()+End+1,santo);
            Start=i;
            last=S[i];
        }
    }

    for(int i=0;i<N;i++)
    {


        Count++;

        if(Count<=M) ans+=V[i].X;

        if(V[i].C !=V[i+1].C) Count=0;
    }

    cout<<ans<<endl;

    return 0;
}
