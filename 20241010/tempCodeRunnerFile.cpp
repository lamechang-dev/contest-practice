#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    y = min(y, x + x);
    int d = abs(b + b + 1 - a - a) >> 1;
    printf("%d\n", x + y * d);

    cout << x + y * d << endl;
}