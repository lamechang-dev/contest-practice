#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> tree;

int main()
{
    int N;
    cin >> N;

    tree.resize(N);

    for (int i = 0; i < N - 1; ++i)
    {
        int A, B;
        cin >> A >> B;
        --A;
        --B; // インデックスを0から始めるように調整
        tree[A].push_back(B);
        tree[B].push_back(A);
    }

    // 操作の回数を取得
    int Q;
    cin >> Q;

    // 部分木の根と部分木に含まれる頂点に足す値を取得
    vector<int> values(N);
    for (int i = 0; i < Q; ++i)
    {
        int V, K;
        cin >> V >> K;
        values[V] += K;
    }

    //

    return 0;
}