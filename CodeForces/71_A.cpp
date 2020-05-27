#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        std::string w;
        std::cin >> w;
        if (w.length() > 10) {
            std::cout << *w.begin() << w.length() - 2 << *w.rbegin() << "\n";
        } else {
            std::cout << w << "\n";
        }
    }
}