#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isZorome(std::string number) {
    // 最初の文字を取得
    char firstChar = number[0];

    // 各文字をチェック
    for (char c : number) {
        if (c != firstChar) {
            return false; // 異なる文字があればゾロ目ではない
        }
    }

    return true; // 全ての文字が同じであればゾロ目
}

std::string concatenateNumbers(int num1, int num2) {
    return std::to_string(num1) + std::to_string(num2);
}

int main() {
// 1≤N≤100
// 1≤D 
// i ≤100 (1≤i≤N)
// 入力はすべて整数

    int N;
    cin >> N;
    int D[N];
    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> D[i];
    }

    for (int i = 0; i < N; i++) {
        for (int j = 1; j <= D[i]; j++)
        {
            std::string result = concatenateNumbers(i + 1, j);
            bool zorome = isZorome(result);

            if (zorome) {
                ans++;
            }
        }
    }

    cout << ans << endl;

}

