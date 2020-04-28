#include <bits/stdc++.h>

using namespace std;

int main() {

//    freopen("input.txt", "r", stdin);

    int t;
    cin >> t;
    while (t--) {
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;
        long long min_value = n * (a - b);
        long long max_value = n * (a + b);
        long long pack_min = (c -d);
        long long pack_max = c+d;
//        cout << min_value << " - " << max_value << endl;
//        cout << "[" << (c - d) << ", " << (c + d) << "]" << endl;
        if ((pack_min <= min_value && min_value <= pack_max)
        || (pack_min <= max_value && max_value <= pack_max)
        || (pack_min >= min_value && max_value >= pack_max)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }


    return 0;
}
