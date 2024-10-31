#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long max;

    while (n > 0)
    {
        if (n % 2 == 0)
        {
            n /= 2;
        }
        if (n % 3 == 0)
        {
            n /= 3;
        }
        if (n == 1)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
}