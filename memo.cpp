#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> memo(1000000, 0);

int func (int i) {
    if (i == 0) {
        return 0;
    }

    if (i == 1) {
        return 0;
    }

    if (i == 2) {
        return 1;
    }

    if (memo[i] != 0) {
        return memo[i];
    }

    return memo[i] = func(i - 1) + func(i - 2) + func(i - 3);
}


int main() {
    int N;
    cin >> N;

    int ans = func(N);

    cout << ans << endl;
}
