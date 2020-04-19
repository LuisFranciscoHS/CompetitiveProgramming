#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int N, sum = 0;
    std::cin >> N;
    std::vector<int> s(N);
    for (int I = 0; I < N; I++) {
        std::cin >> s[I];
        sum += s[I];
    }

    std::sort(s.begin(), s.end());

    int index = 0;
    while (!(sum % 10) && index < N) {
        if (s[index] % 10 != 0) {
            sum -= s[index];
        }
        index++;
    }
    if (sum % 10 == 0)
        std::cout << 0;
    else
        std::cout << sum;

    return 0;
}