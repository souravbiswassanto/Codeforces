#include<bits/stdc++.h>
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
using namespace std;
#define ll long long
#define pb push_back

char ch[1000006];
struct Manachar{
    
    int n;
    vector<int> P, Common,indices;
    Manachar(int _n){
        n = _n;
        P.resize(2 * n + 10, 0);
        Common.resize(2 * n + 4, -1);
    }
    void form_common(string s){
        int _n = s.size();
        for (int i = 0; i < _n / 2; i++){
            //cout << i << endl;
            if(s[i] != s[_n - i - 1])break;
            Common[i] = (i + 1) * 2;
        }
    }
    
    string convert(string s){
    	string nwS = "@";
    	indices.pb(-INT_MAX);
        for (int i = 0; i < (int)s.size(); i++) {
            indices.pb(i - 1);
            indices.pb(i);
            nwS += "#" + s.substr(i, 1);
        }
        indices.pb(-INT_MAX);
        indices.pb(-INT_MAX);
        nwS += "#$";
        return nwS;
    }
    
    void build(string s){
    	int _n = s.size();
    	int l = 0, r = -1;
	    for(int i = 1; i < (int)s.size() - 1; i++){
    		int k;
    		if(i > r){
    			k = 0;
    		}
    		else {
    			int j = r - i + l;
    			k = min (P[j], r - i);
    		}
    		while(i + k < _n and i - k >= 0 and s[i+k] == s[i-k])k++;
    		if(s[i-k] != s[i+k])k--;
    		P[i] = k;
    		if(i + k > r){
    			r = i + k;
    			l = i - k;
    		}
    	}
    }
    string calculate(string s, string original){
        int maxpal = 1, pal;
    	int idx = 0, idxL = 0, idxR;
    	
    	for(int i = 1; i < s.size() - 1; i++){
    	    
    		idxL = indices[i] - (P[i] + 1) / 2;
    		idxR = indices[i] + (P[i] / 2) + 1;
    		idx = min (idxL, n - idxR - 1);
    		if(Common[max(idx,0)] == -1 and idxL != -1 and idxR != n)continue;
    		pal = P[i];
    		if (idx >= 0 and Common[idx] != -1) pal += Common[idx];
    		//cout << i << " " << s[i] << " " <<P[i] << " " << pal << endl;
    		if(pal > maxpal){
    			maxpal = pal;
    			//cout << i << endl;
    		}
    	}
    	//cout << maxpal << endl;
    	int idd;
    	for(int i = 1; i < s.size() - 1; i++){
    		idxL = indices[i] - (P[i] + 1) / 2;
    		idxR = indices[i] + (P[i] / 2) + 1;
    		idx = min (idxL, n - idxR - 1);
    		if(Common[max(idx,0)] == -1 and idxL != -1 and idxR != n)continue;
    		pal = P[i];
    		if (idx >= 0 and Common[idx] != -1) pal += Common[idx];
    		if(pal == maxpal){
    			string res = "";
    			res += original.substr(0,idx + 1);
    			res += original.substr(idxL + 1, P[i]);
    			res += original.substr(n - idx -1, idx + 1); 
    			return res;
    		}
    	}
    	
    }
    
    void solve(string s){
        string original = s;
    	s = convert(s);
    	form_common(original);
        build(s);
        string res = calculate(s, original);
        if (!res.size())cout<<original[0]<< endl;
        else cout << res << endl;
    }
};

int main(){
    
    int testCase;
    scanf("%d", &testCase);
    while (testCase--){
        scanf("%s", ch);
        string s = ch;
        int n = s.size();
        Manachar mc(n);
        mc.solve(s);
    }
}