#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int M, D, y, m, d;
    cin >> M >> D;
    cin >> y >> m >> d;

    int next_year = 0;
    int next_month = 0;
    int next_date = 0;

    if (m == M && d == D) {
        next_year = y + 1;
        next_month =  1;
        next_date =  1;
        cout << next_year << " " << next_month << " " << next_date << endl;
        return 0;
    } else {
        next_year = y;
    }

    if (d == D) {
        next_month = m + 1;
        next_date = 1;
        cout << next_year << " " << next_month << " " << next_date << endl;
        return 0;
    } else {
        next_month = m;
        next_date = d + 1;
        cout << next_year << " " << next_month << " " << next_date << endl;
        return 0;
    }


    cout << next_year << " " << next_month << " " << next_date << endl;
}
