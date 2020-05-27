#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;
        std::vector<int> a(n);
        for (int I = 0; I < n; I++) {
            std::cin >> a[I];
        }
        std::sort(a.begin(), a.end());
        int ans = 1;
        for (int I = n - 1; I >= 0; I--) {
            //std::cout << "Try grany " << I+1 << std::endl;
            if (a[I] < I + 2) {
                ans = I + 2;
                break;
            }
        }
        std::cout << ans << "\n";
    }
}