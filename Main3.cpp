#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, m, n) for (int i = m; i < (int)(n); ++i)

int main()
{
    int N;
    cin >> N;
    vector<int> array(N + 1); 
    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }

    rep(i, N) {
        cout << array[i] << endl;
    }
}