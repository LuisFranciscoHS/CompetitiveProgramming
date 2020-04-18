#include <bits/stdc++.h>

using namespace std;

int next(char value) {
    value++;
    if (value == '9' + 1)
        value = '1';
    return value;
}

int main() {

    //freopen("input.txt", "r", stdin);

    int t;
    cin >> t;
    while (t--) {
        char field[9][9];
        for (int I = 0; I < 9; I++) {
            for (int J = 0; J < 9; J++) {
                cin >> field[I][J];
            }
        }
        field[0][0] = next(field[0][0]);
        field[1][3] = next(field[1][3]);
        field[2][6] = next(field[2][6]);

        field[3][1] = next(field[3][1]);
        field[4][4] = next(field[4][4]);
        field[5][7] = next(field[5][7]);

        field[6][2] = next(field[6][2]);
        field[7][5] = next(field[7][5]);
        field[8][8] = next(field[8][8]);

        for (int I = 0; I < 9; I++) {
            for (int J = 0; J < 9; J++) {
                cout << field[I][J];
            }
            cout << "\n";
        }
        cout << "\n";
    }
}