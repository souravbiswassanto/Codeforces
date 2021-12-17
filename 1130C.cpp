#include <bits/stdc++.h>
using namespace std ;

#define  ll   long long
#define  pb  push_back
#define  mp  make_pair
#define  MAX  300006
#define  mem(a,v)   memset(a,v,sizeof(a))

void fastIO (){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}

ll A[100][100];
int visited[100][100];
int visited1[100][100];
int d1[]={-1,1,0,0};
int d2[]={0,0,1,-1};
ll B[MAX];
ll C[MAX];
int n;

ll BFS2 (int a,int b,int v1,int v2){

    queue< pair <int,int> > q;
    pair<int,int> pi;

    q.push(mp(a,b));
    mem(visited1,0);
    visited1[a][b]=1;
    ll value=1e18;

    while(!q.empty()){

        pi  = q.front();

        int s1=pi.first;
        int s2=pi.second;
        ll ss= ((v1-s1)*(v1-s1))+((v2-s2)*(v2-s2));
        value =min(value,ss);
        q.pop();

        for (int i=0;i<4;i++){
            int des1=s1+d1[i];
            int des2=s2+d2[i];

            if (des1<=0||des2<=0||des1>n||des2>n)continue;

            if (visited1[des1][des2]==0&&A[des1][des2]==0){
                visited1[des1][des2]=1;
                ll s=((v1-des1)*(v1-des1))+((v2-des2)*(v2-des2));
                value=min(value,s);
                q.push(mp(des1,des2));
            }


        }
    }
    return value;


}

ll BFS (int a,int b,int c, int d){

    queue< pair <int,int> > q;
    pair<int,int> pi;

    q.push(mp(a,b));
    visited[a][b]=1;
    ll value = 1e18;

    while(!q.empty()){

        pi  = q.front();

        int s1=pi.first;
        int s2=pi.second;

        ll ss= BFS2(c,d,a,b);
        value =min(value,ss);
        q.pop();

        for (int i=0;i<4;i++){
            int des1=s1+d1[i];
            int des2=s2+d2[i];

            if (des1<=0||des2<=0||des1>n||des2>n)continue;

            if (visited[des1][des2]==0&&A[des1][des2]==0){
                visited[des1][des2]=1;
                ll s=BFS2(c,d,des1,des2);
                value= min(s,value);
                q.push(mp(des1,des2));

            }


        }
    }
    return value;

}



int main ()
{

    fastIO();

    ll a,b,c,d,m,k,p,q,r;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    float x,y,z;
    ll Max=-1e18;
    unsigned long long Min = 1e20;
    string s,s1,s3,s4;

    cin>>n;
    cin>>a>>b;
    cin>>c>>d;

    for (int i=1;i<=n;i++){
        cin>>s;
        for (int j=1;j<=n;j++){
            A[i][j]=s[j-1]-'0';
        }
    }

    ll Ans = BFS (a,b,c,d);

    cout<<Ans<<endl;

    return 0;
}
