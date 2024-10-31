#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> b(m);
    for (int i = 0; i < m; i++)
        cin >> b[i];

    vector<int> c;

    // merge two arrays
    for (int i = 0; i < n; i++)
        c.push_back(a[i]);
    for (int i = 0; i < m; i++)
        c.push_back(b[i]);

    std::sort(c.begin(), c.end());

    unordered_map<int, int> index_map;
    for (int i = 0; i < c.size(); i++)
    {
        if (index_map.find(c[i]) == index_map.end())
        {
            index_map[c[i]] = i + 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << index_map[a[i]] << " ";
    }

    cout << endl;

    for (int i = 0; i < m; i++)
    {
        cout << index_map[b[i]] << " ";
    }
}