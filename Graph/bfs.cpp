#include<bits/stdc++.h>
using namespace std;


//starting node is 0.
vector<int> bfsOfGraph(int v,vector<int> adj[]){
    int vis[v] = {0};
    vis[0] = 1;
    queue<int> q;
    q.push(0);

    vector<int> bfs;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        for(auto it : adj[node]){
            if(!vis[it]){
                vis[it]=1;
                q.push(it);
            }
        }
    }
    return bfs;
}

int main(){

    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> ans = bfsOfGraph(n,adj);
    for(auto it:ans){
        cout<<it<<" ";
    }

    return 0;
}