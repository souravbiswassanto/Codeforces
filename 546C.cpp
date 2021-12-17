#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 100000000000000000
///cin.ignore();
void FastIO()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}
int main()
{
    FastIO();

    int N,A[100],B[100];

    cin>>N;

    queue<int> Q1,Q2;

    int K1; cin>>K1;

    for(int i=1;i<=K1;i++) { cin>>A[i]; Q1.push(A[i]);}

    int K2; cin>>K2;

    for(int i=1;i<=K2;i++) { cin>>B[i]; Q2.push(B[i]);}

    int process=0;

    while(1)
    {
        int X=Q1.front(); Q1.pop();
        int Y=Q2.front(); Q2.pop();

        if(X>Y)
        {
            process++;
            Q1.push(Y);
            Q1.push(X);
        }
        else if(X<Y)
        {
            process++;
            Q2.push(X);
            Q2.push(Y);
        }

        if(Q1.empty() || Q2.empty()) break;

        if(process>100000)
        {
            cout<<-1<<endl;
            return 0;
        }

    }


    if(Q1.empty()) cout<<process<<" "<<2<<endl;
    else cout<<process<<" "<<1<<endl;

    return 0;
}
