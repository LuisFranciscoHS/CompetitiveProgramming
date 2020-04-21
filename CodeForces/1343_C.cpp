#include <bits/stdc++.h>

using namespace std;

int main() {

    freopen("input.txt", "r", stdin);

    // For each pair of numbers:
    // -- check the x
    // -- check its maximum k replacing only one of them
    // Count which x appears the most

    //

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        long long int ai;
        bool current_sign;
        int length = 0;
        long long int sum = 0;;
        long long int max_of_bunch;

        cin >> ai;
        current_sign = ai > 0;
        max_of_bunch = ai;

        for (int I = 1; I < n; I++) { // Sequence starting in position
            cin >> ai;
            if (ai > 0 == current_sign) {
                max_of_bunch = max(max_of_bunch, ai);
            } else {
                current_sign = ai > 0;
                length++;
                sum += max_of_bunch;
                max_of_bunch = ai;
            }
        }
        length++;
        sum += max_of_bunch;
        cout << sum << "\n";
    }
    return 0;
}
