#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, Y;
    cin >> N >> Y;

    int x,y,z = 0;

    for (int i = 0; i <= N; i++) 
    {
        x = i * 10000;
        for (int j = 0; j <= N - i; j++)
        {
            y = j * 5000;
            for (int k = 0; k <= N - i - j; k++)
            {
                z = k * 1000;
                if (x + y + z == Y && i + j + k == N)
                {
                    cout << i << " " << j << " " << k << endl;
                    return 0;
                }
            }
        }
    }

    cout << "-1 -1 -1" << endl;
}