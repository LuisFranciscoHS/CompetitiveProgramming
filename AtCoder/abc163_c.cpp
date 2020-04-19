#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> subordinates(N+1, 0);

    for(int I = 2; I <= N; I++){
        int boss;
        cin >> boss;
        subordinates[boss]++;
    }

    for(int I = 1; I <= N; I++)
        cout << subordinates[I] << "\n";

    return 0;

}

