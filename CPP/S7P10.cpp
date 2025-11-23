#include <iostream>
#include <string>
using namespace std;


class NotTxtException {
public:
    const char* what() const {
        return "Not txt";
    }
};

int main() {
    string fname;
    cin >> fname;

    try {
       
        if (fname.size() < 4 || fname.substr(fname.size() - 4) != ".txt") {
            throw NotTxtException();
        }

        cout << "OK";
    }
    catch (NotTxtException& e) {
        cout << e.what();
    }

    return 0;
}