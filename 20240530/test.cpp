#include <iostream>
#include <vector>
#include <cmath>
#include <set>
#include <string>
#include <limits> // std::numeric_limitsを使用するため

using namespace std;

class Solution
{
public:
    vector<int> integerToDigits(int number)
    {
        vector<int> digits;
        if (number == 0)
        {
            digits.push_back(0);
        }
        else
        {
            while (number > 0)
            {
                digits.push_back(number % 10);
                number /= 10;
            }
            reverse(digits.begin(), digits.end());
        }

        return digits;
    }

    vector<vector<int>> getAllSubsets(const vector<int> &set)
    {
        vector<vector<int>> subset;
        vector<int> empty;
        subset.push_back(empty);

        for (int i = 0; i < set.size(); i++)
        {
            vector<vector<int>> subsetTemp = subset;

            for (auto &s : subsetTemp)
            {
                s.push_back(set[i]);
            }

            for (auto &s : subsetTemp)
            {
                subset.push_back(s);
            }
        }
        return subset;
    }

    vector<vector<int>> subsetsForNumber(int number)
    {
        // 212 => [2,1,2]
        vector<int> digits = integerToDigits(number);

        return getAllSubsets(digits);
    }

    int splitNum(int num)
    {
        vector<vector<int>> target = subsetsForNumber(num);

        cout << target.size() << endl;

        // サブセットを出力
        for (const auto &subset : target)
        {
            cout << "Subset: ";
            for (int a : subset)
            {
                cout << a << " ";
            }
            cout << endl;
        }

        int minSum = numeric_limits<int>::max(); // 最大のint値で初期化

        for (const vector<int> &subset : target)
        {
            int currentSum = 0;
            for (int digit : subset)
            {
                currentSum += digit;
            }
            if (!subset.empty() && currentSum < minSum)
            { // 空のサブセットは除外
                minSum = currentSum;
            }
        }

        return minSum;
    }
};

int main()
{
    Solution sol;
    int number = 212;
    cout << "Minimum subset sum for " << number << " is " << sol.splitNum(number) << endl;
    return 0;
}