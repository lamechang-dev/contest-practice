#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    while (n > 0)
    {
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else if (n % 3 == 0)
        {
            n /= 3;
        }
        else if (n == 1)
        {
            cout << "Yes" << endl;
            return 0;
            break;
        }
        else
        {
            cout << "No" << endl;
            return 0;
            break;
        }
    }
}