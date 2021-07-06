#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
int T,N,cnt = 0;
bool visit[1001] = {false};
bool visited[1001] = {false};
vector <int> adj[1001];
void DFS(int node){
    visit[node] = true;
    visited[node] = true;
    for(int i = 0;i<adj[node].size();i++){
        int next_node = adj[node][i];
        if(visit[next_node]){continue;}
        DFS(next_node);
    }
}
int main(void){
    cin >> T;
    for(int i = 0;i<T;i++){
        cin >> N;
        for(int j = 1;j<=N;j++){
            int a;
            cin >> a;
            adj[a].push_back(j);
            adj[j].push_back(a);
        }
        for(int k = 1;k<=N;k++){
            memset(visit,false,sizeof(visit));
            if(visited[k]){continue;}
            else{DFS(k);cnt++;visited[k] = true;}
        }
        memset(visited,false,sizeof(visited));
        cout << cnt << "\n";
        cnt = 0;
        for(int l = 0;l<=N;l++){adj[l].clear();}
    }
}
