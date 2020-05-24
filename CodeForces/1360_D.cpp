#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n, k;
        std::cin >> n >> k;

        if (k >= n) {
            std::cout << "1\n";
        } else {
            // Candidate package sizes are all k's <= n
            int size = std::min(n, k);

            // Then check possible # bought packages from n / start_size
            while (n % size) {
                int packages = (n + size - 1) / size;
                size = n / packages;
            }
            std::cout << (n / size) << "\n";
        }

    }
    return 0;
}