#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<long long> A(N + 1), P(N + 1);

    for (int i = 1; i <= N; ++i) {
        cin >> A[i];
    }

    for (int i = 2; i <= N; ++i) {
        cin >> P[i];
    }

    vector<long long> sum(N + 1, 0);
    for (int i = N; i >= 2; --i) {
        sum[i] += A[i];
        sum[P[i]] += sum[i];
    }

    sum[1] += A[1];

    if (sum[1] > 0) {
        cout << "+" << endl;
    } else if (sum[1] < 0) {
        cout << "-" << endl;
    } else {
        cout << "0" << endl;
    }
}
