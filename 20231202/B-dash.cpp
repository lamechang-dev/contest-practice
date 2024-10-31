#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

struct Package
{
    int weight;
    int cost;
    double costPerWeight;
};

int main()
{
    int S, M, L, N;
    cin >> S >> M >> L >> N;

    // 各パッケージの重量とコストを設定
    Package small = {6, S, static_cast<double>(S) / 6};
    Package medium = {8, M, static_cast<double>(M) / 8};
    Package large = {12, L, static_cast<double>(L) / 12};

    // コスト効率でソート
    vector<Package> packages = {small, medium, large};
    sort(packages.begin(), packages.end(), [](const Package &a, const Package &b)
         { return a.costPerWeight < b.costPerWeight; });

    int totalWeight = 0;
    int totalCost = 0;

    // 貪欲法による計算
    for (const auto &pkg : packages)
    {
        while (totalWeight + pkg.weight <= N)
        {
            totalWeight += pkg.weight;
            totalCost += pkg.cost;
        }
    }

    // 解が存在しない場合は -1 を出力
    if (totalWeight < N)
    {
        cout << "-1\n";
    }
    else
    {
        cout << totalCost << "\n";
    }

    return 0;
}