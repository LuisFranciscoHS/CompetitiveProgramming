#include <iostream>
#include <set>

bool hasElement(const std::set<int> &s, int element) {
    return (s.find(element) != s.end());
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::set<int> evens, odds;
        for (int I = 0; I < n; I++) {
            int ai;
            std::cin >> ai;
            if (ai % 2) {
                odds.insert(ai);
            } else {
                evens.insert(ai);
            }
        }

        bool hasPartition = false;
        // If even set has an even elements, then yes
        if (evens.size() % 2 == 0) {
            hasPartition = true;
        } else {
            // If not, at least one should be similar to an odd
            for (auto even : evens) {
                if (hasElement(odds, even - 1) || hasElement(odds, even + 1)) {
                    hasPartition = true;
                    break;
                }
            }
        }
        if (hasPartition) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
    return 0;
}