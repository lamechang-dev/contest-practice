#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, S, K;
    cin >> N >> S >> K;
    vector<int> P(N+1);
    vector<int> Q(N+1);

    for (int i = 1; i <= N; i++) {
        cin >> P[i] >> Q[i];
    }

    long long sum = 0;

    for (int i = 1; i <= N; i++) {
        sum = sum + P[i] * Q[i];
    }

    if (sum < S) {
        sum = sum + K;
    }
    cout << sum << endl;
}