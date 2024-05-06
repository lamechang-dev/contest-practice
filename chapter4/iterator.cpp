#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    set<int> s = {2, 5, 6, 8};
    cout << s.size() << "\n"; // 4
    for (auto x : s)
    {
        cout << x << "\n";
    }
}