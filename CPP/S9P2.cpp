
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, X;
    cout << "Enter N: ";
    cin >> N;

    vector<int> v(N);
    cout << "Enter elements:\n";
    for (int i = 0; i < N; i++) cin >> v[i];

    cout << "Enter X to remove: ";
    cin >> X;

    v.erase(remove(v.begin(), v.end(), X), v.end());

    cout << "Updated vector: ";
    for (int y : v) cout << y << " ";
}