#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filename, line;
    cout << "Enter file name: ";
    cin >> filename;

    ofstream file(filename, ios::app);
    if (!file) {
        cout << "Error opening file!" << endl;
        return 0;
    }

    cout << "Enter text to append (type STOP to end):\n";
    cin.ignore();
    while (true) {
        getline(cin, line);
        if (line == "STOP") break;
        file << line << endl;
    }

    cout << "Data appended successfully!" << endl;
    return 0;
}
