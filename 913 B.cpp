#include<bits/stdc++.h>
using namespace std;

vector <int> v[1006];

bool bfs (int source){

    bool visited[1006]={0};
    queue <int> q;

    visited [source]=1;
    q.push(source);

    while (!q.empty()){
        int u=q.front();

        q.pop();
        if (v[u].size()==0)
            continue;
        int cnt=0;

        for (int i=0;i<v[u].size();i++){
            int v1=v[u][i];


            if (visited[v1]==0){
                visited[v1]=1;

                if (v[v1].size()==0){
                    cnt++;
                }

                q.push(v1);
            }

        }
        if (cnt<3)
                return 0;
    }
    return 1;
}

int main (){

    int n,x;
    cin>>n;
    int c;

    for (int i=2;i<=n;i++){
        cin>>x;
        v[x].push_back(i);
    }

    c=bfs(1);
    if (c){
        cout<<"Yes"<<endl;
    }
    else
        cout<<"No"<<endl;

}
