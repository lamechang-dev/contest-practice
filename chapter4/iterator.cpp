#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    set<int> s = {2, 5, 6, 8};
    int x = 7;
    auto it = s.lower_bound(x);
    if (it == s.begin())
    {
        cout << *it << "\n";
    }
    else if (it == s.end())
    {
        it--;
        cout << *it << "\n";
    }
    else
    {
        int a = *it;
        it--;
        int b = *it;
        if (x - b < a - x)
            cout << b << "\n";
        else
            cout << a << "\n";
    }
}