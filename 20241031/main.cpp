#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> tree;
vector<int> distance_from_root;
vector<bool> visited;

// DFSで距離と最遠ノードを計算する
pair<int, int> dfs(int node, int depth)
{
    visited[node] = true;
    distance_from_root[node] = depth;
    pair<int, int> farthest = {depth, node};

    for (int neighbor : tree[node])
    {
        if (!visited[neighbor])
        {
            auto candidate = dfs(neighbor, depth + 1);
            if (candidate.first > farthest.first)
            {
                farthest = candidate;
            }
        }
    }
    return farthest;
}

int main()
{
    int N;
    cin >> N;

    tree.resize(N);
    distance_from_root.resize(N);
    visited.resize(N, false);

    // N-1本の道路を読み取って隣接リストを構築
    for (int i = 0; i < N - 1; ++i)
    {
        int A, B;
        cin >> A >> B;
        --A;
        --B; // インデックスを0から始めるように調整
        tree[A].push_back(B);
        tree[B].push_back(A);
    }

    // 1. 任意の都市（ここでは都市0）から最遠の都市を見つける
    auto farthest_from_start = dfs(0, 0);

    // 2. foundした都市からさらに最遠の都市までの距離（木の直径）を求める
    fill(visited.begin(), visited.end(), false);
    auto farthest_from_farthest = dfs(farthest_from_start.second, 0);

    // 3. 直径に1本の道路を追加したときのループの長さ
    int loop_length = farthest_from_farthest.first + 1;

    cout << loop_length << endl;

    return 0;
}