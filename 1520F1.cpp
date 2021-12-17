
// Problem: F1. Guess the K-th Zero (Easy version)
// Contest: Codeforces - Codeforces Round #719 (Div. 3)
// URL: https://codeforces.com/contest/1520/problem/F1
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 

using namespace std;
using ll = long long;
using Frac = double;
const int MAX_N = 500006;

#define   pb          push_back
#define   mp          make_pair
#define   mem(a, v)   memset(a, v, sizeof(a))

vector <ll> prime;
bool mark[10000008];
ll a, b, c, d, k, l, m, n, p, q, r, x, y;

void seive (){ ll N = 1e7; int limit = sqrt(N*1.0)+2;mark[1] = 1;for(int i = 4;i <= N; i += 2)mark[i] = 1; prime.push_back(2); for(int i = 3; i <= N; i += 2){if(!mark[i]){prime.push_back(i); if(i <= limit){for(int j = i * i; j <= N; j += i * 2)mark[j] = 1;}}}}

int main ()
{
    int t, n, k;
    scanf("%d %d %d", &n, &t, &k);
    while(t--){
        int l = 1; int r = n; int ans = 0;
        map<int, int>M; queue<int> q;
        while(l <= r){
            int mid = (l + r) / 2;
            int a;
            if(M[mid])a = M[mid];
            else{
                printf("? %d %d\n", 1, mid);
                fflush(stdout);
                scanf("%d", &a);
            }
            int zero = mid - a;
            M[mid] = a;
            q.push(mid);
            if(zero >= k){
                ans = mid;
                r =  mid - 1;
            }
            else{
                l = mid + 1;
            }
            
        }
        printf("! %d\n", l);
        fflush(stdout);
        while(!q.empty()){
            int a = q.front(); q.pop();
            if(a <= l)M[a]++;
        }
    }

    return 0;
}
