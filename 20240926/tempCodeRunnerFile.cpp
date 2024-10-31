#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // simple undirected graph
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n);
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    // count triangle
    int count = 0;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 0; j < g[i].size(); j++)
        {
            // check g[g[i][j]] has one of g[i] except i
            for (int k = 0; k < g[g[i][j]].size(); k++)
            {
                if (g[g[i][j]][k] == i)
                {
                    count++;
                }
            }
        }
    }
    cout << count / 6 << endl;
}