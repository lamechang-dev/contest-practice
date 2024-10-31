#include <iostream>
#include <vector>
#include <cmath>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int N, K;
    vector<int> lengthList;
    int answer = 0;

    cin >> N >> K;

    for (int i = 0; i < N; i++)
    {
        int length;
        cin >> length;
        lengthList.push_back(length);
    }

    // order the lengthList by descending order
    sort(lengthList.begin(), lengthList.end(), greater<int>());

    for (int k = 0; k < K; k++)
    {
        answer += lengthList[k];
    }

    cout << answer << endl;
}