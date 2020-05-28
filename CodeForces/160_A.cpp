#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, sum = 0;
    std::cin >> n;
    std::vector<int> a(n);

    for (int I = 0; I < n; I++) {
        std::cin >> a[I];
        sum += a[I];
    }
    std::sort(a.begin(), a.end(), std::greater<int>());

    int coins;
    int mySum = 0;
    for (coins = 0; mySum <= sum - mySum && coins < n; mySum += a[coins], coins++);

    std::cout << coins << std::endl;

    return 0;
}