#include <bits/stdc++.h>

using namespace std;

int distance(const string &s1, const string &s2) {
    int dist = 0;
    for (int I = 0; I < s1.length(); I++) {
        if (s1[I] != s2[I])
            dist++;
    }
    return dist;
}

int main() {

//    freopen("i.txt", "r", stdin);
//    freopen("o.txt", "w", stdout);

    int t;
    cin >> t;
    for(int T = 1; T <= t; T++){
        int n, m;
        cin >> n >> m;
        vector<string> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        string ans;
        bool foundAnswer = false;

        // Create all possible strings changing one character from string 0
        for (int j = 0; j < m; j++) {
            ans = a[0];
            for (char c = 'a'; c <= 'z'; c++) {
                ans[j] = c;
                foundAnswer = true;
                for (int i = 0; i < n; i++) {
                    if (distance(ans, a[i]) > 1) {
                        foundAnswer = false;
                        break;
                    }
                }
                if (foundAnswer)
                    break;
            }
            if (foundAnswer)
                break;
        }
        cout << (foundAnswer ? ans : "-1") << "\n";
    }
    cout << endl;
}

