#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    string s;
    cin >> s;

    try {
        if (s[0] == '-') {
            throw invalid_argument("Negative");
        }

        int x = stoi(s);  
        cout << x;
    }
    catch (invalid_argument&) {
        cout << "Negative not allowed";
    }

    return 0;
}