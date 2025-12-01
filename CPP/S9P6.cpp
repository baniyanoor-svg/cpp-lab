#include <iostream>
#include <map>
using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    map<string,int> mp;
    cout << "Enter " << N << " words:\n";
    for (int i = 0; i < N; i++) {
        string w;
        cin >> w;
        mp[w]++;
    }

    cout << "\nWord Frequencies:\n";
    for (auto &p : mp)
        cout << p.first << " " << p.second << "\n";
}