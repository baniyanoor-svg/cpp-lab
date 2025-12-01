#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string filename;
    cout << "Enter filename: ";
    cin >> filename;

    ifstream fin(filename);
    if (fin) {
        cout << "File already exists." << endl;
    } else {
        ofstream fout(filename);
        fout << "This file was automatically created because it did not exist.";
        cout << "File created successfully." << endl;
    }
}