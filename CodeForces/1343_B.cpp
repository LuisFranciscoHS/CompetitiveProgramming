#include <bits/stdc++.h>

using namespace std;

int main() {

    //freopen("input.txt", "r", stdin);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 4 != 0) {
            cout << "NO\n";
        } else {
            vector<int> evens, odds;
            cout << "YES\n";
            for (int I = 1; I <= n / 4; I++) {
                evens.push_back((8*I)); // 8
                odds.push_back((8*I)-1); // 7
                evens.push_back((8*I) - 4); //4
                odds.push_back((8*I) +1 - 4); // 5
            }
            for(auto ai : evens){
                cout << ai << " ";
            }
            for(int I = 0; I < odds.size(); I++){
                cout << odds[I];
                if(I+1 < odds.size()){
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}