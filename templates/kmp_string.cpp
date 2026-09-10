// KMP Pattern Matching (String Version)
// Source: CF 432D (Prefixes and Suffixes)

#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct KMP {
    string text, pattern;
    vector<ll> lps;

    KMP(string _text, string _pattern) {
        text = _text;
        pattern = _pattern;
        lps.resize((ll)pattern.size() + 3, 0);
    }

    vector<ll> createlps(string pat) {
        ll index = 0;
        for (ll i = 1; i < (ll)pat.length(); ) {
            if (pat[i] == pat[index]) {
                lps[i] = index + 1;
                i++;
                index++;
            } else {
                if (index != 0) {
                    index = lps[index - 1];
                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
        return lps;
    }

    // Returns all match positions of pattern in text
    vector<int> search() {
        vector<int> matches;
        vector<ll> lpsArr = createlps(pattern);
        int i = 0, j = 0;
        while (i < (int)text.size()) {
            if (pattern[j] == text[i]) {
                i++; j++;
            } else {
                if (j != 0) j = lpsArr[j - 1];
                else i++;
            }
            if (j == (int)pattern.size()) {
                matches.push_back(i - j);
                j = lpsArr[j - 1];
            }
        }
        return matches;
    }
};

/*
Usage:
    KMP kmp(text, pattern);
    vector<int> matches = kmp.search();  // all 0-indexed match positions
*/
