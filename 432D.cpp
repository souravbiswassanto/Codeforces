#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

struct KMP{
    
    string text, pattern;
    vector<ll> lps;
    KMP(string _text, string _pattern){
        text = _text;
        pattern = _pattern;
        lps.resize((ll)pattern.size() + 3, 0);
    }
    vector <ll> createlps(string pattern){
        ll index = 0;
        for(ll i = 1; i <  pattern.length(); ){
            if(pattern[i] == pattern[index]){
                lps[i] = index + 1;
                i++;
                index++;
            }
            else {
                if(index != 0){
                    index = lps[index - 1];
                }
                else lps[i] = 0, i++;
            }
        }
        return lps;
    }
};


struct SuffixAutomaton {
	struct state {
		ll len, link, pre;
		state(){
		    pre = -1;
		}
		map <char, ll> transitions;
	};
	ll n, last, sz; 
	string s;
	vector <state> states; 
	vector <bool> terminal;
	vector <bool> isprefix;
	vector <ll> prefix;
	SuffixAutomaton(ll _n, string _s) {
		n = _n, sz = 1, last = 0;
		states.resize(2 * n); 
		states[0].len = 0, states[0].link = -1;
		terminal.resize(2 * n); isprefix.resize(2 * n + 2, false);
		prefix.resize( n + 2, 0);
		s = _s;
	}
	
	void extend(char c, ll i) {
		ll cur = sz++;
		prefix[i] = cur;
		isprefix[cur] =  true;
		states[cur].pre = i;
		states[cur].len = states[last].len + 1;
		ll p;
		for (p = last; p != -1 && !states[p].transitions.count(c); p = states[p].link){
			states[p].transitions[c] = cur;
		}
		if (p == -1){
		   states[cur].link = 0; 
		} 
		else {
			ll q = states[p].transitions[c];
			if (states[p].len + 1 == states[q].len){
			    states[cur].link = q;
			}
			else {
				ll clone = sz ++;
				if(isprefix[q]){
				    //prefix[states[q].pre] = cur;
				}
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
	
	vector <ll> dp_so, dp_ds, lps;
	void markTerminals() {
		ll p = last;
		while(p) {
			terminal[p] = true;
			p = states[p].link;
		}
 	}
 	// dfs for state occurence
 	ll dfs_so(ll u) {
 		ll &ret = dp_so[u];
 		if(ret != -1) return ret;
 		ret = terminal[u];
 		for(auto p : states[u].transitions) ret += dfs_so(p.second);
 		return ret;
 	}

 	
	void solve() {
		markTerminals();
		dp_so.assign(2 * n, -1);
		ll a = dfs_so(0);
		KMP mp(s, s);
		vector<ll> lps = mp.createlps(s);
		ll p = lps[n - 1];
		vector<pair<ll, ll>> VP;
		while(p){
		    VP.pb({p, dp_so[prefix[p]]});
		    //cout << p <<" ";
		    //cout << p <<" "<<prefix[p] << endl;
		    p = lps[p-1];
		    //cout << p << endl;
		}
		VP.pb({n,1});
		sort(VP.begin(), VP.end());
		cout << VP.size() << endl;
		for (auto it: VP)cout << it.first << " " << it.second << endl;
	}
};

int main (){
    string s;
    cin >> s;
    
    SuffixAutomaton sa(s.size(), s);
    for (ll i = 0; i < s.size(); i++){
        sa.extend(s[i], i + 1);
    }
    sa.solve();
}