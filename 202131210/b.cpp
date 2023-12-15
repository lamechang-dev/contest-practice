#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int K, G, M;
    cin >> K >> G >> M;

    int g = 0;
    int m = 0;

    for (int i = 1; i <= K; i++) {
        if (g == G) {
            g = 0;
        } else if (m == 0) {
            m = M;
        } else {
            g = g + m;
            m = 0;
            if (g > G) {
                m = g - G;
                g = G;
            }
        }
    }

    cout << g << " " << m << endl;
}
