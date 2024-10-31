#include <iostream>
#include <vector>

using namespace std;

// DFSでグラフを探索する関数
void dfs(int v, vector<vector<int>> &adj, vector<bool> &visited)
{
    visited[v] = true; // 現在の頂点を訪問済みにする

    // 隣接するすべての頂点を再帰的に訪問
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
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<bool> visited(n, false);

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            dfs(i, adj, visited);
        }
    }

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