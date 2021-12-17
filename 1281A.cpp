    #include <bits/stdc++.h>
    using namespace std ;

    #define  ll   long long
    #define  pb  push_back
    #define  mp  make_pair
    #define  MAX  500006
    #define  MAX1  10000008
    #define  mem(a,v)   memset(a,v,sizeof(a))

    template <typename T>
    T mymax (T a,T b){return (a>b)?a:b;}
    template <typename T>
    T mymin (T a,T b){return (a<b)?a:b;}
    template <typename T>
    T myabs (T a){return (a<0)?(-1*a):a;}
    template <typename T>
    T mysqrt (T x){if (x == 0 | x == 1)return x;int start = 1, End = x, ans;while (start <= End){int mid = (start + End) / 2;if (mid*mid == x)return mid;if (mid*mid < x){start = mid + 1;ans = mid;}else End = mid-1;}return ans;}

    void fastIO (){ios_base::sync_with_stdio(false);cin.tie(0); cout.precision(20);}

    ll A[MAX];
    ll B[MAX];
    ll C[MAX];
    vector< ll >V;
    vector< ll >Ans;
    vector< pair<ll,ll> >VP;
    map< ll,ll >M;
    vector<ll>prime;
    bool mark[MAX1];
    ll N=1e7;
    void seive (){int limit = sqrt(N*1.0)+2;mark[1]=1;for (int i=4;i<=N;i+=2)mark[i]=1;prime.push_back(2);for (int i=3;i<=N;i+=2){if(!mark[i]){prime.push_back(i);if(i<=limit){for (int j=i*i;j<=N;j+=i*2)mark[j]=1;}}}}

    int main ()
    {
        fastIO();
        ll a,b,c,n,m,k,p,q,r;
        ll cnt=0,cntr=0,sum=0,ans=1,check=0;
        float x,y,z;
        ll Max= 0,Max1=-1e18+1;
        ll Min = 1e18;
        string s,s1,s3,s4;

        cin>>q;

        while(q--){
            cin>>s>>s1;
            n=s.size();
            m=s1.size();
            ll pos=min(m,n);
            if(s==s1){cout<<"---"<<endl;continue;}
            bool check2= lexicographical_compare(s.begin(),s.end(),s1.begin(),s1.end());
            if(check2){cout<<s<<endl;continue;}
            check=0;
            for(int i=0;i<min(m,n);i++){
                if(s[i]!=s1[i]){
                    pos=i;check=1;break;
                }
            }
            if(pos==n&&check==0){
                cout<<s<<endl;continue;
            }
            if(pos==m&&check==0){
                cout<<"---"<<endl;continue;
            }
            if(pos==n&&check==1){
                if(s[pos]<s1[pos])
                cout<<s<<endl;
                else cout<<"---"<<endl;
                continue;
            }
            ll posn=pos;
            char ch=s[pos];
            for(int i=pos;i<n;i++){
                if(s[i]<ch){
                    ch=s[i];
                    posn=i;
                }
            }
            s2=s;
            s3=s1;
            for(int i=pos+1;i<n;i++){
                swap(s3[pos],s3[i]);
                bool ck= lexicographical_compare(s.begin()+i,s.end(),s1.begin(),s1.end());
                swap(s3[pos],s3[i]);
            }

            for(int i=posn;i<n;i++){
                if(s[i]==ch)posn=i;
            }
            swap(s[pos],s[posn]);
            if(s==s1){
                cout<<"---"<<endl;continue;
            }
            bool check1= lexicographical_compare(s.begin(),s.end(),s1.begin(),s1.end());
            if(check1){
                cout<<s<<endl;
            }
            else cout<<"---"<<endl;
        }

        return 0;
    }
