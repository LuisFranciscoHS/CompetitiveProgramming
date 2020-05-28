#include <iostream>

int main() {
    std::string s1, s2;
    std::cin >> s1 >> s2;

    int I = 0;
    while (I < s1.length() && toupper(s1[I]) == toupper(s2[I]))
        I++;

    if (I == s1.length()) {
        std::cout << "0";
    } else {
        std::cout << (toupper(s1[I]) < toupper(s2[I]) ? "-1" : "1");
    }
    std::cout << "\n";

    return 0;
}