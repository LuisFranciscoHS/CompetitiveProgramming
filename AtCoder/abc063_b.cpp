#include <string>
#include <set>
#include <iostream>

int main() {
    std::string s;
    std::set<char> seen;
    bool repeated = false;

    std::cin >> s;
    for (char c : s) {
        if (seen.find(c) == seen.end())
            seen.insert(c);
        else {
            repeated = true;
            break;
        }
    }

    std::cout << (repeated ? "no" : "yes") << std::endl;
}