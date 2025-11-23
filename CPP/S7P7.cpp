#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    try {
        if (x == 0) {
            throw "Zero";  
        }
        cout << "OK";
    }
    catch (const char* msg) {
        cout << "Caught " << msg;
    }

    return 0;
}