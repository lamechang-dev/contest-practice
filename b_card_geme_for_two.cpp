#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N ;
    cin >> N;

    vector<int> card(N + 1); 
    for (int i = 1; i <= N; i++) {
        cin >> card[i];
    }

    // sort card vector in descending order
    sort(card.begin(), card.end(), greater<int>());

    // sum of cards of Alice and Bob
    int sum_alice = 0;
    int sum_bob = 0;
    bool is_alice_turn = true;

    while (card.size() > 0) {
        if (is_alice_turn) {
            sum_alice += card[0];
        } else {
            sum_bob += card[0];
        }
        card.erase(card.begin());
        is_alice_turn = !is_alice_turn;
    }

    cout << sum_alice - sum_bob << endl;
}