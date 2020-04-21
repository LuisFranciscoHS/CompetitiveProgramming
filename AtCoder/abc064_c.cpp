#include <iostream>
#include <bitset>

int main() {

    std::bitset<8> colors;
    int N, masters = 0;
    std::cin >> N;

    while (N--) {
        int ai;
        std::cin >> ai;

        if (ai <= 399) {
            colors[0] = true;
        } else if (ai <= 799) {
            colors[1] = true;
        } else if (ai <= 1199) {
            colors[2] = true;
        } else if (ai <= 1599) {
            colors[3] = true;
        } else if (ai <= 1999) {
            colors[4] = true;
        } else if (ai <= 2399) {
            colors[5] = true;
        } else if (ai <= 2799) {
            colors[6] = true;
        } else if (ai <= 3199) {
            colors[7] = true;
        } else {
            masters++;
        }
    }
    int min_colors = colors.count();
    if(colors.count() == 0 && masters){
        min_colors = 1;
    }
    std::cout << min_colors << " " << colors.count() + masters << std::endl;

    return 0;
}