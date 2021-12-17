    #include <bits/stdc++.h>
    using namespace std ;

    #define  ll   long long
    #define  pb  push_back
    #define  mp  make_pair
    #define  MAX  1000006

    void fastIO (){

        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.precision(20);
    }

    int a[MAX];
    int b[MAX];
    int c[MAX];

    int main ()
    {

        ///freopen("output.txt","w",stdout);

        fastIO();
        int n;
        int m;
        int cnt=0;
        int p,q,r;
        int cntr=0;
        int v=0;
        int check=0;
        int x,y,z;
        string s[5000],s1[5000],s2[5000];

        cin>>n>>m;

        for (int i=0;i<m;i++){
            cin>>s[i]>>s1[i];
        }
        for (int i=0;i<n;i++){
            cin>>s2[i];
        }

        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                if ((s2[i]==s[j]||s2[i]==s1[j])&&i==n-1){
                    if (s[j].length()<s1[j].length())cout<<s[j];
                    else if (s[j].length()>s1[j].length())cout<<s1[j];
                    else
                        cout<<s[j];
                    break;
                }

                if (s2[i]==s[j]||s2[i]==s1[j]){
                    if (s[j].length()<s1[j].length())cout<<s[j]<<" ";
                    else if (s[j].length()>s1[j].length())cout<<s1[j]<<" ";
                    else
                        cout<<s[j]<<" ";
                }
            }
        }
        cout<<endl;

        return 0;
    }



