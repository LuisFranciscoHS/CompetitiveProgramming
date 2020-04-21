#include <vector>
#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int min_num = 1001;
    int max_num = -1;
    int ai;
    for (int I = 0; I < N; I++) {
        cin >> ai;
        min_num = std::min(min_num, ai);
        max_num = std::max(max_num, ai);
    }

    cout << (max_num - min_num) << endl;

    return 0;
}