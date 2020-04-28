#include <iostream>
#include <set>

int main() {
    int N;
    std::set<std::string> items;
    std::cin >> N;

    while(N--){
        std::string item;
        std::cin >> item;
        items.insert(item);
    }

    std::cout << items.size() << std::endl;
    return 0;
}