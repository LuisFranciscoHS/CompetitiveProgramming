#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    bool willOutput = false;

    for (auto c : s) {
        if (c == 'H' || c == 'Q' || c == '9') {
            willOutput = true;
            break;
        }
    }

    std::cout << (willOutput ? "YES" : "NO") << std::endl;
}