#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    int N, K;
    cout << "Enter N: ";
    cin >> N;

    vector<int> v(N);
    cout << "Enter elements:\n";
    for (int i = 0; i < N; i++) cin >> v[i];

    cout << "Enter K: ";
    cin >> K;

    priority_queue<int> pq;
    for (int x : v) pq.push(x);

    cout << K << " largest elements: ";
    while (K-- && !pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
}