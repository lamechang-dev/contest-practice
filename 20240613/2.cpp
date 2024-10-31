#include <iostream>
#include <vector>
#include <cmath>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

int findSmallestPositiveLastDigit(const std::vector<int> &numbers)
{
    int minLastDigit = 10; // 1の位の最小値を格納する変数を10で初期化（0-9の範囲で最小値を探すため）
    int result = -1;       // 条件を満たす要素が見つからない場合のデフォルト値

    for (int num : numbers)
    {
        int lastDigit = abs(num % 10); // 最後の桁を取得し、負の値を正に変換
        if (lastDigit > 0 && lastDigit < minLastDigit)
        {                             // 最後の桁が0より大きく、現在の1の位の最小値より小さい場合
            minLastDigit = lastDigit; // 最小の1の位を更新
            result = num;             // 条件を満たす数値を更新
        }
    }

    return result; // 最小の1の位を持つ数値を返す、見つからなければ-1を返す
}

int roundUpToNextTen(int num)
{
    if (num % 10 == 0)
    {
        return num; // すでに10の倍数の場合はそのまま返す
    }
    else
    {
        return (num / 10 + 1) * 10; // 最後の桁が0でなければ切り上げ
    }
}

int main()
{
    int A, B, C, D, E;
    int ans = 0;

    cin >> A >> B >> C >> D >> E;

    // A, B, C, D, Eを配列に格納
    vector<int> numbers = {A, B, C, D, E};

    int min_number = findSmallestPositiveLastDigit(numbers);
    bool flag = false;

    for (int i = 0; i < numbers.size(); i++)
    {
        if (min_number == numbers[i] && flag == false)
        {
            ans += numbers[i];
            flag = true;
        }
        else
        {
            int temp = roundUpToNextTen(numbers[i]);
            ans += temp;
        }
    }

    cout << ans << endl;
}