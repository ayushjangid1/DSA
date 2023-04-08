#include <bits/stdc++.h>
using namespace std;

bool check_bi(int node, int V, vector<int> adj[], int coloured[])
{
    queue<int> q;
    coloured[node] = 0;
    q.push(node);
    while (!q.empty())
    {
        int n_node = q.front();
        q.pop();
        for (auto it : adj[n_node])
        {
            if (coloured[it] == -1)
            {
                coloured[it] = !coloured[n_node];
                q.push(it);
            }
            else if (coloured[it] == coloured[n_node])
            {
                return false;
            }
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
            if (check_bi(i, V, adj, coloured) == false)
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
