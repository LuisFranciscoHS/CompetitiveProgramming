#include <iostream>

using namespace std;
using ull = unsigned long long;

int main() {
    ull n, k;
    cin >> n >> k;

    if (n % 2 == 0) {
        // If n is even, then the first n/2 are odd then n/2 are even
        if (k <= n / 2) {
            cout << (k * 2) - 1;
        } else {
            cout << (k - (n / 2)) * 2;
        }
    } else {
        // If n is odd, then the first n/2+1 are odd and then floor(n/2) are even
        if (k <= (n / 2) + 1) {
            cout << (k * 2) - 1;
        } else {
            cout << (k - ((n / 2) + 1)) * 2;
        }
    }
    cout << endl;

}