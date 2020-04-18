#include <bits/stdc++.h>

using namespace std;

int main(){

//    freopen("input.txt", "r", stdin);

    int H, W;
    char c;
    cin >> H >> W;

    for(int J = 0; J < W+2; J++){
        cout << "#";
    }
    cout << "\n";
    for(int I = 0; I < H; I++){
        cout << "#";
        for(int J = 0; J < W; J++){
            cin >> c;
            cout << c;
        }
        cout << "#\n";
    }
    for(int J = 0; J < W+2; J++){
        cout << "#";
    }
    cout << "\n";

    return 0;
}