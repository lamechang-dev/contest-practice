#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// @see https://atcoder.jp/contests/abc329/tasks/abc329_b
int main() {
    int N; cin >> N;
    vector<int> x(N);
    for (int i = 0; i < N; ++i) cin >> x[i];

    int m = *max_element(x.begin(), x.end());    
	int ans = 0;
	for (int e : x) {
        if (e != m) {
            ans = max(ans, e);
        }
    } 
	cout << ans << endl;
    
}