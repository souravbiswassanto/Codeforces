#include <bits/stdc++.h>

using namespace std ;

#define   Pi     2*acos(0.0)
#define   LINF   1LL<<62
#define   ll     long long
#define   ull    unsigned long long
#define   pb     push_back
#define   mp     make_pair
#define   MAX    500006
#define   MAX1   10000008
#define   mem(a,v)   memset(a,v,sizeof(a))
#define   all(x) x.begin(),x.end()
#define   lcm(a, b)        ((a)*((b)/__gcd(a,b)))

void fastIO (){ios_base::sync_with_stdio(false);cin.tie(0); cout.precision(20);}

ll A[MAX];
ll B[MAX];
ll C[MAX];

set<int> G[MAX], S[MAX];

int main ()
{
    fastIO();
    ll a,b,c,d,n,m,k,l,p,q,r,t,x,y;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    ll Max= 0,Max1=-1e18+1,Min=LINF;
    string s,s1,s3,s4;

    //cin>>n;
    cin>>t;

    while(t--){
        cin>>n;
        check =  0;
        for(int i = 1; i <= n; i++){
            cin >> A[i];
            for(int j = 1; j <= A[i]; j++){
                cin >> a;
                G[i].insert(a);
                S[a].insert(i);
            }
        }
        
        priority_queue<int> pq;
        for(int i = 1; i <= n; i++){
            if(G[i].size() == 0){
                pq.push(-i);
            }
        }
        cnt = 0; cntr = 0;
        if(pq.size() == 0)check = 1;
        while(!pq.empty()){
            set<int> vec;
            while(!pq.empty()){
                a = -1 * pq.top(); 
                //cout << a <<" a"<< endl;
                pq.pop();
                for(auto it: S[a]){
                    G[it].erase(a);
                    if(G[it].size() == 0){
                        if(it < a)vec.insert(it);
                        else pq.push(-it);
                    }
                }
                cnt++;
            }
            for(auto it: vec)pq.push(-it);
            cntr++;
        }
        
        if(check or cnt != n){
            cout << -1 << endl;
        }
        else {
            cout << cntr << endl;
        }
        for(int i = 0; i <= n; i++){
            G[i].clear(); S[i].clear();
        }

    }
    /* 
        always check the limit and make sure that is correct.
        lcm of first 40 numbers  can be calculated.
        sqrt of 10^9 is 31622.
        always usee 1LL while doing binary operations.
    */

    return (0 - 0 + 1 -  1 * 1);
}
