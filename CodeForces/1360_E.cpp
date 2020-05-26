#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    int arr[51][51];

    while (t--) {
        int n;
        cin >> n;
        for (int I = 0; I < n; I++) {
            for (int J = 0; J < n; J++) {
                char c;
                cin >> c;
                arr[I][J] = c - '0';
            }
        }
        bool isValid = true;
        for (int I = 0; I < n - 1; I++) {
            for (int J = 0; J < n - 1; J++) {
                if (arr[I][J]) {
                    if (arr[I][J + 1] == 0 && arr[I + 1][J] == 0) {
                        isValid = false;
                        break;
                    }
                }
            }
            if (!isValid) {
                break;
            }
        }

        std::cout << (isValid ? "YES\n" : "NO\n");
    }
    return 0;
}