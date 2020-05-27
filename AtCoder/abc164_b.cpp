#include <cstdio>
#include <iostream>
#include <set>

int main() {
    int N;
    std::set<std::string> items;
    scanf("%d", &N);
    while(N--){
        std::string item;
        std::cin >> item;
        items.insert(item);
    }
    printf("%d\n", items.size());
    return 0;
}