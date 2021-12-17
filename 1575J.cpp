
// Problem: J. Jeopardy of Dropped Balls
// Contest: Codeforces - COMPFEST 13 - Finals Online Mirror (Unrated, ICPC Rules, Teams Preferred)
// URL: https://codeforces.com/contest/1575/problem/J
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
#pragma GCC diagnostic ignored "-Wsign-compare"
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std ;

#define   Pi     2*acos(0.0)
#define   ll     int
#define   pb     push_back
#define   mp     make_pair
#define   MAX    500006
#define   MAX1   10000008
#define   mem(a,v)   memset(a,v,sizeof(a))
#define   lcm(a, b)        ((a)*((b)/__gcd(a,b)))
#define yes   cout<<"YES"<<endl
#define no   cout<<"NO"<<endl

template<class T> using oset=tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
// order_of_key returns the 0 based position of a value
// find_by_order returns a pointer pointing at the kth element 
// also 0 indexed
ll A[MAX], B[MAX], C[MAX];
int mat[2000][2000];

int main ()
{
    
    ll a, b, c, d, n, m, k, l, p, q, r, t, x, y;
    ll cnt = 0, cntr = 0, sum = 0,ans = 1, check = 0;
    ll Max = 0, Min = 0;
    string s, s1, s2;

    scanf("%d %d %d", &n, &m, &k);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            scanf("%d", &mat[i][j]);
            if(mat[i][j] == 2){
                B[j]++;
            }
        }
    }
    for(int i = 1; i <= k; i++){
        scanf("%d", &A[i]);
    }
    for(int i = 1; i <= k; i++){
        if(B[A[i]] == n){
            printf("%d ", A[i]);
        }
        else{
             a = 1; b = A[i];
             while(a <= n){
                 c = a; d = b;
                 if(mat[a][b] == 1){
                     B[b]++;b++;
                 }
                 else if(mat[a][b] == 2){
                     a ++;
                 }
                 else{
                     B[b]++;
                     b--;
                 }
                 
                 mat[c][d] = 2;
             }
             printf("%d ", b);
            
        }
    }
    printf("\n");
    /* 
        precedence : ! * / % + - << >> 
        < > <= >= == != & ^ | && ||
        always check the limit and make sure that is correct.
        lcm of first 40 numbers  can be calculated.
        sqrt of 10^9 is 31622.
        always usee 1LL while doing binary operations.
    */

    return (0 - 0 + 1 -  1 * 1);
}
