#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n ,a, b;
    cin >> n >> a >> b;
    int sum = 0;

    for (int i = 1; i <= n; i++) {   
        int tmp_sum = 0;
        int temp = i;
        int dig;
        while (temp != 0)
        {
            int dig = temp % 10;
            tmp_sum = tmp_sum + dig;
            temp = temp / 10;
            if (temp == 0)
            {
                break;
            }
        }
        if(a <= tmp_sum && tmp_sum <= b){
            sum = sum + i;
        }
    }
    cout << sum << endl;
}