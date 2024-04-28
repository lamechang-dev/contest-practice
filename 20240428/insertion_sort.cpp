#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, m, n) for (int i = m; i < (int)(n); ++i)
#define rep3(i, n) for (int i = 1; i < (int)(n); i++)

void InsersionSort(vector<int> &a) {
    int N = (int)a.size();

    rep3(i, N) {
        int v = a[i];
        int j = i;
        for (; j > 0; --j) {
            if (a[j - 1] > v) {
                a[j] = a[j - 1];
            } else {
                break;
            }
        }
        a[j] = v;
    }
}

int main()
{
    int N;
    cin >> N;
    vector<int> a(N);

    rep(i, N) {
        cin >> a[i];
    }

    InsersionSort(a);

    rep(i, N) {
        cout << a[i] << endl;
    }
}

