#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    vector<vector<char>> a(n, vector<char>(n));

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = s[i][j];
        }
    }

    string ans = "correct";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 'W' && a[j][i] != 'L')
            {
                ans = "incorrect";
                break;
            }
            if (a[i][j] == 'L' && a[j][i] != 'W')
            {
                ans = "incorrect";
                break;
            }
            if (a[i][j] == 'D' && a[j][i] != 'D')
            {
                ans = "incorrect";
                break;
            }
        }
    }
    cout << ans << endl;
}