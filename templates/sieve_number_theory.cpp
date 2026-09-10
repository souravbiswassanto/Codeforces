// Sieve of Eratosthenes + Binary Exponentiation + Prime Factorization
// Source: CF 1228C, 1062B, 920F

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MAX 500006
#define MAX1 10000008
#define pb push_back
#define mod 1000000007

// ---------- Basic Sieve ----------
bool mark[MAX];
vector<ll> prime;

void sieve(ll n) {
    ll limit = sqrt(n * 1.0) + 2;
    mark[1] = 1;
    for (int i = 4; i <= n; i += 2) mark[i] = 1;
    prime.push_back(2);
    for (int i = 3; i <= n; i += 2) {
        if (!mark[i]) {
            prime.push_back(i);
            if (i <= limit) {
                for (int j = i * i; j <= n; j += i * 2)
                    mark[j] = 1;
            }
        }
    }
}

// ---------- Bitwise Sieve (space efficient) ----------
int STAT[(MAX1 >> 5) + 2];

bool check(int N, int pos) {
    return (bool)(N & (1 << pos));
}

int Set(int N, int pos) {
    return N = (N | (1 << pos));
}

vector<ll> Primes;

void bitSieve() {
    ll sqrtN = ll(sqrt(MAX1)) + 1;
    Primes.pb(2);
    for (ll i = 3; i <= MAX1; i += 2) {
        if (check(STAT[i >> 5], i & 31) == 0) {
            Primes.pb(i);
            if (i <= sqrtN)
                for (ll j = i * i; j <= MAX1; j += (i << 1)) {
                    STAT[j >> 5] = Set(STAT[j >> 5], j & 31);
                }
        }
    }
}

// ---------- Binary Exponentiation (Modular) ----------
ll bin_pow(ll base, ll exp, ll M = mod) {
    if (exp == 0) return 1;
    if (exp == 1) return base % M;
    ll R = bin_pow(base, exp / 2, M);
    R = (R * R) % M;
    if (exp % 2 == 1)
        R = (R * base) % M;
    return R;
}

// ---------- Prime Factorization ----------
vector<pair<ll, ll>> primeFactorize(ll n) {
    vector<pair<ll, ll>> factors;
    for (int i = 0; i < (int)prime.size() && prime[i] * prime[i] <= n; i++) {
        if (n % prime[i] != 0) continue;
        ll cnt = 0;
        while (n % prime[i] == 0) {
            n /= prime[i];
            cnt++;
        }
        factors.pb({prime[i], cnt});
    }
    if (n != 1) factors.pb({n, 1});
    return factors;
}

// ---------- Number of Divisors ----------
ll divisorCount(ll n) {
    ll ans = 1;
    for (int i = 0; i < (int)prime.size() && prime[i] * prime[i] * prime[i] <= n; i++) {
        ll cnt = 1;
        while (n % prime[i] == 0) {
            n /= prime[i];
            cnt++;
        }
        ans *= cnt;
    }
    if (mark[n] == 0) ans *= 2;
    else if (mark[(int)sqrt(n)] == 0) ans *= 3;
    else if (n != 1) ans *= 4;
    return ans;
}

// ---------- Legendre's Formula: exponent of prime p in n! ----------
ll legendre(ll n, ll p) {
    ll cnt = 0;
    while (n) {
        cnt += n / p;
        n /= p;
    }
    return cnt;
}

/*
Usage:
    sieve(1000001);
    auto factors = primeFactorize(n);   // returns {{prime, exponent}, ...}
    ll ans = bin_pow(base, exp, mod);
    ll d = divisorCount(n);
*/
