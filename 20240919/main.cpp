#include <iostream>
#include <vector>

using namespace std;

int findJudge(int n, vector<vector<int>> &trust)
{
    vector<int> in(n + 1, 0);
    vector<int> out(n + 1, 0);

    for (auto &edge : trust)
    {
        out[edge[0]]++;
        in[edge[1]]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (in[i] == n - 1 && out[i] == 0)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int n = 3;
    vector<vector<int>> trust = {{1, 3}, {2, 3}, {3, 1}};
    cout << findJudge(n, trust) << endl;
    return 0;
}