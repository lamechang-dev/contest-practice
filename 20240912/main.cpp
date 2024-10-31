#include <iostream>
#include <vector>

using namespace std;

void dfs(int v, vector<vector<int>> &adj, vector<bool> &visited)
{
    visited[v] = true; // 現在の頂点を訪問済みにする

    for (int u : adj[v])
    {
        if (!visited[u])
        {
            dfs(u, adj, visited);
        }
    }
}

int main()
{
    // n 頂点 m 辺のグラフ
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a - 1].push_back(b - 1);
        adj[b - 1].push_back(a - 1);
    }

    vector<bool> visited(n, false);

    dfs(0, adj, visited);

    bool isConnected = true;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            isConnected = false;
            break;
        }
    }

    if (isConnected)
    {
        cout << "The graph is connected." << endl;
    }
    else
    {
        cout << "The graph is not connected." << endl;
    }

    return 0;
}