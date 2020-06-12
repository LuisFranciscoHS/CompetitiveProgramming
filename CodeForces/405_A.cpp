#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int &ai : a)
        cin >> ai;
    sort(a.begin(), a.end());

    cout << a[0];
    for (int I = 1; I < n; I++) {
        cout << " " << a[I];
    }
    cout << endl;
}