#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// @see https://atcoder.jp/contests/abc329/tasks/abc329_b
int main() {
    int a, b, c, sum;
    cin >> a >> b >> c >> sum;
    int result = 0;

    for (int i = 0; i <= a; i++) 
    {
        int aSum = i * 500;
        for (int j = 0; j <= b; j++)
        {
            int bSum = j * 100;
            for (int k = 0; k <= c; k++)
            {
                int cSum = k * 50;
                cout << aSum << " " << bSum << " " << cSum << endl;
                if (aSum + bSum + cSum == sum)
                {
                    result++;
                }
            }
        }
    }
    cout << result << endl;
}