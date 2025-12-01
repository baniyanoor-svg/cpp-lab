#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    vector<int> v(N);
    unordered_map<int,int> freq;

    cout << "Enter elements:\n";
    for (int i = 0; i < N; i++) {
        cin >> v[i];
        freq[v[i]]++;
    }

    for (int x : v) {
        if (freq[x] == 1) {
            cout << "First non-repeating: " << x;
            return 0;
        }
    }

    cout << -1;
}