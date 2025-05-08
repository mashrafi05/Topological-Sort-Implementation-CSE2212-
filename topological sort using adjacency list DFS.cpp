//topological sort using adjacency list DFS
#include<bits/stdc++.h>
using namespace std;

int visit[1001];
vector<pair<int, int>>graph[1001];
int n,e;
stack<int>ans;

void dfs(int start){
    visit[start]=1;
    for(int j=0; j<graph[start].size();j++){
        int node=graph[start][j].first;
        if(visit[node]==0){
            visit[node]=1;
            dfs(node);
        }
    }
    ans.push(start);
}


int main(){
    cin>>n>>e;
    int u,v,w;
    for(int i=1; i<=e; i++){
            cin>>u>>v>>w;
    graph[u].push_back(make_pair(v,w));

    }
    for(int i=1; i<=n; i++){
        if(visit[i]==0){
            dfs(i);
        }
    }

    while(!ans.empty()){
        cout<<ans.top()<<" ";
        ans.pop();
    }
}
//
//8 8
//1 3 9
//2 3 5
//2 4 1
//3 5 7
//4 6 2
//5 6 2
//6 7 5
//6 8 1
