#include <iostream>

using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        s[1] == '+' ? ans++ : ans--;
    }
    cout << ans << endl;
}