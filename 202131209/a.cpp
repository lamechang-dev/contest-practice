#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N; cin >> N;
    vector<int> A(N);
    vector<int> P(N);
    for (int i = 1; i <= N; i++) cin >> A[i];
    for (int i = 2; i <= N; i++) cin >> P[i];

    for (int j = 1; j <= 1000000; j++) {
        for (int i = 2; i <= N; i++) {
            A[P[i]] = A[P[i]] + A[i];
        }
    }

    if ( A[1] > 0 ) {
        cout << "+" << endl;
    } else if ( A[1] == 0 ) {
        cout << "0" << endl;
    } else {
        cout << "-" << endl;
    }
}