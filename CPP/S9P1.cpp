#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    vector<int> v(N);
    cout << "Enter " << N << " elements:\n";
    for (int i = 0; i < N; i++) cin >> v[i];

    int X, P;
    cout << "Enter element X to insert: ";
    cin >> X;
    cout << "Enter position P: ";
    cin >> P;

    if (P >= 0 && P <= N)
        v.insert(v.begin() + P, X);

    cout << "Final vector: ";
    for (int x : v) cout << x << " ";
}