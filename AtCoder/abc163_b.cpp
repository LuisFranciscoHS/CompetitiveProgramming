#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, M;

    cin >> N >> M;

    long long int days_needed = 0;
    for(int I = 0; I < M; I++){
        int ai;
        cin >> ai;
        days_needed += ai;
    }

    if(N < days_needed){
        cout << -1 << endl;
    } else{
        cout << N - days_needed << endl;
    }

    return 0;

}

