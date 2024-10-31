#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// on と off の状態を持つ N 個の スイッチと、M 個の電球があります。
// 電球 i は ki 個のスイッチに繋がっており、スイッチ s1, s2, ..., sk のうち
// on になっているスイッチの個数を 2 で割った余りが pi に等しい時に点灯します。
// 全ての電球が点灯するようなスイッチの on/off の状態の組み合わせは何通りあるでしょうか。

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> k(m);
    vector<vector<int>> s(m, vector<int>(n));
    vector<int> p(m);

    for (int i = 0; i < m; i++)
    {
        cin >> k[i];
        for (int j = 0; j < k[i]; j++)
        {
            cin >> s[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        cin >> p[i];
    }

    int count = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < k[i]; j++)
        {
            if (s[i][j] % 2 == p[i])
            {
                count++;
            }
        }
    }

    cout << count << endl;
}