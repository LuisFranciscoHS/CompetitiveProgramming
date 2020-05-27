#include <iostream>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n, m;
        std::cin >> n >> m;

        // If one dimension is even then there is no need to use borders
        if (n % 2 == 0 || m % 2 == 0) {
            std::cout << (n * m) / 2 << "\n";
        } else {
            // If both dimensions are odd, then take the longer dimension /2 +1
            std::cout << ((n * m) / 2) + 1 << "\n";
        }
    }
}