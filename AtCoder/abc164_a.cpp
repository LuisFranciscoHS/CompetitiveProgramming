#include <bits/stdc++.h>

using namespace std;

int main(){

    int S, W;

    cin >> S >> W;

    if(W >= S)
        cout << "unsafe";
    else
        cout << "safe";

    cout << endl;

    return 0;
}