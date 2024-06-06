#include <iostream>
#include <vector>
#include <cmath>
#include <set>
#include <string>

using namespace std;

int main()
{
    int num;
    cin >> num;
    vector<string> targets;

    for (int i = 0; i < num; ++i)
    {
        string target;
        cin >> target;
        targets.push_back(target);
    }

    int count = 0;

    for (int i = 0; i < num; ++i)
    {
        multiset<char> targetSet;
        string target = targets[i];
        for (size_t t = 0; t < target.length(); ++t)
        {
            char c1 = target[t];
            targetSet.insert(c1);
        }
        for (int j = i + 1; j < num; ++j)
        {
            multiset<char> compTargetSet;
            string compTarget = targets[j];
            for (size_t t = 0; t < compTarget.length(); ++t)
            {
                char c2 = compTarget[t];
                compTargetSet.insert(c2);
            }

            if (targetSet == compTargetSet)
            {
                count++;
            }
        }
    }

    cout << count << endl;
}