#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, m, n) for (int i = m; i < (int)(n); ++i)

int main()
{
    int a, b, c, ans;
    cin >> a >> b >> c >> ans;

    int count = 0;

    rep(i, a + 1) {
        rep(k, b + 1) {
            rep(j, c + 1) {
                if ((500 * i + 100 * k + 50 * j) == ans) {
                    count++;
                } 
            }
        }
    }

    cout << count << endl;
}