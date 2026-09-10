// Competitive Programming Template - Version 1 (Older style)
// Source: Used in CF 500-1100 range problems

#include <bits/stdc++.h>
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
using namespace std;

#define INF 9223372036854775806
#define pb push_back
#define mp make_pair
#define MAX 500006
#define MAX1 10000008
#define mem(a, v) memset(a, v, sizeof(a))
#define mod 1000000007

template <typename T>
T mymax(T a, T b) { return (a > b) ? a : b; }

template <typename T>
T mymin(T a, T b) { return (a < b) ? a : b; }

template <typename T>
T myabs(T a) { return (a < 0) ? (-1 * a) : a; }

template <typename T>
T mysqrt(T x) {
    if (x == 0 || x == 1) return x;
    int start = 1, End = x, ans;
    while (start <= End) {
        int mid = (start + End) / 2;
        if (mid * mid == x) return mid;
        if (mid * mid < x) { start = mid + 1; ans = mid; }
        else End = mid - 1;
    }
    return ans;
}

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}

ll A[MAX], B[MAX], C[MAX];
vector<ll> V, Ans;
vector<pair<ll, ll>> VP;
map<ll, ll> M;
vector<ll> prime;
bool mark[MAX1];

void sieve() {
    int limit = sqrt(MAX1 * 1.0) + 2;
    mark[1] = 1;
    for (int i = 4; i <= MAX1; i += 2) mark[i] = 1;
    prime.push_back(2);
    for (int i = 3; i <= MAX1; i += 2) {
        if (!mark[i]) {
            prime.push_back(i);
            if (i <= limit) {
                for (int j = i * i; j <= MAX1; j += i * 2) mark[j] = 1;
            }
        }
    }
}

int main() {
    fastIO();
    // Your solution here
    return 0;
}
