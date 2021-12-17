#include<bits/stdc++.h>
using namespace std;

const int N = 4e5 + 5;

int a[N];
int b[N];
int cnt[N];

int main (){


    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i] % m;
    }
    set <int> st;
    int res = 0;
    for (int i = 0; i < m; i++){
        cnt[i] = n / m;
        st.insert(i);
    }
    for (int i = 0; i < n; i++){
        auto it = st.lower_bound(b[i]);
        cout<<b[i]<<" B{I} IT "<<*it<<endl;
        if (it == st.end()) it = st.begin();
        int cur = (*it - b[i]);
        if (cur < 0) cur += m;
        res += cur;
        a[i] += cur;
        cnt[*it]--;
        if (cnt[*it] == 0) st.erase(it);
    }
    cout << res << endl;
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;

}
