#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        double h, c, t;
        cin >> h >> c >> t;
        double tb = h;
        int cups = 1;
        bool nextHot = false;
        int min_cups = cups;
        double min_dist = abs(h - t);

        while (tb != t) {
            cups++;
            tb = ((tb * (cups - 1)) + (nextHot ? h : c)) / cups;
            if (min_dist > abs(tb - t)) {
                min_cups = cups;
                min_dist = abs(tb - t);
            }
            if (nextHot) {
                if (t >= tb) {
                    break;
                }
                nextHot = false;
            } else {
                if (t <= tb) {
                    break;
                }
                nextHot = true;
            }
        }

        cout << min_cups << "\n";
    }
    return 0;
}