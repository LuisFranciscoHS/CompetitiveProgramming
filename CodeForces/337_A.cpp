#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, m;
    std::cin >> n >> m;

    std::vector<int> f(m);
    for (int &fi : f)
        std::cin >> fi;

    std::sort(f.begin(), f.end());
    int ans = *f.rbegin() - *f.begin();
//    std::cout << "Initial answer is " << ans << std::endl;
    for (int I = 0; I <= m - n; I++) {
        ans = std::min(f[I + n - 1] - f[I], ans);
    }
    std::cout << ans << std::endl;
}