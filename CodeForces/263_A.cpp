#include <iostream>

int main() {
    int i, j;
    int val;
    for (int I = 0; I < 5; I++) {
        for (int J = 0; J < 5; J++) {
            std::cin >> val;
            if (val) {
                i = I + 1;
                j = J + 1;
            }
        }
    }

    std::cout << std::abs(3 - i) + std::abs(3 - j) << "\n";
    return 0;
}