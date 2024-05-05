#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;

    // // add elements to the end of the vector
    // v.push_back(3); // [3]
    // v.push_back(2); // [3,2]
    // v.push_back(5); // [3,2,5]

    // // access elements
    // cout << v[0] << "\n"; // 3
    // cout << v[1] << "\n"; // 2
    // cout << v[2] << "\n"; // 5

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << "\n";
    // }

    set<int> s = {2, 5, 6, 8};
    cout << s.size() << "\n"; // 4
    for (auto x : s)
    {
        cout << x << "\n";
    }
}