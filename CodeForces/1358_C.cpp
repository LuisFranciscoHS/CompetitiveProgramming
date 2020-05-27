#include <iostream>

using ull = unsigned long long;

ull nCr(ull n, ull r) {
    if (r > n)
        return 0;
    ull ans = 1;
    for (ull d = 1; d <= r; d++) {
        ans *= n--;
        ans /= d;
    }
    return ans;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int x1, y1, x2, y2;
        std::cin >> x1 >> y1 >> x2 >> y2;
        int right_steps = (x2 - x1);
        int total_steps = right_steps + (y2 - y1);
        std::cout << nCr(total_steps, right_steps) << std::endl;
    }
}