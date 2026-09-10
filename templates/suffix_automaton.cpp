// Suffix Automaton
// Source: CF 432D (Prefixes and Suffixes)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

struct SuffixAutomaton {
    struct state {
        ll len, link, pre;
        map<char, ll> transitions;
        state() { pre = -1; }
    };

    ll n, last, sz;
    string s;
    vector<state> states;
    vector<bool> terminal;
    vector<ll> prefix;
    vector<ll> dp_so;

    SuffixAutomaton(ll _n, string _s) {
        n = _n, sz = 1, last = 0;
        states.resize(2 * n);
        states[0].len = 0, states[0].link = -1;
        terminal.resize(2 * n);
        prefix.resize(n + 2, 0);
        s = _s;
    }

    void extend(char c, ll i) {
        ll cur = sz++;
        prefix[i] = cur;
        states[cur].pre = i;
        states[cur].len = states[last].len + 1;
        ll p;
        for (p = last; p != -1 && !states[p].transitions.count(c); p = states[p].link) {
            states[p].transitions[c] = cur;
        }
        if (p == -1) {
            states[cur].link = 0;
        } else {
            ll q = states[p].transitions[c];
            if (states[p].len + 1 == states[q].len) {
                states[cur].link = q;
            } else {
                ll clone = sz++;
                states[clone].len = states[p].len + 1;
                states[clone].transitions = states[q].transitions;
                states[clone].link = states[q].link;
                for (; p != -1 && states[p].transitions[c] == q; p = states[p].link) {
                    states[p].transitions[c] = clone;
                }
                states[q].link = states[cur].link = clone;
            }
        }
        last = cur;
    }

    void markTerminals() {
        ll p = last;
        while (p) {
            terminal[p] = true;
            p = states[p].link;
        }
    }

    ll dfs_so(ll u) {
        ll &ret = dp_so[u];
        if (ret != -1) return ret;
        ret = terminal[u];
        for (auto p : states[u].transitions)
            ret += dfs_so(p.second);
        return ret;
    }

    void solve() {
        markTerminals();
        dp_so.assign(2 * n, -1);
        dfs_so(0);
    }
};

/*
Usage:
    SuffixAutomaton sa(s.size(), s);
    for (ll i = 0; i < (ll)s.size(); i++)
        sa.extend(s[i], i + 1);
    sa.solve();
    // sa.dp_so[sa.prefix[i]] gives number of occurrences of prefix ending at i
*/
