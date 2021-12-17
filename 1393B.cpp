
// Problem: B. Applejack and Storages
// Contest: Codeforces - Codeforces Round #662 (Div. 2)
// URL: https://codeforces.com/contest/1393/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 

using namespace std ;


#define   ll     long long
#define   pb     push_back
#define   mp     make_pair
#define   mem(a,v)   memset(a,v,sizeof(a))


vector <ll> prime;
bool mark[10000008];

void seive (){ ll N = 1e7; int limit = sqrt(N*1.0)+2;mark[1] = 1;for(int i = 4;i <= N; i += 2)mark[i] = 1; prime.push_back(2); for(int i = 3; i <= N; i += 2){if(!mark[i]){prime.push_back(i); if(i <= limit){for(int j = i * i; j <= N; j += i * 2)mark[j] = 1;}}}}
void fastIO (){ios_base::sync_with_stdio(false); cin.tie(0); cout.precision(20);}
set<int>four, two;
int in[500006], occ[500006];

void printAns(){
    if(four.size() >= 2){
        cout << "YES" << endl; return;
    }
    if(four.size() == 0){
        cout << "NO" << endl; return;
    }
    if(four.size() and two.size() >= 2){
        cout << "YES" << endl; return;
    }
    if(four.size()){
        auto it = four.begin();
        if(occ[*it] >= 8){
            cout << "YES" << endl; return;
        }
        if(two.size() and occ[*it] >= 6){
            cout << "YES" << endl; return ;
        }
    }
    cout << "NO" << endl; return;
}

int main ()
{
    //fastIO();
    int n; string s;
    cin >> n;
    for (int i = 0; i < n ; i++){
        cin >> in[i];
        occ[in[i]]++;
        if(occ[in[i]] == 4){
            two.erase(in[i]);
            four.insert(in[i]);
        }
        else if(occ[in[i]] == 2){
            two.insert(in[i]);
        }
    }
    int q;
    cin >> q;
    int query;
    for (int i = 1; i <= q; i++){
        cin >> s >> query;
        //cout << occ[query] << endl;
        if(s == "+"){
            occ[query]++;
            if(occ[query] == 4){
                two.erase(query);
                four.insert(query);
            }
            else if(occ[query] == 2){
                two.insert(query);
            }
            printAns();
        }else{
            occ[query]--;
            if(occ[query] == 3){
                four.erase(query);
                two.insert(query);
            }
            else if(occ[query] == 1){
                two.erase(query);
            }
            printAns();
        }
    }
    

    return 0;
}
