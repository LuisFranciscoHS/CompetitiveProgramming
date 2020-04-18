#include <bits/stdc++.h>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int target = C % B;
    int sum = A;
    bool can = false;
    for (int I = 0; I < B; I++) {
//        cout << sum << " % " << B << " = " << (sum%B) << endl;
        if (sum % B == target) {
            can = true;
            break;
        }
        sum += A;
    }
    if (can)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}