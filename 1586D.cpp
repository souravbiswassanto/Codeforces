
// Problem: D. Omkar and the Meaning of Life
// Contest: Codeforces - Codeforces Round #749 (Div. 1 + Div. 2, based on Technocup 2022 Elimination Round 1)
// URL: https://codeforces.com/contest/1586/problem/D
// Memory Limit: 256 MB
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
#define   ll     long long
#define   pb     push_back
#define   mp     make_pair
#define   MAX    500006
#define   MAX1   10000008
#define   mem(a,v)   memset(a,v,sizeof(a))
#define   lcm(a, b)        ((a)*((b)/__gcd(a,b)))
#define yes   cout<<"YES"<<endl
#define no   cout<<"NO"<<endl
void fastIO (){ios_base::sync_with_stdio(false);cin.tie(0); cout.precision(20);}

template<class T> using oset=tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
// order_of_key returns the 0 based position of a value
// find_by_order returns a pointer pointing at the kth element 
// also 0 indexed
ll A[MAX], B[MAX], C[MAX];
int ans[200];
int main ()
{
    int n;
    scanf("%d", &n); int idx = n;
    for(int i = 1; i < n; i++){
        printf("? ");
        for(int j = 1; j < n; j++){
            printf("%d ", i);
        }
        printf("%d\n", n);
        fflush(stdout);
        int b;
        scanf("%d", &b);
        if(b != 0){
            idx = i;break;
        }
    }
    ans[n] = idx; int cntr = 1; int cnt = n; int c = n - idx + 1;
    bool found[200]; 
    for(int i = 0; i < 110; i++)found[i] = false;
    found[n] = true;
    for(int i = 1; i <= n; i++){
        if((n - i + 1) == c){cnt--; cntr++;continue;}
        printf("? ");
        for(int j = 1; j < n; j++){
            printf("%d ", cnt);
        }
        printf("%d\n", c);
        fflush(stdout);
        cnt--;
        int b; 
        scanf("%d", &b);
        ans[b] = cntr++;
        found[b] = true;
    }
    
    printf("! ");
    for(int i = 1; i <= n; i++){
        printf("%d ", ans[i]);
    }
    printf("\n");
    fflush(stdout);
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
