#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;
    int ans = 1;
    int curr_ans = 0;
    int prev = 0;
    while (n--) {
        int ai;
        cin >> ai;
        if (ai >= prev) {
            curr_ans++;
            ans = max(curr_ans, ans);
        } else {
            curr_ans = 1;
        }
        prev = ai;
    }
    cout << ans << endl;

    return 0;
}