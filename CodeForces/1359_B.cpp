#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, x, y, ans = 0;
        cin >> n >> m >> x >> y;

        for (int r = 0; r < n; r++) {
            string s;
            cin >> s;
            int contig = (s[0] == '.' ? 1 : 0);
//            cout << "Contig: " << contig << endl;
            for (int c = 1; c < m; c++) {
                if (s[c] == '.') {
                    contig++;
//                    cout << "Contig: " << contig << endl;
                } else {
                    ans += (x < (y + 1) / 2) ? x * contig : ((contig / 2) * y) + (contig % 2 ? x : 0);
                    contig = 0;
//                    cout << "Contig: " << contig << endl;
                }
            }
            if (contig)
                ans += (x < (y + 1) / 2) ? x * contig : ((contig / 2) * y) + (contig % 2 ? x : 0);
//            cout << "Temp ans " << ans << endl;
        }

        cout << ans << "\n";
    }
    return 0;
}