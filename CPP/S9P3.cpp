#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cout << "Enter number of pairs: ";
    cin >> N;

    vector<pair<int,int>> v(N);
    cout << "Enter pairs (a b):\n";
    for (int i = 0; i < N; i++) cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end(), [](auto &x, auto &y) {
        if (x.second == y.second) return x.first < y.first;
        return x.second < y.second;
    });

    cout << "Sorted pairs:\n";
    for (auto &p : v)
        cout << p.first << " " << p.second << "\n";
}