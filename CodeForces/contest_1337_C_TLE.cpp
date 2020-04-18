#include <bits/stdc++.h>

using namespace std;

vector<set<int>> neighbours;
vector<int> dist;
vector<int> hanging;
vector<bool> visited;
vector<int> previous;

void updateHanging(int c) {
    hanging[c]++;
    if (c != 0) {
        updateHanging(previous[c]);
    }
}

void visit(int c) {
    if (!visited[c]) {
        visited[c] = true;
//        cout << "Visit: " << c+1 << endl;
        if (c == 0) {
            dist[c] = 0;
        } else {
            dist[c] = dist[previous[c]] + 1;
            updateHanging(previous[c]);
        }
//        cout << "Distance of " << c+1 << " is: " << dist[c] << endl;
        for (int neighbour : neighbours[c]) {
            if (!visited[neighbour]) {
                previous[neighbour] = c;
                visit(neighbour);
            }
        }
    }
}

int main() {

//    freopen("input.txt", "r", stdin);

    int n, k;
    cin >> n >> k;

    int tourism_cities = n - k;

    neighbours.resize(n);
    dist.resize(n, 0);
    hanging.resize(n, 0);
    previous.resize(n);
    visited.resize(n, false);

    for (int I = 0; I < n - 1; I++) {
        int from, to;
        cin >> from >> to;
        neighbours[from - 1].insert(to - 1);
        neighbours[to - 1].insert(from - 1);
    }

    previous[0] = 0;
    visit(0);

    for(int c = 0; c < n; c++){
//        cout << "Dependants of " << c+1 << " are: " << hanging[c] << endl;
        dist[c] -= hanging[c];
    }

    sort(dist.begin(), dist.end());
    int sum = 0;
    for (int c = n - 1; c >= n - k; c--) {
//        cout << "Choose city with value: " << dist[c] << endl;
        sum += dist[c];
    }

    cout << sum << "\n";

    return 0;
}