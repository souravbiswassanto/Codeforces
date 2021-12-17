
// Problem: B. Hills And Valleys
// Contest: Codeforces - Codeforces Round #695 (Div. 2)
// URL: https://codeforces.com/contest/1467/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)


#include <bits/stdc++.h>
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 

using namespace std;
using Lint = long long;
using Frac = double;
const int MAX_N = 500006;

#define   pb          push_back
#define   mp          make_pair
#define   mem(a, v)   memset(a, v, sizeof(a))

vector <Lint> prime;
bool mark[10000008];

void seive (){ Lint N = 1e7; int limit = sqrt(N*1.0)+2;mark[1] = 1;for(int i = 4;i <= N; i += 2)mark[i] = 1; prime.push_back(2); for(int i = 3; i <= N; i += 2){if(!mark[i]){prime.push_back(i); if(i <= limit){for(int j = i * i; j <= N; j += i * 2)mark[j] = 1;}}}}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int testCase;
    cin >> testCase;
    Lint a, b, c, d, k, l, m, n, p, q, r, x, y;
    Frac X, Y, P, Q, R, Pi, G,theta,  val, avg;
    
    while (testCase--){
        cin >> n;
        
        Lint sum = 0, ans = 0, cntr = 0, cnt = 0;
        string input, Answer = "", s[n + 4], Res;
        Lint A[n + 6], B[n + 6] = {0}, occ[n + 6] = {0};
        vector<Lint> vec, V, Ans;
        map<Lint, Lint> M;
        for (int i = 1; i <= n; i++)cin >> A[i];
        if(n <= 2){
            cout << 0 << endl;continue;
        }
        bool check = false;
        cntr = 0;
        for(int i = 2; i < n; i++){
            if((A[i] > A[i - 1]  and A[i] > A[i+ 1]) or (A[i] < A[i - 1]  and A[i] < A[i+ 1])){
                B[i] = 1; cntr++;
            }  
        }
        Lint Min = 0;
        for(int i = 2; i < n; i++){
            if( B[i] ){
                cnt = 0;
                c = A[i];
                for(int j = max(2, i - 10); j < min((int)n, i + 10); j++){
                    if(B[j])cnt++;
                }
                //cout << cnt <<" c "<< endl;
                A[i] = A[i - 1];
                l = 0; r = 0;
                for(int j = max(2, i - 10); j < min((int)n, i + 10); j++){
                    if((A[j] > A[j - 1]  and A[j] > A[j+ 1]) or (A[j] < A[j - 1]  and A[j] < A[j + 1])){
                        l++;
                        //cout << A[j - 1] <<" "<<A[j] <<" "<<A[j + 1]<< endl;
                    }
                }
                //cout << l <<" l "<< endl;
                A[i] = A[i + 1];
                for(int j = max(2, i - 10); j < min((int)n, i + 10); j++){
                    if((A[j] > A[j - 1]  and A[j] > A[j+ 1]) or (A[j] < A[j - 1]  and A[j] < A[j + 1])){
                        r++;
                        //cout << A[j - 1] <<" r "<<A[j] <<" "<<A[j + 1]<< endl;
                    }
                }
                A[i] = c;
                //cout << r <<" r "<< endl;
                
                a = min(l,r);
                Min = max(Min, (cnt - a));
            }
        }
        cout << max(cntr - Min,0LL) <<endl;
    }

    return 0;
}
