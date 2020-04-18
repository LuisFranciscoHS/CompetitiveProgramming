#include <bits/stdc++.h>

using namespace std;

int main() {

    //freopen("input.txt", "r", stdin);

    int t;
    cin >> t;

    while (t--) {
        map<int, int> reps;
        int n;
        int most_repeated = 0;
        cin >> n;
        while (n--) {
            int ai;
            cin >> ai;
            if (reps.find(ai) != reps.end()) {
                reps[ai]++;
            }
            else {
                reps[ai] = 1;
            }
        }
        for(auto e : reps)
            most_repeated = max(most_repeated, e.second);

        int ans = min((int) most_repeated, (int) reps.size());
        if (most_repeated == reps.size())
            ans--;
        //cout << "Most repeated: " << most_repeated << endl;
        //cout << "Different numbers: " << reps.size() << endl;
        cout << ans << "\n";
    }
}