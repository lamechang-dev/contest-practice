#include <iostream>
#include <vector>

using namespace std;

bool logic(vector<string> &words, string order)
{
    vector<int> orderMap(order.size(), 0);
    for (int i = 0; i < order.size(); i++)
    {
        orderMap[order[i] - 'a'] = i;
    }

    bool sameFlag = true;

    for (int i = 0; i < words.size() - 1; i++)
    {
        for (int j = 0; j < min(words[i].size(), words[i + 1].size()); j++)
        {
            if (orderMap[words[i][j] - 1] < orderMap[words[i + 1][j] - 1])
            {
                sameFlag = false;
                break;
            }
            else if (orderMap[words[i][j] - 1] > orderMap[words[i + 1][j] - 1])
            {
                sameFlag = false;
                return false;
            }
            else if (orderMap[words[i][j] - 1] == orderMap[words[i + 1][j] - 1])
                sameFlag = true;
        }
        if (words[i].size() > words[i + 1].size() && sameFlag)
            return false;
        else if (words[i].size() < words[i + 1].size() && sameFlag)
            break;
    }
    return true;
}
