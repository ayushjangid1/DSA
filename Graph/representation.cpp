#include<bits/stdc++.h>
using namespace std;

int main(){

    //1. Adjacency matrix SC = O(N*N)
    // int n, m;
    // cin>> n>>m;
    // int adj[n+1][n+1] = {0};
    // for(int i=0;i<m;i++){
    //     int u,v;
    //     cin>>u>>v;
    //     adj[u][v]=1;
    //     adj[v][u]=1;
    // }

    // 2. Adjacency list for undirected graph SC = O(2E)
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];// array of vectors;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=0;i<n+1;i++){
        cout<<i<<":";
        for(auto it:adj[i]){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    //2. Adjacency list for directed graph SC = O(E)
    // int n,m;
    // cin>>n>>m;
    // vector<int> adj[n+1];
    // for(int i=0;i<m;i++){
    //     int u,v;
    //     //u ---> v
    //     cin>>u>>v;
    //     adj[u].push_back(v);
    // }
    return 0;
}