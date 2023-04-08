#include <bits/stdc++.h>
using namespace std;

bool dfs_check(int node, int col, vector<int> adj[], int coloured[])
{
    coloured[node] = col;
    for (auto it : adj[node])
    {
        if (coloured[it] == -1)
        {
            if (dfs_check(it, !col, adj, coloured) == false)
            {
                return false;
            }
        }
        else if (coloured[it] == col)
        {
            return false;
        }
    }
    return true;
}
bool isBipartite(int V, vector<int> adj[])
{
    // Code here
    int coloured[V];
    for (int i = 0; i < V; i++)
        coloured[i] = -1;
    for (int i = 0; i < V; i++)
    {
        if (coloured[i] == -1)
        {
            if (dfs_check(i, 0, adj, coloured) == false)
                return false;
        }
    }
    return true;
}

int main()
{

    int V, E;
    cin >> V >> E;
    vector<int> adj[V];
    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bool ans = isBipartite(V, adj);
    if (ans)
        cout << "1\n";
    else
        cout << "0\n";

    return 0;
}
