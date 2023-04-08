#include<bits/stdc++.h>
using namespace std;

bool detect_cycle(int node,int parent, vector<int> adj[],int vis[]){
    vis[node] = 1;
    for(auto it:adj[node]){
        if(!vis[it]){
            if(detect_cycle(it,node,adj,vis)==true){
                return true;
            }
            else if(it != parent){
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
            if(detect_cycle(i,-1,adj,vis)) return true;
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