#include<bits/stdc++.h>
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
using namespace std;
#define ll long long
#define pb push_back

struct KMP{
    
    vector<int> text, pattern;
    vector<int> lps;
    KMP(vector<int> v, vector<int>k){
        text = v;
        pattern = k;
        lps.resize((int)pattern.size(), 0);
    }
    vector <int> createlps(){
        int index = 0;
        for(int i = 1; i <  pattern.size(); ){
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
        //for(auto l: lps)cout << l << " ";cout << endl;
        return lps;
    }
    void kmp(){
        int i = 0, j = 0, gap = pattern[0] - text[0], res = 0;
        vector<int> lps = createlps();
        while(i < text.size()){
            //cout << i <<" "<< j <<" "<<pattern[j] <<" "<<text[i] + gap <<" "<<gap<< endl;
            if(pattern[j] == text[i] ){
                i++; j++;
            }
            else{
                if(j != 0){
                    j = lps[j - 1];
                    gap = pattern[0] - text[i - j];
                }
                else {
                     i++;
                    gap = pattern[0] - text[i - j]; 
                }
            }
            if(j == pattern.size()){
                res++;
                j = lps[j - 1];
                gap = pattern[0] - text[i - j];
                //cout << i <<" iii" << endl;
            }
        }
        cout << res << endl;
    }
};

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> s,s1;
    int b;
    cin >> b;
    for (int i = 1; i < n; i ++){
        int a;
        cin >> a;
        s.pb(b - a);
        b = a;
    }
    cin >> b;
    for (int j = 1; j < m; j ++){
        int a;
        cin >> a;
        s1.pb(b - a);
        b = a;
    }
    if(m == 1){
        cout << n << endl; return 0;
    }
    if(n < m){
        cout <<"0" << endl;return 0;
    }
    KMP matcher(s, s1);
    matcher.kmp();
}