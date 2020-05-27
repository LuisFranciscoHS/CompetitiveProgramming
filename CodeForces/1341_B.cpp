#include <bits/stdc++.h>

using namespace std;

int main() {

//    freopen("input.txt", "r", stdin);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> peaks_until(n), a(n);
        for (int I = 0; I < n; I++) {
            cin >> a[I];
        }
        int peaks = 0;
        peaks_until[0] = 0;
        for (int I = 1; I <= n - 2; I++) {
            if (a[I - 1] < a[I] && a[I] > a[I + 1]) {
                peaks++;
            }
            peaks_until[I] = peaks;
        }
        peaks_until[n-1] = peaks;
        int ans = 1;
        int pos = 1;
        for (int I = 0; I <= n - k; I++) {
            int curr_sol = peaks_until[I + k - 2] - peaks_until[I] + 1;
            if (curr_sol > ans) {
                ans = curr_sol;
                pos = I + 1;
            }
        }
        cout << ans << " ";
        cout << pos << endl;
    }

    return 0;
}
