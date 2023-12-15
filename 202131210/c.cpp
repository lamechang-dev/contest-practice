#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    string S;
    cin >> S;
    int m = M;
    int l = 0;

    int temp_max = 0;
    for (size_t i = 0; i < S.length(); i++)
    {
        if (S[i] == '0') {
            m = M;
            temp_max = max(temp_max, l);
            l = 0;
        }
        if (S[i] == '1') {
            if (m == 0) {
                l++;
            }
            else {
                m = m - 1;
            }
        }
        if (S[i] == '2') {
            l++;
        }
    }

    temp_max = max(temp_max, l);


    cout << temp_max << endl;
}
