#include <iostream>
#include <set>
using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    set<int> s;
    cout << "Enter elements:\n";
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }

    cout << "Sorted unique elements: ";
    for (int x : s) cout << x << " ";

    int X;
    cout << "\nEnter X to search: ";
    cin >> X;

    cout << (s.count(X) ? "YES" : "NO");
}