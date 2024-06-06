#include <iostream>
#include <vector>
#include <cmath>
#include <set>
#include <string>

using namespace std;

int main()
{
    int N;
    int K;
    cin >> N;
    cin >> K;

    int temAns = 1;
    for (int i = 0; i < N; i++)
    {
        if ((temAns + K) > temAns * 2)
        {
            temAns = temAns * 2;
        }
        else
        {
            temAns = temAns + K;
        }
    }
    cout << temAns << endl;
}