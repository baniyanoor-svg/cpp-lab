#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("input.txt");
    ofstream fout("encrypted.txt");

    if (!fin || !fout) {
        cout << "Error opening file!" << endl;
        return 0;
    }

    char ch;
    while (fin.get(ch)) {
        ch = ch + 2;
        fout.put(ch);
    }

    cout << "Encryption completed!" << endl;
}