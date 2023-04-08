#include<bits/stdc++.h>
using namespace std;

bool detect_cycle(int src, vector<int> adj[],int vis[]){
    vis[src] = 1;
    queue<pair<int,int>> q;
    q.push({src,-1});

    while(!q.empty()){
        int node = q.front().first;
        int parent_node = q.front().second;

        q.pop();

        for(auto it:adj[node]){
            if(!vis[it]){
                vis[it] = 1;
                q.push({it,node});
            }
            else if(parent_node != it){
                return true;
            }
        }
    }
    return false;
}

bool is_cycle(int V,vector<int> adj[]){
    int vis[V] = {0};
    for(int i=0;i<V;i++){
        if(!vis[i]){
            if(detect_cycle(i,adj,vis)) return true;
        }
    }
    return false;
}

int main(){

    int V,E;
    cin>>V>>E;
    vector<int> adj[E];
    for(int i=0;i<V;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    if(is_cycle(V,adj))cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}