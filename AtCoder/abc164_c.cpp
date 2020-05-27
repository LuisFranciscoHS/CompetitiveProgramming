#include <iostream>

using namespace std;

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    int tA = (A + D - 1) / D;
    int tT = (C + B - 1) / B;
    cout << (tT <= tA ? "Yes": "No") << "\n";
    return 0;
}