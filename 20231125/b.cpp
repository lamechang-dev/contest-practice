#include <bits/stdc++.h>
using namespace std;
#define rep(i, x) for(int i = 0; i < (x); i++)
int main() {
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    rep(i, n) cout << clamp(a[i], l, r) << " \n"[i == n - 1];
}