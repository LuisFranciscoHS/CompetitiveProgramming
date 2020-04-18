#include <bits/stdc++.h>

using namespace std;
using lli = long long int;

lli getMaxSum(const vector<int> &a, int N, int K) {
    multiset<int> s;
    for (int I = 0; I < K; I++)
        s.insert(a[I]);
    int I = 0;
    lli sum = 0;
    for (auto it = s.rbegin(); it != s.rend(); it++) {
        sum += *it;
        I++;
        if (I == N)
            break;
    }
    return sum;
}

lli getMinSum(const vector<int> &a, int N, int K) {
    multiset<int> s;
    for (int I = K; I < a.size(); I++)
        s.insert(a[I]);
    int I = 0;
    lli sum = 0;
    for (auto it = s.begin(); it != s.end(); it++) {
        sum += *it;
        I++;
        if (I == N)
            break;
    }
    return sum;
}

int main() {

//    freopen("input.txt", "r", stdin);

    int N;
    cin >> N;
    vector<int> a(3 * N);

    for (int I = 0; I < 3 * N; I++) {
        cin >> a[I];
    }

    lli max_sum = -10e9 +5;
    int max_K;
    // From K on inclusive it goes to the blue
    for (int K = N; K <= 2 * N; K++) {
        lli sum_red = getMaxSum(a, N, K);
        lli sum_blue = getMinSum(a, N, K);
        if(K == N)
            max_sum = sum_red - sum_blue;
        else
            max_sum = std::max(max_sum, sum_red - sum_blue);
//        cout << K << ": " << sum_red << " - " << sum_blue << " = " << sum_red - sum_blue << endl;
        max_K = K;
    }
    cout << max_sum << "\n";
}