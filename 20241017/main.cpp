#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    // shortest path of n nodes & m edges
    // each node i(1 <= i <= n) has a weight a[i]
    // eage j(1 <= j <= m) has a weight b[j] between u[j] and v[j]

    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<vector<pair<int, int>>> g(n);
    for (int i = 0; i < m; i++)
    {
        int u, v, b;
        cin >> u >> v >> b;
        g[u].push_back(make_pair(v, b));
        g[v].push_back(make_pair(u, b));
    }

    // dijkstra
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push(make_pair(0, 0));
    vector<int> dist(n, INT_MAX);
    dist[0] = 0;
    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
    }
}