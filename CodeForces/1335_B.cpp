#include <bits/stdc++.h>

using namespace std;

int main() {

    //freopen("input.txt", "r", stdin);

    int t;
    cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        string res = "";

        for (int C = 0; C < b; C++) {
            char c = 'a' + C;
            res.push_back(c);
        }
        char c = 'a' + b - 1;
        for (int C = 0; C < a - b; C++) {
            res.push_back(c);
        }
        int times = n / a;
        for (int V = 0; V < times; V++) {
            cout << res;
        }
        int leftover = n % a;
        for (int I = 0; I < leftover; I++) {
            cout << res.at(I);
        }
        cout << "\n";
    }
}