#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool func (int i, int w, vector<int> &a) {
    if (i == 0 && w == 0) {
        return true;
    }

    if (func(i - 1, w, a)) {
        return true;
    }

    if (func(i - 1, w - a[i - 1], a)) {
        return true;
    }

    return false;

}


int main() {
    int N, W;
    cin >> N >> W;
    vector<int> a(N);

    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    bool ans = func(N, W, a);

    cout << ans << endl;
}
