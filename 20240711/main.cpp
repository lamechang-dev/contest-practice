#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n, d;
    cin >> n >> d;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];
    vector<int> ans;
    int cnt = 0;
    for (int i = 0; i < d; i++)
    {
        bool flg = true;
        for (int j = 0; j < n; j++)
        {
            if (s[j][i] == 'x')
                flg = false;
        }
        if (flg)
        {
            cnt++;
            ans.push_back(cnt);
        }
        if (!flg)
            cnt = 0;
    }

    sort(ans.rbegin(), ans.rend());
    if (!ans.empty())
    {
        cout << ans[0];
    }
    else
    {
        cout << 0;
    }
}