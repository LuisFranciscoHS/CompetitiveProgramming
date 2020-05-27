#include <bits/stdc++.h>

using namespace std;

int main(){

#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
#endif

    int t;
    cin >> t;
    vector<unsigned long long> sums_of_2;
    unsigned long long value = 0;
    int power = 1;
    sums_of_2.push_back(1);
    while(value < 10e9){
        value = 1 << power;
        sums_of_2.push_back(value + sums_of_2[power-1]);
        //cout << sums_of_2[power] << endl;
        power++;
    }

    while(t--){
        int n;
        cin >> n;
        for(int K = 2; K < sums_of_2.size(); K++){
            //cout << "Check K = " << K << endl;
            if(!(n % sums_of_2[K-1])){
                cout << n / sums_of_2[K-1] << endl;
                break;
            }
        }
    }
    return 0;
}