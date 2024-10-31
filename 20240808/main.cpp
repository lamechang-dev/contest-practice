#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> s(n - 1), t(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> s[i] >> t[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        a[i + 1] += a[i] / s[i] * t[i];
    }

    cout << a[n - 1] << endl;
    return 0;
}