// Competitive Programming Template - Version 2 (Newer style with pb_ds)
// Source: Used in CF 1300-1600 range problems

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#pragma GCC diagnostic ignored "-Wformat"
#pragma GCC diagnostic ignored "-Wsign-compare"
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define Pi 2 * acos(0.0)
#define ll long long
#define pb push_back
#define mp make_pair
#define MAX 500006
#define MAX1 10000008
#define mem(a, v) memset(a, v, sizeof(a))
#define lcm(a, b) ((a) * ((b) / __gcd(a, b)))
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}

template <class T>
using oset = tree<T, null_type, less_equal<T>, rb_tree_tag,
                   tree_order_statistics_node_update>;
// order_of_key: 0-based position of a value
// find_by_order: pointer to k-th element (0-indexed)

ll A[MAX], B[MAX], C[MAX];

// ---------- Z-Function ----------
vector<ll> z_function(string s) {
    int n = (int)s.length();
    vector<ll> Z(n);
    Z[0] = 0;
    for (ll i = 1, L = 0, R = 0; i < n; ++i) {
        if (i <= R) Z[i] = min(R - i + 1, Z[i - L]);
        else Z[i] = 0;
        while (i + Z[i] < n && s[Z[i]] == s[i + Z[i]]) ++Z[i];
        if (i + Z[i] - 1 > R) L = i, R = i + Z[i] - 1;
    }
    return Z;
}

// ---------- Binary Exponentiation ----------
/*
ll bin_pow(ll o, ll s) {
    if (s == 0) return 1;
    if (s == 1) return o % mod;
    ll d = bin_pow(o, s / 2);
    d = (d * 1ll * d) % mod;
    if (s % 2 == 1) d = (d * 1ll * o) % mod;
    return d;
}
*/

// ---------- Sieve ----------
/*
void seive() {
    int limit = sqrt(N * 1.0) + 2;
    mark[1] = 1;
    for (int i = 4; i <= N; i += 2) mark[i] = 1;
    prime.push_back(2);
    for (int i = 3; i <= N; i += 2) {
        if (!mark[i]) {
            prime.push_back(i);
            if (i <= limit) {
                for (int j = i * i; j <= N; j += i * 2) mark[j] = 1;
            }
        }
    }
}
*/

int main() {
    fastIO();
    // Your solution here
    return 0;
}
