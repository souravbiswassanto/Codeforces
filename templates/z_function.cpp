// Z-Function (String Matching)
// Source: CF 126B (Password)

#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<ll> z_function(string s) {
    int n = (int)s.length();
    vector<ll> Z(n);
    Z[0] = 0;
    for (ll i = 1, L = 0, R = 0; i < n; ++i) {
        if (i <= R)
            Z[i] = min(R - i + 1, Z[i - L]);
        else
            Z[i] = 0;
        while (i + Z[i] < n && s[Z[i]] == s[i + Z[i]])
            ++Z[i];
        if (i + Z[i] - 1 > R)
            L = i, R = i + Z[i] - 1;
    }
    return Z;
    // Note: Z[0] = n is sometimes desired depending on the problem
}

/*
Usage:
    vector<ll> Z = z_function(s);
    // Z[i] = length of longest substring starting at i that matches prefix
    // Use Z[i] == pattern.length() to find pattern occurrences
*/
