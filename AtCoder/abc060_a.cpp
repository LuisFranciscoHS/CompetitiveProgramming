#include <bits/stdc++.h>

using namespace std;

int main(){

    string a, b, c;
    cin >> a >> b >> c;

    if(*a.rbegin() == *b.begin() && *b.rbegin() == *c.begin()){
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
    }
    return 0;
}