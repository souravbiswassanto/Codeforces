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
    int tc;
    scanf("%d", &tc);
    while(tc--){
        int n;
        scanf("%d", &n);
        
        int A[n + 4]; for(int i = 1; i <= n; i++)A[i] = 0;
        for(int i = 1; i <= n - 1; i+= 2){
            //printf("%d\n", i);
            printf("? 1 %d %d %d\n", i, i + 1, n - 1);
            fflush(stdout);
            scanf("%d", &A[i + 1]);
        }
        if(n % 2){
            printf("? 1 %d %d %d\n", n - 1, n, n - 1);
            fflush(stdout);
            scanf("%d", &A[n]);
        }
        int pos; vector<int> V;
        for(int i = 1; i <= n; i++){
            if(n - A[i] <= 1){
                //cout << i <<" "<< i - 1<< endl;
                V.pb(i);
                V.pb(i - 1);
            }
        }
        sort(V.begin(), V.end());
        for(int i = 0; i < V.size(); i++){
            if(V[i] == 1){
                printf("? 1 2 1 %d\n", n - 1);
            }
            else{
                printf("? 1 1 %d %d\n", V[i], n - 1);
            }
            fflush(stdout);
            int a;
            scanf("%d", &a); A[V[i]] = a;
        }
        for(int i = 1; i <= n; i++){
            if(A[i] == n)pos = i;
            //cout <<A[i]<<" ";
        }
        /// << endl;
        int B[n + 3]; 
        
        B[pos] = n;
        for(int i = 1; i <= n; i++){
            if(i == pos)continue;
            printf("? 2 %d %d %d\n", i, pos, 1);
            fflush(stdout);
            int a;
            scanf("%d", &a);
            B[i] = a;
        }
        printf("! ");
        for(int i = 1; i <= n; i++){
            printf("%d ", B[i]);
        }
        printf("\n");
        fflush(stdout);
    }

    return 0;
}
