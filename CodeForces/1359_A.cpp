#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        int cards_per_player = n / k;
        int max_jokers_winner = std::min(cards_per_player, m);
        int jokers_left = m - max_jokers_winner;
        int min_jokers_loser = (jokers_left + k - 2) / (k - 1);
//        std::cout << "The min loser has is " << min_jokers_loser << "\n";
        int points = (max_jokers_winner == min_jokers_loser ? 0 : max_jokers_winner - min_jokers_loser);
        std::cout << points << endl;
    }
    return 0;
}