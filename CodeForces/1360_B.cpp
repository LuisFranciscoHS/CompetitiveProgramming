#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> s(n);
        for (int I = 0; I < n; I++) {
            cin >> s[I];
        }
        std::sort(s.begin(), s.end());
        int pairwise_min = s[n - 1] - s[0];
        for (int I = 1; I < n; I++) {
            pairwise_min = std::min(pairwise_min, s[I] - s[I - 1]);
        }
        std::cout << pairwise_min << "\n";
    }
    return 0;
}