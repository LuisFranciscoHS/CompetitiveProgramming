#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    std::string::size_type i;
    while ((i = s.find("WUB")) != std::string::npos) {
        s.replace(i, 3, " ");
    }

    size_t startpos = s.find_first_not_of(" ");
    if (startpos != 0) {
        s.replace(0, startpos, "");
    }
    std::cout << s << std::endl;
}