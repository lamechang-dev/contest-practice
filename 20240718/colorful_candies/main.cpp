#include <bits/stdc++.h>
#include <iostream>
#include <map>
using namespace std;

vector<int> a;

int main()
{
    int n;
    int k;
    int ans_pattern_num = 0;
    int temp_sum = 0;
    bool flg = false;
    int sum = 0;

    cin >> n >> k;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= k; i++)
    {
        sum += a[i];
        if (sum >= k)
        {
            ans_pattern_num++;
            if (!flg)
            {
                flg = true;
                temp_sum = sum;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        temp_sum -= a[i - 1];
        temp_sum += a[i + k - 1];
        if (temp_sum >= k)
            ans_pattern_num++;
    }

    cout << ans_pattern_num << endl;
}
