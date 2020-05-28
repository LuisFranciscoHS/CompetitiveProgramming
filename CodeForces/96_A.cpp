#include <iostream>

int main() {
    std::string s;
    std::cin >> s;
    bool isSafe = true;

    int contig = 1;
    for (int I = 1; I < s.length(); I++) {
        if (s[I] == s[I - 1]) {
            contig++;
            if (contig >= 7) {
                isSafe = false;
                break;
            }
        } else {
            contig = 1;
        }
    }

    std::cout << (isSafe ? "NO" : "YES") << std::endl;

    return 0;
}