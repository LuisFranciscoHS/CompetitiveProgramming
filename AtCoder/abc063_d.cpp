#include <vector>
#include <iostream>

bool enough(const std::vector<int> &h, const int t, const int A, const int B) {
    int extra_attack = A - B;
    int extra_attacks = t;
    int initial_attack = B * t;
    for (int I = 0; I < h.size(); I++) {
        int remainder = h[I] - initial_attack;
        if (remainder > 0) {
            extra_attacks -= (remainder + extra_attack - 1) / extra_attack;
            if (extra_attacks < 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int N, A, B;
    std::cin >> N >> A >> B;
    std::vector<int> h(N);

    int max_value = 0;
    for (int I = 0; I < N; I++) {
        std::cin >> h[I];
        max_value = std::max(max_value, h[I]);
    }

    int low = 0, high = max_value / B + 1;

    while (high > low) {
        int mid = low + ((high - low) / 2);
        if (enough(h, mid, A, B)) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    std::cout << high << std::endl;
}