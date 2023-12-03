#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, S, M, L;
    cin >> N >> S >> M >> L;

    int tmp_min = 0;

    bool flag = false;

    for (int i = 0; i <= 100; i++) {
        for (int j = 0; j <= 100; j++) {
            for (int k = 0; k <= 100; k++) {
                if (i * 6 + j * 8 + k * 12 >= N) {
                    if (tmp_min == 0) {
                        tmp_min = i * S + j * M + k * L;
                    } else {
                        tmp_min = min(tmp_min, i * S + j * M + k * L);
                    }
                    flag = true;
                }
                if(flag) {
                    flag = false;
                    break;
                }
            }
        }
    }

    cout << tmp_min << endl;
}
