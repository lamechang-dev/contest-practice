#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int sum;
    cin >> sum;

    bool found = false;

    for (int i = 0; i <= num; ++i)
    {
        for (int j = 0; j <= (num - i); ++j)
        {
            int calc = i * 10000 + j * 5000 + (num - i - j) * 1000;
            if (calc == sum)
            {
                cout << i << " " << j << " " << num - i - j << endl;
                found = true;
                break;
            }
            if (found)
            {
                break;
            }
        }
        if (found)
        {
            break;
        }
    }

    if (!found)
    {
        cout << "-1 -1 -1" << endl;
    }
}