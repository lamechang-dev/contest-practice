#include <bits/stdc++.h>
#include <iostream>
#include <map>
using namespace std;

map<int, int> candy_color_patterns;

int main()
{
    int n; // キャンディーの数
    int k; // 取れる連続したキャンディーの数

    cin >>
        n >> k;

    vector<int> c(n);
    for (int i = 1; i <= n; i++)
        cin >> c[i];

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            candy_color_patterns[c[j]]++;
        }
    }
    int ans = candy_color_patterns.size();

    for (int i = k + 1; i <= n; i++)
    {
        candy_color_patterns[c[i]]++;
        candy_color_patterns[c[i - k]]--;
        if (candy_color_patterns[c[i - k]] == 0)
            candy_color_patterns.erase(c[i - k]);
        ans = max(ans, (int)candy_color_patterns.size());
    }
    cout << ans << endl;
    return 0;
}