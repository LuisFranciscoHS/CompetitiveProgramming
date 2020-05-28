#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::string s;
    std::cin >> s;
    std::vector<int> nums((s.length() / 2) + 1);

    int i = 0;
    for (int I = 0; I < s.length(); I += 2) {
        nums[i] = s[I] - '0';
        i++;
    }

    std::sort(nums.begin(), nums.end());

    std::cout << nums[0];
    for (i = 1; i < nums.size(); i++)
        std::cout << "+" << nums[i];

    std::cout << std::endl;
    return 0;
}