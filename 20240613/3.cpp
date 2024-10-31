#include <iostream>
#include <vector>
#include <cmath>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int X;
    cin >> X;

    if (X < 0)
    {
        X = abs(X);
    }

    int count = 1;

    while (true)
    {
        if (X - count >= count)
        {
            X -= count;
        }
        else if (X == 0)
        {
            break;
        }
        count++;
    }

    cout << count << endl;
    return 0;
}