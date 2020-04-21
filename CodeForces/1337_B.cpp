#include <bits/stdc++.h>

using namespace std;

int main() {
//    freopen("input.txt", "r", stdin);

    int t;
    cin >> t;

    while (t--) {
        int x, n, m;
        cin >> x >> n >> m;
        while (x >= 21 && n--) {
            x /= 2;
            x += 10;
//            cout << "VA: " << x << endl;
        }
        x -= m * 10;
//        cout << "LS: " << x << endl;
        if (x <= 0)
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
    }


    return 0;
}