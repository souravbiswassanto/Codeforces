// KMP Pattern Matching (Integer Sequence Version)
// Source: CF 471D (MUH and Cube Walls)

#include <bits/stdc++.h>
using namespace std;

struct KMP {
    vector<int> text, pattern;
    vector<int> lps;

    KMP(vector<int> v, vector<int> k) {
        text = v;
        pattern = k;
        lps.resize((int)pattern.size(), 0);
    }

    vector<int> createlps() {
        int index = 0;
        for (int i = 1; i < (int)pattern.size(); ) {
            if (pattern[i] == pattern[index]) {
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

    // Returns count of pattern occurrences in text (integer sequences)
    int kmp() {
        int i = 0, j = 0, gap = pattern[0] - text[0], res = 0;
        vector<int> lpsArr = createlps();
        while (i < (int)text.size()) {
            if (pattern[j] == text[i]) {
                i++; j++;
            } else {
                if (j != 0) {
                    j = lpsArr[j - 1];
                    gap = pattern[0] - text[i - j];
                } else {
                    i++;
                    gap = pattern[0] - text[i - j];
                }
            }
            if (j == (int)pattern.size()) {
                res++;
                j = lpsArr[j - 1];
                gap = pattern[0] - text[i - j];
            }
        }
        return res;
    }
};

/*
Usage:
    // For integer sequences (e.g., difference arrays for shifted matching)
    vector<int> text = {...}, pattern = {...};
    KMP matcher(text, pattern);
    int count = matcher.kmp();
*/
