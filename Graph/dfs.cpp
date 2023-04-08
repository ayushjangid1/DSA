#include"bits/stdc++.h"
using namespace std;

void dfs(int node, vector<int> adj[],int vis[], vector<int> &ls){
    vis[node] = 1;
    ls.push_back(node);
    // For traversing all the neighbours of the node;
    for(auto it : adj[node]){
        if(!vis[it]){
            dfs(it,adj,vis,ls);
        }
    }
}

vector<int> dfsOfGraph(int v, vector<int> adj[]){
    int vis[v] = {0};
    int start = 0;
    vector<int> ls;
    dfs(start,adj,vis,ls);

    return ls;
}

int main(){
    int v,e;
    cin>>v>>e;
    vector<int> adj[v];
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> ans = dfsOfGraph(v,adj);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}
