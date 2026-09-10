// Manacher's Algorithm - Longest Palindromic Substring
// Source: CF 1326D2 (Prefix-Suffix Palindrome)

#include <bits/stdc++.h>
using namespace std;

struct Manacher {
    int n;
    vector<int> P;

    Manacher(int _n) {
        n = _n;
        P.resize(2 * n + 10, 0);
    }

    // Convert string to @#a#b#c#$ format
    string convert(string s) {
        string nwS = "@";
        for (int i = 0; i < (int)s.size(); i++) {
            nwS += "#" + s.substr(i, 1);
        }
        nwS += "#$";
        return nwS;
    }

    // Build palindrome radii
    void build(string s) {
        int _n = s.size();
        int l = 0, r = -1;
        for (int i = 1; i < (int)s.size() - 1; i++) {
            int k;
            if (i > r) {
                k = 0;
            } else {
                int j = r - i + l;
                k = min(P[j], r - i);
            }
            while (i + k < _n && i - k >= 0 && s[i + k] == s[i - k]) k++;
            if (s[i - k] != s[i + k]) k--;
            P[i] = k;
            if (i + k > r) {
                r = i + k;
                l = i - k;
            }
        }
    }

    // Get longest palindrome centered at position i (in transformed string)
    int getLongest() {
        int maxLen = 0;
        for (int i = 1; i < (int)P.size(); i++) {
            maxLen = max(maxLen, P[i]);
        }
        return maxLen;
    }

    // Get all palindrome radii
    vector<int> getAll() {
        return P;
    }
};

/*
Usage:
    Manacher mc(s.size());
    string transformed = mc.convert(s);
    mc.build(transformed);
    int longest = mc.getLongest();  // length of longest palindrome
*/
