#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back

#define INF 999999999999999999
#define pb push_back
#define mp make_pair
#define MOD 1000000007
#define PI 2*acos(0.0)
ll mod(ll B,ll M){ll X=B%M; if(X>=0) return X; else return M+X;}
///cin.ignore();
ll max(ll a,ll b) {if(a>b) return a; else return b;} ll min(ll a,ll b) {if(a<b) return a; else return b;}
ll fx4[]={1,-1,0,0}; ll fy4[]={0,0,1,-1};

int main()
{

    ll t,n,m,x,y,w,k,q,r,p,cs;

    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        if(n==1)
        {
            cout<<1<<endl;
            continue;
        }
        else if(n==2)
        {
            if(s[0]==s[1] || s[0]<s[1])cout<<1<<1<<endl;
            else cout<<21<<endl;
            continue;
        }
        set<char> ss;
        for(int i=0; i<n; i++)ss.insert(s[i]);
        vector<char> V1;
        for(auto it:ss)
        {
            V1.pb(it);
        }
        reverse(V1.begin(),V1.end());
        int idx=n-1;
        int id=n;
        ll res[n+5]= {0};
        for(char it:V1)
        {
            bool check=false;
            bool c1=false;
            for(int i=n-1; i>=0; i--)
            {
                if(s[i]==it)
                {
                    idx=i;
                    check=true;
                    if(idx>id)
                    {
                        c1=true;
                    }
                    if(idx<id)res[i]=2;
                }

            }
            id=idx;
            if(check==false)
                break;
            if(c1==true)
                break;
        }
        reverse(V1.begin(),V1.end());
        vector<char> v1;
        for(int i=0; i<n; i++)
        {
            if(res[i]!=2)
            {
                v1.pb(s[i]);
            }
        }
        bool check=true;
        for(int i=1; i<v1.size(); i++)
        {
            if(v1[i]<v1[i-1])
            {
                check=false;
                break;
            }
        }
        if(!check)
        {
            cout<<"-"<<endl;
            continue;
        }
        for(int i=0; i<n; i++)
        {
            if(res[i]==2)
                cout<<2;
            else
                cout<<1;
        }
        cout<<endl;
    }

    return 0;
}
