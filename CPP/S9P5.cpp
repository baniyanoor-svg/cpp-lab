#include <iostream>
#include <set>
using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    multiset<int> ms;
    cout << "Enter elements:\n";
    for (int i = 0; i < N; i++) {
        int x; cin >> x;
        ms.insert(x);
    }

    int X;
    cout << "Enter X to delete one occurrence: ";
    cin >> X;

    auto it = ms.find(X);
    if (it != ms.end()) ms.erase(it);

    cout << "Remaining elements: ";
    for (int x : ms) cout << x << " ";
}