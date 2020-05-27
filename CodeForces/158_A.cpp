#include <bits/stdc++.h>

int main() {
    int n, k;
    std::cin >> n >> k;
    std::vector<int> a(n);
    for (int I = 0; I < n; I++) {
        std::cin >> a[I];
    }

    // Find first 0
    int first_zero = n + 1;
    if (auto it_zero = std::find(a.begin(), a.end(), 0); it_zero != a.end()) {
        first_zero = it_zero - a.begin();
    }
//    std::cout << "First zero at: " << first_zero << "\n";


    // Find last participant with a score equal or greater than the kth place
    int index = k - 1;
//    std::cout << k << "th place has a score of " << a[k - 1] << "\n";
    while (++index < n && a[index] >= a[k - 1]) {
//        std::cout << index+1 << "th participant passes too with score " << a[index] << "\n";
    }

    std::cout << std::min(first_zero, index);
}