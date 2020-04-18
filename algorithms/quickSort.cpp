#include <iostream>
#include <vector>

using namespace std;

int partition(vector<char> &a, int lo, int hi) {
    int pivot = a[hi];
    int I = (lo - 1);

    for(int J = lo; J <= hi -1; J++){
        cout << "? " << a[J] << " " << a[hi] << endl;
        char s;
        cin >> s;
        if(s == '<'){
            I++;
            swap(a[I], a[J]);
        }
    }
    swap(a[I+1], a[hi]);
    return (I+1);
}

void quickSort(vector<char> &a, int lo, int hi) {
    if (lo < hi) {
        int pi = partition(a, lo, hi);
        quickSort(a, lo, pi-1);
        quickSort(a, pi+1, hi);
    }
}

int main() {

    //freopen("input.txt", "r", stdin);

    int N, Q;
    std::cin >> N >> Q;

    vector<char> a(N);
    for(int I = 0; I < N; I++){
        a[I] = 'A'+I;
    }
    quickSort(a, 0, N-1);

    cout << "! ";
    for(auto c : a){
        std::cout << c;
    }
    cout << endl;
    return 0;
}