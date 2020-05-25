#include <iostream>

int solve_A() {
    int t;
    std::cin >> t;

    while (t--) {
        int a, b;
        std::cin >> a >> b;
        int side;
        if (a < b) {
            side = std::max(2 * a, b);
        } else {
            side = std::max(2 * b, a);
        }
        std::cout << (side) * (side) << "\n";
    }

    return 0;

}
